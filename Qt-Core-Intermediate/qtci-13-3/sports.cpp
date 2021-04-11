#include "sports.h"

Sports::Sports(QObject *parent) : Car(parent)
{

}


void Sports::drive()
{
    qInfo() << "Max speed 120 mph";
}
