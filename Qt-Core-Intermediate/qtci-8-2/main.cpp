#include <QCoreApplication>
#include "test.h"

#include <QDataStream>
#include <QDebug>
#include <QDir>
#include <QFile>


bool saveFile(const Test &testObject,QString path) {
    QFile file(path);
    if(!file.open(QIODevice::WriteOnly)) return false;

    QDataStream dataStream(&file);
    dataStream.setVersion(QDataStream::Qt_5_11);

    //ds << t->name();
    // ds << t->map();

    dataStream << testObject;
    file.close();
    return true;
}


bool loadFile(QString path) {

    QFile file(path);
    if(!file.open(QIODevice::ReadOnly)){
        return false;
    }

    QDataStream ds(&file);
    Test test;
    ds >> test;

    file.close();

    qInfo() << "Name: " << test.name();
    foreach(QString key, test.map().keys()) {
        qInfo() << key << " : " << test.map().value(key);
    }

    return true;
}






int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString path = "test.txt";

      Test testObject;
      testObject.fill();
      if(saveFile(testObject,path)) {
          loadFile(path);
      }




    return a.exec();
}
