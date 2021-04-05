#include <QCoreApplication>

#include <QDebug>
#include "test.h"
#include "base.h"
#include "derived1.h"
#include "derived2.h"



void demo_templates();


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Base * basePtr = new Derived2();
    Derived1 * derive1Ptr = dynamic_cast<Derived1* >(basePtr);

    if(derive1Ptr){
        derive1Ptr->derivedFunction01();
    }

    qInfo() << " " << derive1Ptr;
    // demo_templates();


    delete  basePtr;

    return a.exec();
}


void demo_templates()
{

    test<int> intCalc;
    qInfo() << intCalc.add(1,4);

    test<double> doubleCalc;
    qInfo() << doubleCalc.add(1.09,0.075);

    test<QString> stringCalc;
    qInfo() << stringCalc.add("Hello ", "World");
}

