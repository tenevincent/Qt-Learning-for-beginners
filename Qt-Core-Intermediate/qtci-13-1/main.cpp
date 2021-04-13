#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "widget.h"

//Singleton pattern
//https://wiki.qt.io/Qt_thread-safe_singleton
//Watch for bug in singleton.h line 31

/*
    Need one and only one instance of a class
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    TestClass::instance()->name = "Bryan";
    qInfo() << TestClass::instance()->name;

    for(int i = 0; i < 5; i++) {
        Widget w;
        w.makeChanges("Widget: " + QString::number(i));
    }


    qInfo() << TestClass::instance()->name;

    return a.exec();
}
