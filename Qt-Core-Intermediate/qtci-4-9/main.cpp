#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QLockFile>




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Attempting to lock a file...";
    QString path = QDir::currentPath() + QDir::separator() + "test.txt";
    QFile file(path);
    QLockFile lock(file.fileName() +"l");
    lock.setStaleLockTime(30000);

    if(lock.tryLock()){
        if(file.open(QIODevice::WriteOnly)){
            QByteArray data("File to be locked!");
            for (int i = 0; i < 10 ; i++ ) {
                QString number = "Number " + QString::number(i) + "\r\n";
                data.append(number.toUtf8());
            }
            file.write(data);
            file.close();
            qInfo() << "Finished with file...";
        }
        qInfo() << "Unlock the file...";
        lock.unlock();
    }
    else{
        qInfo() << "Could not lock the file!";
        qint64 pid;
        QString host;
        QString application;
        if(lock.getLockInfo(&pid, &host, &application)){
            qInfo() << "The file is locked!";
            qInfo() << "Pid: " << pid;
            qInfo() << "Host: " << host;
            qInfo() << "Application: " << application;
        }
        else {
            qInfo() << "File is locked, but we can't get the info!";
        }
    }


    return a.exec();
}
