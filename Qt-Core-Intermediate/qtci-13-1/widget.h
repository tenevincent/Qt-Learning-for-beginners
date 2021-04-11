#ifndef WIDGET_H
#define WIDGET_H

#include <QObject>
#include "test.h"

class Widget : public QObject
{
    Q_OBJECT
public:
    explicit Widget(QObject *parent = nullptr);
    void makeChanges(QString value);
signals:

public slots:
};

#endif // WIDGET_H
