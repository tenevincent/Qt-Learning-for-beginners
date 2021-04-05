#include <QCoreApplication>
#include "animal.h"
#include <QDebug>


#include "laptop.h"
#include "feline.h"
#include "animal.h"
#include "canine.h"
#include "appliance.h"




void test(Laptop &machine) {
    //By value would attempt to make a copy!!!
    machine.test();
}

void makeLaptops(QObject* parent) {
    Laptop mine(parent,"my laptop");
    Laptop yours(parent, "your laptop");

    mine.weight = 3;
    yours.weight = 5;

    test(mine);
    test(yours);

    //Stack will delete variables here
}


void classes_objects( QObject *a)
{
    Animal cat;
    Animal dog;
    Animal bird;

    cat.speak("meow");
    dog.speak("bark");
    bird.speak("caw");

    makeLaptops(a);
}

void inheritance()
{
    Feline kitty;
    //we know about this because its included!
    Animal test;
    Canine puppy;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    // classes_objects(&a);
    //  inheritance();

    Appliance Kitchen5000;
    qInfo() << "Can cook: " << Kitchen5000.cook();
    qInfo() << "Can grill: " << Kitchen5000.grill();
    qInfo() << "Can freeze: " << Kitchen5000.freeze();

    return a.exec();
}
