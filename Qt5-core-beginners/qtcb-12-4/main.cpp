#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

// reinterpret cast

// Unlike static_cast, but like const_cast, the reinterpret_cast expression does not compile to any CPU instructions
// (except when converting between integers and pointers or on obscure architectures where pointer representation
// depends on its type). It is purely a compile-time directive which instructs the compiler to treat expression as if
// it had the type new_type.


void testDrive(Car* obj) {
    obj->drive();
    obj->stop();
}

void race(RaceCar* obj) {
    obj->gofast();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    RaceCar* player1 = new RaceCar(&a);

    //The correct way is to dynamic cast to ensure the conversion takes place
    Car* obj = dynamic_cast<Car*>(player1);
    if(obj) testDrive(obj);

    //We can go from the base back to the derived because the classes we created are polymorphic
    //Static cast should work fine - this is the way to go from a base to a derived class saftly!!!!!!
    RaceCar* speedster = static_cast<RaceCar*>(obj);
    if(speedster) race(speedster);


    int* pointer = reinterpret_cast<int*>(speedster);
    qInfo() << "pointer = " << pointer;

    RaceCar* mycar = reinterpret_cast<RaceCar*>(pointer);
    qInfo() << "My cars color is: " << mycar->color;


    return a.exec();
}
