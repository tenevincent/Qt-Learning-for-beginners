#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{

}


QString Test::message()
{
    return m_message;
}

void Test::setMessage(QString value)
{
    m_message = value;
    emit messageChanged(m_message);
}
