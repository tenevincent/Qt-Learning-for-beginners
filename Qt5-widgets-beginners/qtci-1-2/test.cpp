#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{

}

void Test::useWidget()
{
    //see if there is a pointer!

    if(!widget.data()) {

        qInfo() << "No Pointer!!!";
        return;
    }

    qInfo() << "Widget = " << widget.data();

    //Access the pointer
    widget.data()->setObjectName("used Widget!");
}
