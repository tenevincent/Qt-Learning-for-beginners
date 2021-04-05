#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    init();
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::init()
{

    for (int i = 0;i < 10;i++)
    {
        model.appendRow(new QStandardItem(QIcon(":/files/images/save.png"), QString("Item %0").arg(i)));
    }
    ui->listView->setModel(&model);
}




void MainWindow::on_buttonBox_accepted()
{

    QStringList list;

    for (int i = 0;i < model.rowCount();i++)
    {
        QStandardItem *item = model.item(i);
        list.append(item->text());
    }

    QString msg = list.join("\r\n");
    QMessageBox::information(this,"Items", msg);

    close();
}

void MainWindow::on_buttonBox_rejected()
{
    close();
}
