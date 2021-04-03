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


void Dialog::on_btnOk_clicked()
{
    QString toppings;
       QObjectList boxes = this->children();
       foreach(QObject* obj, boxes)
       {
           if(obj->inherits("QCheckBox"))
           {
               QCheckBox* checkbox = qobject_cast<QCheckBox*>(obj);
               if(checkbox && checkbox->isChecked()) toppings += checkbox->text() + "\r\n";
           }
       }

       QMessageBox::information(this,"Toppings","Toppings to include\r\n" + toppings);

       accept();
}
