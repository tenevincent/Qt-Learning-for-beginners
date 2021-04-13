#ifndef TEST_H
#define TEST_H


#include <QObject>

class Test : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("Author", "Bryan Cairns")
    Q_CLASSINFO("Url", "http://www.voidrealms.com")

public:
    explicit Test(QObject *parent = nullptr);

signals:

public slots:
};
#endif // TEST_H
