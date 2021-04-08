#include "converter.h"

Converter::Converter(QObject *parent) : QObject(parent)
{

}

void Converter::writeJson(Test *test, QString path)
{
    QVariantMap map;
    QVariantMap items;
    map["name"] = test->name();

    foreach(QString key, test->map().keys()) {
        items.insert(key, QVariant(test->map().value(key)));
    }

    map["items"] = QVariant(items);

    QJsonDocument document = QJsonDocument::fromVariant(map);

    QFile file(path);
    if(!file.open(QIODevice::WriteOnly)) {
        qCritical() << "Could not write file!";
        qCritical() << file.errorString();
        return;
    }

    file.write(document.toJson());
    file.close();


}

Test *Converter::readJson(QString path)
{
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)) {
        qCritical() << "Could not read file!";
        qCritical() << file.errorString();
        return nullptr;
    }

    QByteArray data = file.readAll();
    file.close();

    QJsonDocument document = QJsonDocument::fromJson(data);
    Test *test = new Test();
    test->setName(document["name"].toString());
    QVariantMap vmap = qvariant_cast<QVariantMap>(document["items"]);


    QMap<QString,QString> map;
    foreach(QString key, vmap.keys()) {
        map.insert(key,vmap[key].toString());
    }
    test->setMap(map);

    return  test;


}
