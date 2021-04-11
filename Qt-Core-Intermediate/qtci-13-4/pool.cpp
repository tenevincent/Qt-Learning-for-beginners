#include "pool.h"

Pool::Pool(QObject *parent) : QObject(parent)
{
    for(int i = 0; i < 5; i++) {
        Worker *w = new Worker(this);
        w->setObjectName("Worker: " + QString::number(i));
        connect(w,&Worker::started,this, &Pool::started);
        connect(w,&Worker::finished,this, &Pool::finished);

        m_workers.append(w);
        qInfo() << "Worker ready: " << w->objectName();
    }

    connect(&m_timer,&QTimer::timeout,this, &Pool::checkwork);
    m_timer.setInterval(200);
    m_timer.start();
}

Pool::~Pool()
{
    m_timer.stop();
    qDeleteAll(m_workers);
    m_workers.clear();
}

void Pool::doWork(int value)
{
    m_work.append(value);
    checkwork();
}

void Pool::started()
{
    Worker *w = qobject_cast<Worker*>(sender());
    qInfo() << "Started: " << w->objectName();
}

void Pool::finished()
{
    Worker *w = qobject_cast<Worker*>(sender());
    qInfo() << "Finished: " << w->objectName();
}

void Pool::checkwork()
{
    if(m_work.isEmpty()) return;
    foreach(Worker *w, m_workers) {
        if(!w->isBusy()) {
            w->start(m_work.takeFirst()); // remove the first item
            if(m_work.isEmpty()) return;
        }
    }
}
