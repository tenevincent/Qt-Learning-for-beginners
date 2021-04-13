#include "widget.h"

Widget::Widget(QObject *parent) : QObject(parent)
{

}

void Widget::makeChanges(QString value)
{
    TestClass::instance()->name = value;
}
