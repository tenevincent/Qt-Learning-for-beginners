#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->timeEdit->setTime(QDateTime::currentDateTime().time());
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->dateEdit->setDate(QDateTime::currentDateTime().date());


}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_timeEdit_userTimeChanged(const QTime &time)
{
    ui->dateTimeEdit->setTime(time);
}

void Dialog::on_dateEdit_userDateChanged(const QDate &date)
{
    ui->dateTimeEdit->setDate(date);
}



void Dialog::on_buttonBox_accepted()
{
    qDebug() << "Current selected date: " << ui->dateTimeEdit->dateTime().toString(Qt::DateFormat::LocalDate);
    qDebug() << "Current selected time: " << ui->timeEdit->time().toString(Qt::DateFormat::LocalDate);

}

void Dialog::on_buttonBox_rejected()
{

}
