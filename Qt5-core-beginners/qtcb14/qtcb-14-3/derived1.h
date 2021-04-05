#ifndef DERIVED1_H
#define DERIVED1_H
#include "base.h"
#include <QDebug>





class Derived1 : public Base
{
    int someData;


public:
    Derived1();

    void derivedFunction01();

};

#endif // DERIVED1_H
