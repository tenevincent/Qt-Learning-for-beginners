#ifndef CANINE_H
#define CANINE_H

#include <QObject>
#include <QDebug>


#include "mammal.h"



class Canine : public Mammal
{
public:
    Canine();

       void bark() {qInfo() << "bark bark bark";}
};

#endif // CANINE_H
