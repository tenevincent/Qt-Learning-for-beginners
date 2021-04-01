#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);


    init();
    load();
}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::init()
{
    ui->comboBox->clear();

    for (int index = 0;index < 10;index++)
    {
        ui->comboBox->addItem("Item number " + QString::number(index));
    }
}

void Dialog::load()
{
    QSettings settings("MySoft", "MyApp");
    QVariant value = settings.value("settings",0);

    bool ok;
    int index = value.toInt(&ok);
    if(!ok)
    {
        QMessageBox::critical(this,"Loading Error","Error loading selection!");
        return;
    }

    if(index < ui->comboBox->count())
    {
        ui->comboBox->setCurrentIndex(index);
    }
    else
    {
        ui->comboBox->setCurrentIndex(0);
    }
}




void Dialog::on_btnSave_clicked()
{
    QSettings settings("MySoft", "MyApp");
    settings.setValue("settings", ui->comboBox->currentIndex());
    QMessageBox::information(this,"Saved","Selection saved, please close and re-open the application");
}

void Dialog::on_comboBox_currentIndexChanged(int index)
{
    ui->labelSelectedItem->setText( QString::number(index) + " = " + ui->comboBox->currentText());
}
