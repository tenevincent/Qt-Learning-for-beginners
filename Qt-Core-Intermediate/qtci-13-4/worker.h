#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QTimer>
#include <QRandomGenerator>
#include <QDebug>

class Worker : public QObject
{
    Q_OBJECT
public:
    explicit Worker(QObject *parent = nullptr);
    bool isBusy();

signals:
    void started();
    void finished();


public slots:
    void timeout();
    void start(int value);

private:
    QTimer m_timer;
    bool m_busy;
};

#endif // WORKER_H
