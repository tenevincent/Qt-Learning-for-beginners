#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "animal.h"


void test(QString* value) ;
void pointer_copy();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // pointer_copy();


    //create the parent
    Test* parent = new Test(&a);
    parent->dog = new Animal(parent);
    delete parent;




    return a.exec();
}



void test(QString* value) {
    qInfo() << *value;
}




void pointer_copy()
{
    QString* data = new QString("asjdajdlkasdjasdjlkasdlsadjlksjdaljalkdkljasdjasdjlkajdlkjasdjasdjaldlkasdlkajsdasdlkasdlasd");

     qInfo() << "Actual size:" << data->length();
     qInfo() << "Pointer size:" << sizeof(data);
     qInfo() << "Data:" << *data;
     qInfo() << "Sizeof:" << sizeof(*data);

     test(data);

     //SUPER FAST!!! memory access
     delete data;
}



