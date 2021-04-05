#include <QCoreApplication>
#include <QDebug>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QString greeting = "Hello World!";
    QByteArray buffer(greeting.toLatin1());
    buffer.append("! Vincent Tene");
    buffer.fill('c', 4);


    qInfo() << buffer;
    qInfo() << buffer.rightJustified(20,'.');
    qInfo() << buffer.at(buffer.length() - 1);

    QString modified(buffer);
    qInfo() << modified;



    return a.exec();
}
