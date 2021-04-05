#include <QCoreApplication>
#include <QDebug>
#include <QDateTime>
#include <QTime>
#include <QDate>





int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    QDate today = QDate::currentDate();
    qInfo()<< "current date: " << today;
    qInfo()<< "add 1 date: " << today.addDays(1);
    qInfo()<< "add 20 years: " << today.addYears(20);
    qInfo() << "formatted date: " << today.toString("dd.MM.yyyy");
    qInfo() << today.toString(Qt::DateFormat::TextDate);

    QTime now = QTime::currentTime();
    qInfo() << now;
    qInfo() << now.toString(Qt::DateFormat::DefaultLocaleLongDate);
    qInfo() << now.toString(Qt::DateFormat::DefaultLocaleShortDate);

    QDateTime current = QDateTime::currentDateTime();
    qInfo() << "current Date time: " << current;

    QDateTime expire = current.addDays(45);
    qInfo() << "expire: " << expire;

    if(current > expire) {
        qInfo() << "Expired!";
    } else {
        qInfo() << "Not expired";
    }



    return a.exec();
}
