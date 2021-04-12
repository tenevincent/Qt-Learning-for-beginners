#include "chargedetails.h"
#include "ui_chargedetails.h"

ChargeDetails::ChargeDetails(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChargeDetails)
{
    ui->setupUi(this);
}

ChargeDetails::~ChargeDetails()
{
    delete ui;
}
