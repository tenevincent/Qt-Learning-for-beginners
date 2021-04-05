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

void MainWindow::itemChanged(QStandardItem *item)
{
    qInfo() << "Index: " << item->index().row() << "," << item->index().column() << " = " << item->text();
}


void MainWindow::init(){

    model.insertRows(0,4);
    model.insertColumns(0,4);

    for (int r = 0; r < model.rowCount();++r)
    {
        for (int c = 0; c < model.columnCount();++c)
        {
            QStandardItem *item = new QStandardItem( QIcon(":/files/images/color.png"), QString("row %0, col %1").arg(r).arg(c));
            model.setItem(r,c,item);
        }
    }

    ui->tableView->setModel(&model);

    connect(&model,&QStandardItemModel::itemChanged,this,&MainWindow::itemChanged);
}
