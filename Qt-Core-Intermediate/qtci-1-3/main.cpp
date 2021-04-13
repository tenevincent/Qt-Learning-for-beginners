#include <QCoreApplication>
#include <QDebug>
#include <QScopedPointer>
#include "test.h"


void mytest(QScopedPointer<Test> &mypointer) {
    qInfo() << mypointer.data();
}


void useit(Test* testPtr) {
    if(!testPtr) return;

    qInfo() << "Using" << testPtr;
}

void doStuff() {
    //test *t = new test(); // dangling pointer!!!
    QScopedPointer<Test> mypointer(new Test());

    useit(mypointer.data());
    mytest(mypointer);
    //pointer is automatically deleted!!!
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    for(int i = 0; i < 10; i++) {
        doStuff();
    }

    doStuff();


    return a.exec();
}
