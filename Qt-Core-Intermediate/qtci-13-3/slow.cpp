#include "slow.h"

Slow::Slow(QObject *parent) : Car(parent)
{

}


void Slow::drive()
{
    qInfo() << "Max speed 80 mph";
}
