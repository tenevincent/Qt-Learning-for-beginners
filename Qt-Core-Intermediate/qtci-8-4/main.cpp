
#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "converter.h"


void writeJson(QString path) {
    Test test;
    test.fill();
    Converter::writeJson(&test, path);
}

void writeXml(QString path) {
    Test test;
    test.fill();
    Converter::writeXml(&test, path);
}


void readXml(QString path) {

    std::unique_ptr<Test> testObjPtr = std::make_unique<Test>(Converter::readXml(path));

    if(!testObjPtr) {
        qInfo() << "Object not loaded";
        return;
    }

    qInfo() << "Name: " << testObjPtr->name();
    foreach(QString key, testObjPtr->map().keys()) {
        qInfo() << key << " : " << testObjPtr->map().value(key);
    }
}




void readJson(QString path) {
    Test *t;
    t = Converter::readJson(path);

    if(!t) {
        qInfo() << "Object not loaded";
        return;
    }

    qInfo() << "Name: " << t->name();
    foreach(QString key, t->map().keys()) {
        qInfo() << key << " : " << t->map().value(key);
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString fileNameJson = "test.json";

    writeJson(fileNameJson);
    readJson(fileNameJson);

    QString xmlpath = "test.xml";
    writeXml(xmlpath);
    readXml(xmlpath);


    return a.exec();
}
