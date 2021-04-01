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


void Dialog::on_btnCancel_clicked()
{
    QMessageBox::critical(this,"WHAT!!!","You do not want icecream???");
    reject();
}

void Dialog::on_btnOK_clicked()
{

    QString icecream = getOption(ui->groupBoxIceCream);
    QString toppings = getOption(ui->groupBoxToppings);
    QString syrup = getOption(ui->groupBoxToppings);
    QString size = getOption(ui->groupBoxSize);

    QString order;
    order += "Order:\r\n \r\n";
    order += "Size: " + size + "\r\n";
    order += "Flavor: " + icecream + "\r\n";
    order += "Topping: " + toppings + "\r\n";
    order += "Syrup: " + syrup + "\r\n";
    order += "-                                          -\r\n";

    QMessageBox::information(this,"Order", order);

    accept();
}


QString Dialog::getOption(QObject *obj)
{
    QString value = "None";
    QList<QRadioButton*> lst = obj->findChildren<QRadioButton*>(QString(),Qt::FindDirectChildrenOnly);

    foreach(QRadioButton* radiobtn, lst)
    {
        if(radiobtn->isChecked())
        {
            value = radiobtn->text();
            break;
        }
    }

    return value;
}


