#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{

}

void Test::dostuff()
{

}

void Test::dostuff(QString param)
{
    Q_UNUSED(param);
}

void Test::myslot()
{

}
