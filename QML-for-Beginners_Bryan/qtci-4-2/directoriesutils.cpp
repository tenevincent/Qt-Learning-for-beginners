#include "directoriesutils.h"

DirectoriesUtils::DirectoriesUtils(QString path)
{
    this->m_path = path;
    m_directory.setPath(m_path);
}

bool DirectoriesUtils::isExists()
{
    if(this->m_path.isEmpty()){
        return false;
    }
    return m_directory.exists();
}

QList<QFileInfo> DirectoriesUtils::getAllFilesInfo()
{
    auto allInfos = m_directory.entryInfoList();
    return allInfos;
}

bool DirectoriesUtils::createDirectory()
{
    if(this->m_path.isEmpty()){
        return false;
    }

    if(m_directory.exists()){
        return true;
    }

    return  m_directory.mkdir(this->m_path);

}

void DirectoriesUtils::printSystemDirectories()
{

    //qInfo() <<"Temp directory: " << QDir::temp() <<"\r\n" ;
    qInfo() << QStandardPaths::displayName(QStandardPaths::StandardLocation::ConfigLocation) << ": " <<  QStandardPaths::standardLocations(QStandardPaths::StandardLocation::ConfigLocation)   <<"\r\n" ;

    for ( int fooInt = QStandardPaths::StandardLocation::DesktopLocation; fooInt !=  QStandardPaths::StandardLocation::AppConfigLocation; fooInt++ )
    {
        auto standarPath = static_cast<QStandardPaths::StandardLocation>(fooInt);
        auto listPaths = QStandardPaths::standardLocations(standarPath) ;
        // qInfo() << "count of paths: " << listPaths.count()   <<"\r\n" ;

        foreach(auto dir , listPaths){
            qInfo() << QStandardPaths::displayName(standarPath) << ": " << dir   <<"\r\n" ;
        }

    }





}
