#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>
#include <QPointer>

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

    QPointer<QObject> widget;

    void useWidget();

signals:

public slots:
};

#endif // TEST_H
