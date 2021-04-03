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


void Dialog::on_btnWithParent_clicked()
{
    //With Parent
    DialogChild *dialog = new DialogChild(this);
    dialog->show();
}

void Dialog::on_btnWithoutParent_clicked()
{
    //Without Parent
    DialogChild *dialog = new DialogChild(nullptr);
    dialog->show();
}
