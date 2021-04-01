#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);


    connect(ui->btnOne, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->btnTwo, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->btnThree, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->btnFourfth, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->btnFive, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->btnSixth, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->btnSeven, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->btnEight, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->btnNine, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->btnZero, &QPushButton::clicked,this, &Dialog::append);
}



Dialog::~Dialog()
{
    delete ui;
}



void Dialog::append()
{
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if(!btn) return;

    temp.append(btn->text());
    ui->labelNotify->setText("Typed: " + temp);

    if(code.isEmpty())
    {
        ui->btnSave->setEnabled(true);
        ui->btnVerify->setEnabled(false);
    }
    else
    {
        ui->btnSave->setEnabled(false);
        ui->btnVerify->setEnabled(true);
    }
}


