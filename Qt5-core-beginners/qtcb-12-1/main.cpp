#include <QCoreApplication>
#include <QDebug>



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double value = 43.88;
    qInfo() << "Double: " << value;

    int age = value;
    qInfo() << "Age: " << age; //implicit conversion should not be trusted

    age = (int)value; // CASTING OLD STYLE
    qInfo() << "Age: " << age; //explicit conversion should be trusted


    return a.exec();
}
