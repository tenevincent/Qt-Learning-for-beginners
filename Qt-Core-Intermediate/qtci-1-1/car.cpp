#include "car.h"

Car::Car( QObject *parent) : QObject(parent)
{
    qInfo() << this << "Constructed";
}

Car::~Car()
{
    qInfo() << this << "Deconstructed";
}

void Car::makeParent(QString name)
{
     qInfo() << this << "make parent " << name << endl;
}
