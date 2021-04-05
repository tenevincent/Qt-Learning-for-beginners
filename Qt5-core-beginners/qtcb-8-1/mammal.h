#ifndef MAMMANL_H
#define MAMMANL_H

#include <QObject>
#include "animal.h"



class Mammal : public Animal
{
public:
    Mammal();

      bool hasBackbone();

};

#endif // MAMMANL_H
