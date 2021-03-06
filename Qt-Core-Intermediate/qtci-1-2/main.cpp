#include <QCoreApplication>

//The QPointer class is a template class that provides guarded pointers to QObject.
//Remember we might not control the pointer in the consumer class

#include <QDebug>
#include <QPointer>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObject *obj = new QObject(nullptr);
    obj->setObjectName("My Object");

    QPointer<QObject> qPointer(obj);

    test t;
    t.widget = qPointer;
    t.useWidget();

    if(qPointer.data()) qInfo() << qPointer.data();

    delete  obj;
    t.useWidget();

    return a.exec();
}
