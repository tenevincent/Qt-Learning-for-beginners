#include "race.h"

Race::Race(QObject *parent) : Car(parent)
{

}


void Race::drive()
{
    qInfo() << "Max speed 200 mph";
}
