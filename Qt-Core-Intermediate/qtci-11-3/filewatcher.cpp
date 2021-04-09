#include "filewatcher.h"

FileWatcher::FileWatcher(QObject *parent) : QObject(parent)
{
    fsw.addPath(QDir::currentPath());

    QString path = "C:/Users/Tene/AppData/Local/GannDialog/GannDialog 1.1/AppsDB/APP";

    fsw.addPath(path + "/DIALOGCF.GAN");

    connect(&fsw,&QFileSystemWatcher::fileChanged, this, &FileWatcher::fileChanged);
    connect(&fsw,&QFileSystemWatcher::directoryChanged, this, &FileWatcher::directoryChanged);
}

void FileWatcher::fileChanged(const QString &path)
{
    qInfo() << "File changed: " << path;
    if(fsw.files().length()) {
        qInfo() << "Files that have changed:";
        foreach(QString file, fsw.files()) {
            qInfo() << file;
        }
    }
}

void FileWatcher::directoryChanged(const QString &path)
{
    qInfo() << "Directory changed: " << path;
    if(fsw.directories().length()) {
        qInfo() << "Dir changed:";
        foreach(QString dir, fsw.directories()) {
            qInfo() << dir;
        }
    }
}
