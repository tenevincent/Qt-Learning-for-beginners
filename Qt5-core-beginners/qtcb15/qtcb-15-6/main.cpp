#include <QCoreApplication>
#include <QDebug>
#include <QVariant>

void test(QVariant value);




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    QVariant value = 1;
    QVariant value2 = "Hello World";
    QVariant value3 = "34";
    QVariant value4 = "12";


    test(value);
    test(value2);

    test(value3);
    test(value4);


    return a.exec();
}



void test(QVariant value) {
    qInfo() << value;

    int test = 0;
    bool ok = false;

    test = value.toInt(&ok);
    if(ok) {
        qInfo() << "INT = " << test;
    } else {
        qInfo() << "Not a number!";
    }

}

