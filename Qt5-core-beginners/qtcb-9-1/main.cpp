#include <QCoreApplication>
#include <QDebug>



void test(QString name) {
    qInfo() << "Size = " << name.length();
}

void testPrt(QString* name) {
    qInfo() << "Size = " << name->length();
}


void display(QString* value) {
    qInfo() << "The pointer: " << value;
    qInfo() << "The object: " << &value << " A copy of the pointer!!!";
    qInfo() << "The data: " << *value;
    qInfo("");
}





void pointer_demo()
{
    QString name = "Bryan"; //QString constructor here
    test(name);
    testPrt(&name);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    // pointer_demo();

    QString name = "Bryan"; //QString constructor here
     qInfo() << "The stack adress: " << &name;
    display(&name);



    QString* description = new QString("Hello World"); //ALWAYS DELETE
    display(description);
    delete description; // = 0;
    display(description);




    return a.exec();
}
