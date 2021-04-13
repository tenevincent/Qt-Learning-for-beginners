#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
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

    QTextStream stream(&file);
    int max = 1000;
    QString banner = "Random number \r\n";
    qInfo() << "Writing " << banner ;
    stream << banner; // write

    for (int index = 0; index < 10 ; index++ ) {
        qint32 number = QRandomGenerator::global()->bounded(max);
        qInfo() << "Writing " << number << "\r\n";
        stream << number << "\r\n";  // write
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

    QTextStream stream(&file);
    QString banner;
    stream >> banner; // read
    qInfo() << "Banner " << banner ;

    for (int index = 0; index < 10 ; index++ ) {
        QString number;
        stream >> number;  // read
        qInfo() << "Reading " << number  ;
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
