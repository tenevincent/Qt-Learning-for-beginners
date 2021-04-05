#ifndef FELINE_H
#define FELINE_H

#include <QObject>
#include <QDebug>
#include "mammal.h"



class Feline : public Mammal
{
public:
    Feline();

     void meow() {qInfo() << "meow";}

};

#endif // FELINE_H
