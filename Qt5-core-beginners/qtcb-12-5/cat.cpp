#include "cat.h"

Cat::Cat(QObject *parent) : QObject(parent)
{

}

void Cat::miau()
{
    qInfo() << "make maui..."  << endl;
}
