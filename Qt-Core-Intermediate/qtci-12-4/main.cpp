#include <QCoreApplication>
#include <QDebug>
#include <QMetaObject>
#include <QMetaProperty>
#include <QMetaClassInfo>
#include <QMetaMethod>
#include <QVariant>
#include "test.h"


void listClassInfo(QObject *qObjectPtr) {
    qInfo() << qObjectPtr->metaObject()->className();
    for(int i = 0; i < qObjectPtr->metaObject()->classInfoCount(); i++) {
        QMetaClassInfo c = qObjectPtr->metaObject()->classInfo(i);
        qInfo() << "Property: " << c.name() << " = " << c.value();
    }
}


void pointerTest(QObject *o) {
    qInfo() << o;
}

void referenceTest(QObject &o) {
    qInfo() << &o;
}

void copyTest(QObject o) {
    qInfo() << &o;
}





int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    {
        Test t;
        listClassInfo(&t);
    }


    {
        Test t;
        pointerTest(&t);
        referenceTest(t);
        // can not be copied!
        // copyTest(t);
    }





    return a.exec();
}
