#include <QCoreApplication>
#include "filewatcher.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    FileWatcher w;


    return a.exec();
}
