#include <QCoreApplication>
#include <QDebug>
#include "car.h"
#include "racecar.h"
#include "dog.h"
#include "cat.h"
#include <QFile>



//QObject cast does not use the C++ RTTI, only used on QObjects

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Derived to base
    RaceCar* raceCar = new RaceCar(&a);
    Car* car = qobject_cast<Car*>(raceCar);
    car->drive();

    //Base to derived
    RaceCar* fastcar = qobject_cast<RaceCar*>(car);
    fastcar->gofast();

    //will not use non-qt objects!!!!
    //Dog* fido = qobject_cast<Dog*>(fastcar);
    //Q_UNUSED(fido);


    Cat* cat = qobject_cast<Cat*>(fastcar);
    if(cat) cat->miau();

    qInfo()<< "cat result: " << cat << endl;

    QFile *file = new QFile("file.txt",&a);
    file->setFileName("file.txt");

    Cat* cat2 = qobject_cast<Cat*>(file);
    if(cat2) cat2->miau();

    qInfo()<< "cat2 result: " << cat2 << endl;



    return a.exec();
}
