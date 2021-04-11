#ifndef SPORTS_H
#define SPORTS_H

#include <QObject>
#include <QDebug>
#include "car.h"

class Sports : public Car
{
    Q_OBJECT
public:
    explicit Sports(QObject *parent = nullptr);

signals:

public slots:

    // car interface
public:
    void drive();
};

#endif // SPORTS_H
