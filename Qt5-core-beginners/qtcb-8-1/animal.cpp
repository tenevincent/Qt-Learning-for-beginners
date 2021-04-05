#include "animal.h"

Animal::Animal(QObject *parent) : QObject(parent)
{
    qInfo() << this <<  sender() << " constructed";
}



void Animal::speak(QString message)
{
    //perform magic
    qDebug() << message;
}
