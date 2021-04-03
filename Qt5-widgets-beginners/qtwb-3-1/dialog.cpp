#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}




void Dialog::on_btnToggleIsChecked_clicked()
{
    auto ischeckable = ui->btnCheckable->isCheckable();
    ui->btnCheckable->setCheckable(!ischeckable);
}

void Dialog::on_btnCheckable_clicked()
{
    QString message;
    if(ui->btnCheckable->isChecked())
    {
        message = "Yes it is checked";
    }
    else
    {
        message = "No it is not checked";
    }
    qDebug() << "IsCheckable: " << message;
}

void Dialog::on_btnToggleAutoRepeat_clicked()
{
    bool value = !ui->btnAutoRepeat->autoRepeat();
    ui->btnAutoRepeat->setAutoRepeat(value);
    qDebug() << "Repeat: " << ui->btnAutoRepeat->autoRepeat();
}

void Dialog::on_btnAutoRepeat_clicked()
{
    QDateTime datetime ;
    qInfo() << "Clicked " << datetime.currentDateTime();
}

void Dialog::on_btnToggleDefault_clicked()
{
    bool value = !ui->btnDefault->isDefault();
    ui->btnDefault->setDefault(value);
    qDebug() << "Repeat: " << ui->btnDefault->isDefault();
}

void Dialog::on_btnDefault_clicked()
{
     qInfo() << "Default button clicked!";
}

void Dialog::on_btnQuit_clicked()
{
    this->accept();
}
