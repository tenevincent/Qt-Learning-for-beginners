#ifndef CAR_H
#define CAR_H

#include <QObject>
#include <QDebug>
#include "test.h"


class Car : public QObject
{
    Q_OBJECT
public:
    explicit Car(QObject *parent = nullptr);
      ~Car();

     void makeParent(QString name);

private:
    Test *m_test;
signals:

};

#endif // CAR_H
