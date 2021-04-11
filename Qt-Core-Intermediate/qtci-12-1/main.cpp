#include <QCoreApplication>
#include <QDebug>
#include <QMetaObject>
#include <QMetaProperty>
#include <QMetaClassInfo>
#include <QTimer>
#include "test.h"

#include <QMetaObject>
#include <QMetaProperty>
#include <QMetaClassInfo>
#include <QMetaMethod>
#include <QTimer>
#include <QVariant>


void listProperties(QObject *obj) {
    for(int i = 0; i < obj->metaObject()->propertyCount(); i++) {
        QMetaProperty p = obj->metaObject()->property(i);
        qInfo() << "Property: " << p.name() << " is a " << p.typeName();
    }
}


void listMethods(QObject *obj) {
    for(int i = 0; i < obj->metaObject()->methodCount(); i++) {
        QMetaMethod m = obj->metaObject()->method(i);
        qInfo() << "Method: " << m.methodSignature();
    }
}

void listChildren(QObject *obj) {
    qInfo() << "Object: " << obj;

    foreach(QObject *child,obj->children()){
        qInfo() << child;
        listMethods(child);
        listProperties(child);
        qInfo("");
    }
}


void testProperties(QObject *parent, QString name, QVariant value) {
    foreach(QObject *child, parent->children()) {
        child->setProperty(name.toLatin1(), value);
    }
}


void demo_Qobject();

void demo_list_objects();



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // demo_Qobject();



    // demo_list_objects();



    {
        QObject parent;
        QTimer *t = new QTimer(&parent);
        // The interval is set here...
        testProperties(&parent, "interval", 3000);
        listChildren(&parent);
    }


    return a.exec();
}


void demo_Qobject()
{
    QObject parent;
    QTimer *timer = new QTimer(&parent);
    //make some children
    for(int i = 0; i < 5; i++) {
        Test *test = new Test(&parent);
        test->setObjectName("Child: " + QString::number(i));
    }


    foreach(QObject *child, parent.children()) {
        qInfo() << child;
        qInfo() << child->metaObject()->className();
        qInfo() << "Inherits: " << child->inherits("test");

        for(int m = 0; m < child->metaObject()->methodCount(); m++) {
            qInfo() << "Method: " << child->metaObject()->method(m).methodSignature()
                    << "Slot: "  <<   child->metaObject()->method(m).attributes() ;
        }
        qInfo("");
    }
}

void demo_list_objects()
{
    QObject parent;
    QTimer *t = new QTimer(&parent);
    for(int i = 0; i < 5; i++) {
        Test *child = new Test(&parent);
        child->setObjectName("Child " + QString::number(i));
    }
    listChildren(&parent);
}


