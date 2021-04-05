#include "source.h"

Source::Source(QObject *parent) : QObject(parent)
{

}


void Source::send(QString( message))
{
    emit mySignal("Hello world " + message);
}
