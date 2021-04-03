#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace  std;


void standart_output();
void standard_input();
void standard_errors_output();

void other_errors_output();


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    // standart_output();

   //  standard_input();

    // standard_errors_output();

     other_errors_output();


    return a.exec();
}

void standart_output()
{
    cout << "Hello" << endl;
    qInfo() << "hello";

    int age = 44;
    cout << age;
    cout << endl;
    cout << flush;
}


void standard_input()
{
    int age;
    qInfo() << "Please enter an age:";
    cin >> age;
    qInfo() << "You entered: " << age;
}







void other_errors_output()
{
    int age;
    qInfo() << "Enter your age:";
    cin >> age;
    qInfo() << "you are " << age << " years old";

    qInfo() << "Information";
    qDebug() << "Debug";
    qCritical() << "Critical";
    qFatal("Test CRASH  !!!!!");
}



void standard_errors_output()
{
    cout << "Standard out" << endl;
    cerr << "Error out" << endl;
}





