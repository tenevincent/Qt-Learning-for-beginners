#include <QCoreApplication>
#include "source.h"
#include "destination.h"
#include <QObject>




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Source srcObject;
    Destination subscriber01;
    Destination subscriber02;
    QObject::connect(&srcObject,&Source::mySignal,&subscriber01,&Destination::onMessage);
    QObject::connect(&srcObject,&Source::mySignal,&subscriber02,&Destination::onMessage);

    srcObject.send("Vincent De Paul Tene");



    return a.exec();
}
