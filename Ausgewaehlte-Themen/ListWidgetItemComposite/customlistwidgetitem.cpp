#include "customlistwidgetitem.h"
#include "ui_customlistwidgetitem.h"



CustomListWidgetItem::CustomListWidgetItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomListWidgetItem)
{
    ui->setupUi(this);
}

CustomListWidgetItem::~CustomListWidgetItem()
{
    delete ui;
}

void CustomListWidgetItem::on_pressThisBtn_clicked()
{
    //Getting text from lineEdit and setting it to the label
    ui->label->setText (ui->lineEdit->text ());
}

void CustomListWidgetItem::on_horizontalSlider_valueChanged(int value)
{
    //Connecting slider with the progressbar
    ui->progressBar->setValue (value);
}
