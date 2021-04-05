#include "derived1.h"

Derived1::Derived1()
{
    this->someData = 0;
}

void Derived1::derivedFunction01()
{
    qInfo() << "Derived f: " << someData << endl;
}
