#include "dialog.h"
#include "ui_dialog.h"
#include <QCheckBox>
#include <QVariant>




Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);


    QObject::connect(ui->btnAddWidget, &QPushButton::clicked,this, &Dialog::onAddWidget);
}

void Dialog::onAddWidget() {

    QVBoxLayout* layout_frame = qobject_cast<QVBoxLayout*>(ui->frame_holder->layout());




    auto count = layout_frame->count();
    QString buttonText =  "Button: " + QVariant(count).toString() + " ";
    QPushButton* button = new QPushButton(buttonText, ui->frame_holder);
    button->setStyleSheet("min-height:40px; background-color: orange;  border-width: 1px; border-style: solid; border-radius: 15px; border-color: white;");

    QHBoxLayout* newLayout = new QHBoxLayout(ui->frame_holder);
    newLayout->addWidget(button);
    QCheckBox* checkBox = new QCheckBox("Check me!", ui->frame_holder);
    newLayout->addWidget(checkBox);


    layout_frame->insertLayout(0, newLayout);

   mButtonToLayoutMap.insert(button, newLayout);

       QObject::connect(
           button, &QPushButton::clicked,
           this, &Dialog::onRemoveWidget);


}

void Dialog::onRemoveWidget() {
    QPushButton* button = qobject_cast<QPushButton*>(sender());
       QHBoxLayout* layout = mButtonToLayoutMap.take(button);

       while (layout->count() != 0) {
           QLayoutItem* item = layout->takeAt(0);
           delete item->widget();
           delete item;
       }
       delete layout;
}



Dialog::~Dialog()
{
    delete ui;
}

