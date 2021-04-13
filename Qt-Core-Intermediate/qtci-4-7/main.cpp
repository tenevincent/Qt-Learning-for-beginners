#include <QCoreApplication>
#include <QDebug>
#include <QDataStream>
#include <QFile>
#include <QDir>
#include <QFileInfo>
#include <QRandomGenerator>


bool createFile(QString filePath){

    QFile file(filePath);
    if(!file.open(QIODevice::WriteOnly)){
        qWarning() << file.errorString();
        return  false;
    }

    QDataStream stream(&file);
    int max = 1000;
    QString banner = "Random number";
    qInfo() << "Writing " << banner ;
    stream << banner; // write

    for (int index = 0; index < 10 ; index++ ) {
        qint32 number = QRandomGenerator::global()->bounded(max);
        qInfo() << "Writing " << number ;
        stream << number;  // write
    }

    file.close();
    return true;
}

void readFile(QString filePath){
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly)){
        qWarning() << file.errorString();
        return  ;
    }

    QDataStream stream(&file);
    QString banner;
    stream >> banner; // read
    qInfo() << "Banner " << banner ;

    for (int index = 0; index < 10 ; index++ ) {
        qint32 number;
        stream >> number;  // read
        qInfo() << "Writing " << number ;
    }


    file.close();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QString path = QDir::currentPath() + QDir::separator() + "test.txt";
    qInfo() << "Path " << path ;
    if(createFile(path)){
        qInfo() << "---------------------------"  ;
        readFile(path);
    }

    return a.exec();
}
