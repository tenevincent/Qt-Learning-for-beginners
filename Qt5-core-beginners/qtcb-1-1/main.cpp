#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    qDebug() << "Hello world!";

    qInfo() << "information";

    return a.exec();
}
