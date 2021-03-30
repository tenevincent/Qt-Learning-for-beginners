#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->btnConnect, &QPushButton::clicked, this, &Dialog::doStuff);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_btnAccept_clicked()
{
    QMessageBox::information(this,"Name","Hello Accept Button " + ui->txtName->text());
       this->accept();
}


void Dialog::on_btnCancel_clicked()
{
    QMessageBox::information(this,"Name","Hello Cancel " + ui->txtName->text());
       this->reject();
}

void Dialog::doStuff()
{
    qInfo() << "Clicked " << QDateTime::currentDateTime().toString();
    accept(); // WILL CLOSE !!!
}


void Dialog::on_btnEditor_clicked()
{
    qDebug() << "EXTRA STUFF!!!!";
       doStuff();
}

