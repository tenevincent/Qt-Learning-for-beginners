#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>
#include "radio.h"
#include "station.h"
#include <ostream>
#include <QVariant>






int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const int CHANNELS_SIZE = 5;

    Radio boombox;
    Station* channels[CHANNELS_SIZE];

    //create some stations
    channels[0] = new Station(&boombox,94,"Rock and roll");
    channels[1] = new Station(&boombox,101,"Hip hop");
    channels[2] = new Station(&boombox,85,"News");

    channels[3] = new Station(&boombox,45,"Rap");
    channels[4] = new Station(&boombox,77,"Country");


    //Qt::QueuedConnection = used when you work with threads
    boombox.connect(&boombox,&Radio::quit,&a,&QCoreApplication::quit, Qt::QueuedConnection);

    do {
        qInfo() << "Enter on, off, test or quit:";
        QTextStream qtin(stdin);
        QString line = qtin.readLine().trimmed().toUpper();


        if(line == "ON") {
            qInfo() << "-----------------------------------------------------------" << endl;
            qInfo() << "Turing the radio on";
            for(int i = 0; i <CHANNELS_SIZE; i++) {
                Station* channel = channels[i];
                boombox.connect(channel, &Station::send,&boombox, &Radio::listen);
            }
            qInfo() << "Radio is on!";
        }
        else if(line == "OFF") {
            qInfo() << "-----------------------------------------------------------" << endl;
            qInfo() << "Turing the radio off";
            for(int i = 0; i < CHANNELS_SIZE; i++) {
                Station* channel = channels[i];
                boombox.disconnect(channel, &Station::send,&boombox, &Radio::listen);
            }
            qInfo() << "Radio is off!";
        }
        else if(line == "TEST") {
            qInfo() << "-----------------------------------------------------------" << endl;
            qInfo() << "Testing";
            for(int index = 0; index < CHANNELS_SIZE; index++) {
                Station* channel = channels[index];
                QVariant variant = QVariant(index).toString();
                QString str = QString("%1 %2 %3").arg("Broadcasting", variant.toString(), "live");
                channel->broadcast(str);
            }
            qInfo() << "Testing completed";
        }
        else if(line == "QUIT") {
            qInfo() << "Quitting";
            emit boombox.quit();
            break;
        }

    } while(true);







    return a.exec();
}
