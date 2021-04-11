#include <QCoreApplication>
#include <QDebug>
#include "pool.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Pool pool;
    for(int i = 0; i < 100; i++) {
        pool.doWork(i);
    }


    return a.exec();
}
