#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    init();
    load();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::init()
{
    ui->comboBox->setEnabled(true);
    ui->buttonBox->addButton("Clear",QDialogButtonBox::ButtonRole::ActionRole);
    ui->buttonBox->addButton("Remove",QDialogButtonBox::ButtonRole::ActionRole);
}

void MainWindow::load()
{
    QSettings settings("MyCompany","MyApp");

    ui->comboBox->setCurrentText(settings.value("text","").toString());

    int combosize = settings.beginReadArray("combo");
    for (int i = 0;i < combosize; i++)
    {
        settings.setArrayIndex(i);
        ui->comboBox->addItem(settings.value("item","").toString());
    }
    settings.endArray();

    int listsize = settings.beginReadArray("list");
    for (int i = 0;i < listsize; i++)
    {
        settings.setArrayIndex(i);
        ui->listWidget->addItem(settings.value("item","").toString());
    }
    settings.endArray();
}

void MainWindow::save()
{
    QSettings settings("MyCompany","MyApp");
    settings.clear();

    settings.setValue("text",ui->comboBox->currentText());

    settings.beginWriteArray("combo");
    for(int i = 0; i < ui->comboBox->count(); i++)
    {
        settings.setArrayIndex(i);
        settings.setValue("item", ui->comboBox->itemText(i));
    }
    settings.endArray();

    settings.beginWriteArray("list");
    for(int i = 0; i < ui->listWidget->count(); i++)
    {
        settings.setArrayIndex(i);
        settings.setValue("item", ui->listWidget->item(i)->text());
    }
    settings.endArray();
}




void MainWindow::on_btnAdd_clicked()
{
    if(ui->comboBox->findText(ui->comboBox->currentText()) < 0)
    {
        ui->comboBox->addItem(ui->comboBox->currentText());
    }
    ui->listWidget->addItem(ui->comboBox->currentText());
}


void MainWindow::on_buttonBox_clicked(QAbstractButton *button)
{

    qDebug() << button->text();

        if(button->text().contains("OK"))
        {
            save();
            close();
            return;
        }

        if(button->text().contains("Cancel"))
        {
            close();
            return;
        }

        if(button->text().contains("Clear"))
        {
            ui->comboBox->clear();
            ui->listWidget->clear();
            return;
        }

        if(button->text().contains("Remove"))
        {
            QList<QListWidgetItem*> items = ui->listWidget->selectedItems();
            foreach (QListWidgetItem* item, items)
            {
                ui->listWidget->removeItemWidget(item);
                delete item;
            }
        }
}
