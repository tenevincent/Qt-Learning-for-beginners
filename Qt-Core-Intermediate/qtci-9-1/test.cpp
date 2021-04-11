#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{
    qInfo()<< "Test class constructed.." ;
}

Test::~Test()
{
       qInfo()<< "Test class DEconstructed.." ;
}
