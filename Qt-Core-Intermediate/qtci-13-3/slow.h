#ifndef SLOW_H
#define SLOW_H

#include <QObject>
#include <QDebug>
#include "car.h"

class Slow : public Car
{
    Q_OBJECT
public:
    explicit Slow(QObject *parent = nullptr);

signals:

public slots:

    // car interface
public:
    void drive();
};

#endif // SLOW_H
