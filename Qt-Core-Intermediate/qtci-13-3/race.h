#ifndef RACE_H
#define RACE_H

#include <QObject>
#include <QDebug>
#include "car.h"

class Race : public Car
{
    Q_OBJECT
public:
    explicit Race(QObject *parent = nullptr);

signals:

public slots:

    // car interface
public:
    void drive();
};

#endif // RACE_H
