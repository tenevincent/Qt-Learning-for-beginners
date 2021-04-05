#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"

//Static cast

//The static_cast operator performs a nonpolymorphic cast.
//For example, it can be used to cast a base class pointer into a derived class pointer.

void testDrive(Car* obj) {
    obj->drive();
    obj->stop();
}

void raceACar(RaceCar* obj) {
    obj->gofast();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    RaceCar* raceCar = new RaceCar(&a);
    testDrive(raceCar); // we know this works but implicit casting is taking place

    Car* car = dynamic_cast<Car*>(raceCar);
    if(car) testDrive(car);

    // up casting - going from the the car to the racecar
    //We can go from the base back to the derived because the classes we created are polymorphic
    //Static cast should work fine - this is the way to go from a base to a derived class saftly!!!!!!
    RaceCar* speedster = static_cast<RaceCar*>(car);
    if(speedster) raceACar(speedster);

    return a.exec();
}
