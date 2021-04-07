#pragma once

#include <QString>
#include <QList>
#include <QFileInfo>
#include <QDir>
#include <QDebug>
#include <QStandardPaths>


class DirectoriesUtils
{
public:
    DirectoriesUtils(QString directory);

    bool isExists();

    QList<QFileInfo> getAllFilesInfo();


    bool createDirectory();

    void printSystemDirectories();

private:
    QString m_path;
    QDir m_directory;


};
