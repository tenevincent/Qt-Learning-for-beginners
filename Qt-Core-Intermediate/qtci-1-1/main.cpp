#include <QCoreApplication>
#include "test.h"
#include "car.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    {

        Test *testPtr = new Test(nullptr); // should have a parent &a
        Car *car = new Car(testPtr);
        car->makeParent("parent");

        testPtr->setObjectName("parent");

        for(int i = 0; i < 5; i++) {
            testPtr->makeChild(QString::number(i));
        }

        delete  testPtr;
    }


    return a.exec();
}
