#include <QCoreApplication>
#include <QDebug>
#include <ostream>




template<typename T>
void print(T value) {
    qInfo() << value;
}


using namespace std;



class Person{
    int age;
    QString name;



public:


};





int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    print<int>(1);
    print<double>(126.007);


    print<QString>("Hello world!");


    return a.exec();
}
