#include <QCoreApplication>
#include <QDir>
#include <QDebug>
#include <QString>
#include <QFileInfo>
#include "directoriesutils.h"





bool createDir(QString path) {
    QDir dir(path);

    if(dir.exists()) {
        qInfo() << "Already exists!";
        return true;
    }

    if(dir.mkpath(path)) {
        qInfo() << "Created!";
        return true;
    } else {
        qInfo() << "Could not create!";
        return false;
    }
}

bool rename(QString path, QString name) {
    QDir dir(path);

    if(!dir.exists()) {
        qInfo() << "Path does not exist!";
        return false;
    }

    int pos = path.lastIndexOf(QDir::separator());
    QString parent = path.mid(0,pos);
    QString newpath = parent + QDir::separator() + name;

    qInfo() << "Absolute: " << dir.absolutePath();
    qInfo() << "Parent: " << parent;
    qInfo() << "New: " << newpath;

    return  dir.rename(path,newpath);

}

bool remove(QString path) {
    qInfo() << "Removing: " << path;
    QDir dir(path);

    if(!dir.exists()) {
        qInfo() << "Path does not exist!";
        return false;
    }

    //DANGER!!!
    return dir.removeRecursively();
}





void QFileInfo_Demo()
{
    QString root = "C:";
    QString path = root + QDir::separator() + "Temp";
    QDir dir(path);

    foreach(QFileInfo item, dir.entryInfoList() )
    {
        if(item.isDir())
            qDebug() << "Dir: " << item.absoluteFilePath();
        if(item.isFile())
            qDebug() << "File: " << item.absoluteFilePath();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


     DirectoriesUtils utils(QDir::temp().path());
    utils.printSystemDirectories();



     // QFileInfo_Demo();



    //    // forward slash for directory separator
    //    QDir dir1("C:/Qt");
    //    QDir dir2("C:/Qt/test");
    //    // output: true false
    //    qDebug() << dir1.exists() << dir2.exists();


    //    QString path = QDir::currentPath();
    //    qInfo() <<"current path: "  << path;

    //    QString test = path + QDir::separator() + "test";
    //    QString tmp = path + QDir::separator() + "tmp";

    //    qInfo() << path;
    //    qInfo() << test;
    //    qInfo() << tmp;


    //    QDir current(QDir::currentPath());
    //    if(current.exists()) {
    //        foreach(QFileInfo fi, current.entryInfoList()) {
    //            qInfo() << fi.fileName();
    //        }
    //    }

    //    if(createDir(test)) {
    //        qInfo() << "Created test!";
    //        if(rename(test,"tmp")) {
    //            qInfo() << "Renamed!";
    //            if(remove(tmp)) {
    //                qInfo() << "Removed";
    //            } else {
    //                qInfo() << "Could not remove";
    //            }
    //        }
    //    }



    return a.exec();
}
