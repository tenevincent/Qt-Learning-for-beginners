#include "converter.h"

Converter::Converter(QObject *parent) : QObject(parent)
{

}

void   Converter::writeJson(  Test * const test, QString path)
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


void Converter::writeXml(Test * const obj, QString path)
{
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly)) {
        qCritical() << "Could not write file!";
        qCritical() << file.errorString();
        return;
    }

    QXmlStreamWriter stream(&file);
    stream.setAutoFormatting(true);

    stream.writeStartDocument();
    stream.writeStartElement("test");
    stream.writeAttribute("name", obj->name());

    stream.writeStartElement("items");
    foreach(QString key, obj->map().keys()) {
        stream.writeStartElement("item");
        stream.writeAttribute("key",key);
        stream.writeAttribute("value", obj->map().value(key));
        stream.writeEndElement();
    }
    stream.writeEndElement();

    stream.writeEndElement();
    stream.writeEndDocument();

    file.flush();
    file.close();
}





Test *Converter::readXml(QString path)
{
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)) {
        qCritical() << "Could not read file!";
        qCritical() << file.errorString();
        return nullptr;
    }

    QByteArray data = file.readAll();
    file.close();

    QXmlStreamReader stream(data);

    Test *testPtr = new Test();
    QMap<QString, QString> map;

    while (!stream.atEnd()) {
        QXmlStreamReader::TokenType token = stream.readNext();
        switch (token) {
        case QXmlStreamReader::Comment:
            break;
        case QXmlStreamReader::DTD:
            break;
        case QXmlStreamReader::Characters:
            break;
        case QXmlStreamReader::ProcessingInstruction:
            break;
        case QXmlStreamReader::EntityReference:
            break;
        case QXmlStreamReader::NoToken:
            break;
        case QXmlStreamReader::Invalid:
            break;
        case QXmlStreamReader::StartDocument:
            break;
        case QXmlStreamReader::EndDocument:
            testPtr->setMap(map);
            break;
        case QXmlStreamReader::StartElement:
            if(stream.name() == "test") {
                QString name = stream.attributes().value("name").toString();
                testPtr->setName(name);
            }
            if(stream.name() == "item") {
                QString key = stream.attributes().value("key").toString();
                QString value = stream.attributes().value("value").toString();
                map.insert(key,value);
            }
            break;
        case QXmlStreamReader::EndElement:
            break;
        }
    }

    return testPtr;
}
