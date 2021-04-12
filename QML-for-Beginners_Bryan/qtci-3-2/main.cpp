#include <QCoreApplication>
#include <QDebug>
#include <QSettings>
#include <tuple>


using namespace std;


void saveAge(QSettings *setting,QString group, QString name, int age) {
    setting->beginGroup(group);
    setting->setValue(name,age);
    setting->endGroup();
}


tuple<int, bool> getAge(QSettings *setting,QString group, QString name) {

    setting->beginGroup(group);
    if(!setting->contains(name)) {
        setting->endGroup();
        return std::make_tuple(0,false);
    }

    bool ok;
    int value = setting->value(name).toInt(&ok);
    setting->endGroup();

    if(!ok) {
        return std::make_tuple(0,false);
    }

    return std::make_tuple(value,true);
}




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
    //qInfo() << settings.value("test").toString();
    //qInfo() << settings.value("test").toInt();

    saveAge(&settings,"people","Bryan",44);
    saveAge(&settings,"beer","twoheart",1);
    saveAge(&settings,"beer","Bryan",11);

    auto  ageResult = getAge(&settings,"beer","twoheart");
    qInfo() << "TwoHeart" << get<0>(ageResult) << " result: " << get<1>(ageResult) ;

    ageResult = getAge(&settings,"people","Bryan");
    qInfo() << "Bryan (people)" << get<0>(ageResult)  << " result: " << get<1>(ageResult) ;
    ageResult = getAge(&settings,"beer","Bryan");
    qInfo() << "Bryan (beer)" << get<0>(ageResult)  << " result: " << get<1>(ageResult) ;

    ageResult = getAge(&settings,"vincent","Bryan");
    qInfo() << "vincent (beer)" << get<0>(ageResult)  << " result: " << get<1>(ageResult) ;



    settings.clear();


    return a.exec();
}
