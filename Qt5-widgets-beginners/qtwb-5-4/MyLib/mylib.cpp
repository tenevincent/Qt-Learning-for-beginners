#include "mylib.h"

MyLib::MyLib()
{

    //Force loading of the resources
    Q_INIT_RESOURCE(resources);
}

QString MyLib::message()
{
    QString message;

    QFile file(":/files/data/readme.txt");
    if(file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        message = stream.readAll();
        file.close();
    }
    return  message;
}

QString MyLib::test()
{
    QString message = "this is a test!";
    return message;
}
