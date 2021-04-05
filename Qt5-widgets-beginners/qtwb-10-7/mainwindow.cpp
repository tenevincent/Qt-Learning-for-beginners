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


void MainWindow::init(){

    model.setRootPath(dir.currentPath());
    ui->treeView->setModel(&model);
    ui->listView->setModel(&model);

    for (int i = 1;i < model.columnCount();i++)
    {
        ui->treeView->hideColumn(i);
    }

    ui->listView->setViewMode(QListView::ViewMode::ListMode);

}

void MainWindow::on_treeView_activated(const QModelIndex &index)
{
    ui->listView->setRootIndex(index);
}

void MainWindow::on_listView_activated(const QModelIndex &index)
{
    ui->listView->setRootIndex(index);
    ui->treeView->setCurrentIndex(index);
    ui->treeView->expand(index);
}
