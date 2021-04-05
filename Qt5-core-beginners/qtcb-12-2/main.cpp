#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "feline.h"


void testDrive(Car* obj) {
    obj->drive();
    obj->stop();
}

void raceACar(RaceCar* obj){
    obj->gofast();
}


//Dynamic cast

//dynamic_cast can be used only with pointers and references to objects.
//Its purpose is to ensure that the result of the type conversion is a valid complete object of the requested class.



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    RaceCar* raceCar = new RaceCar(&a);
    testDrive(raceCar); //its converted automatically

    //The correct way to cast
    Car* obj = dynamic_cast<Car*>(raceCar);
    if(obj) testDrive(obj);

    //Will not work
    Feline* feline = dynamic_cast<Feline*>(raceCar);
    if(feline){
        feline->hiss();
    }
    qInfo() << "Result of feline: " << feline << endl ;



    return a.exec();
}
