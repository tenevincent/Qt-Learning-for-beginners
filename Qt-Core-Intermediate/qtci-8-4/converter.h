#ifndef CONVERTER_H
#define CONVERTER_H

#include <QObject>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QJsonObject>
#include <QJsonArray>
#include <QVariant>
#include <QJsonDocument>
#include <QMap>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>

#include "test.h"


class Converter : public QObject
{
    Q_OBJECT
public:
    explicit Converter(QObject *parent = nullptr);

    static  void  writeJson(Test * const test, QString path)  ;
    static Test* readJson(QString path);


    static void writeXml(Test * const test, QString path);

    static Test *readXml(QString path);


signals:

};

#endif // CONVERTER_H
