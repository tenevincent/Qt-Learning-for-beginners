#include "dialogchild.h"
#include "ui_dialogchild.h"

DialogChild::DialogChild(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogChild)
{
    ui->setupUi(this);

    if(parent){
        this->ui->label->setText("Child dialog with parent!");
    }
    else{
          this->ui->label->setText("Child dialog WITHOUT parent!");
    }
}

DialogChild::~DialogChild()
{
    delete ui;
}

void DialogChild::on_btnClose_clicked()
{
    accept();
}
