#include "racecar.h"

RaceCar::RaceCar(QObject *parent) : Car(parent)
{
    this->color = "red";
}

void RaceCar::gofast()
{
    qInfo() << "zooooooom";
}
