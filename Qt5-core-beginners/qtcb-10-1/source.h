#ifndef SOURCE_H
#define SOURCE_H

#include <QObject>

class Source : public QObject
{
    Q_OBJECT
public:
    explicit Source(QObject *parent = nullptr);

    void send(QString message);


signals:
    void mySignal(QString message);


};

#endif // SOURCE_H
