#include <QCoreApplication>
#include <QTimer>
#include <QDebug>


void Test() {
    qInfo() << "Thank you for waiting!";
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Please wait...";

    QTimer::singleShot(5000,&Test);



    return a.exec();
}
