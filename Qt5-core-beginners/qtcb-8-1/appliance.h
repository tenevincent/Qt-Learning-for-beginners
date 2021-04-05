#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <QObject>

#include "freezer.h"
#include "microwave.h"
#include "toaster.h"


class Appliance : public QObject, public Freezer, public Toaster, public Microwave
{
    Q_OBJECT
public:
    explicit Appliance(QObject *parent = nullptr);

signals:


public slots:




    // Microwave interface
public:
    virtual bool cook() override;

    // Toaster interface
public:
    virtual bool grill() override;

    // Freezer interface
public:
    virtual bool freeze() override;
};

#endif // APPLIANCE_H
