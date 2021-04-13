#include <QCoreApplication>
#include <QDebug>
#include <QSharedPointer>
#include "test.h"
#include "consumer.h"

void doDeleteLater(Test *obj) {
    qInfo() << "Deleting: " << obj;
    obj->deleteLater();
}


QSharedPointer<Test> createPointer() {
    Test *test = new Test(); // the bad way!!!
    test->setObjectName("Test Object");
    QSharedPointer<Test> p(test,doDeleteLater); //&QObject::deleteLater
    return p;
}

void doStuff(QSharedPointer<Consumer> ptr) {
    qInfo() << "In function: " << ptr.data()->tester;
    ptr.clear(); //Does not actually delete!, just removes the reference
}


QSharedPointer<Consumer> makeConsumer() {
    QSharedPointer<Consumer> c(new Consumer(), &QObject::deleteLater);
    QSharedPointer<Test> t = createPointer();

    c.data()->tester.swap(t);
    doStuff(c);

    return c;
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    {
        QSharedPointer<Consumer> consume = makeConsumer();
        qInfo() << "In main: " << consume.data()->tester;
       // consume.clear(); //Does not actually delete!, just removes the reference
    }


    return a.exec();
}
