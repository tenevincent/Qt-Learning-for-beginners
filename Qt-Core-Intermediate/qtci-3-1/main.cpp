#include <QCoreApplication>
#include <QDebug>
#include <QSettings>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QCoreApplication::setOrganizationName("VoidRealms");
    QCoreApplication::setOrganizationDomain("VoidRealms.com");
    QCoreApplication::setApplicationName("Tester");

    QSettings settings(QCoreApplication::organizationName(), QCoreApplication::applicationName());

    //Save the setting
     //settings.setValue("test", 123);

    //Read the setting back
    qInfo() << settings.value("test").toString();

    QVariant defaultWert;
    auto currentSettings = settings.value("test", -1);

    qInfo() << currentSettings.toInt();

   settings.clear();


    return a.exec();
}
