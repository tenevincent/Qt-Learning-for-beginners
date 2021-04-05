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

void MainWindow::addFile(QStandardItem *root, QFileInfo info)
{
    QStandardItem *item = new QStandardItem(info.fileName());
    root->appendRow(item);

    item->setChild(0,0, new QStandardItem(QIcon(":/files/images/about.png"), "Size"));
    item->setChild(0,1, new QStandardItem(QString::number(info.size())));

    item->setChild(1,0, new QStandardItem(QIcon(":/files/images/arrow_redo.png"),"Created"));
    item->setChild(1,1, new QStandardItem(info.birthTime().toString()));

    item->setChild(2,0, new QStandardItem(QIcon(":/files/images/color.png"),"Modified"));
    item->setChild(2,1, new QStandardItem(info.lastModified().toString()));

    item->setChild(3,0, new QStandardItem(QIcon(":/files/images/copy.png"),"Accessed"));
    item->setChild(3,1, new QStandardItem(info.lastRead().toString()));

    item->setChild(4,0, new QStandardItem(QIcon(":/files/images/paste.png"),"Readable"));
    item->setChild(4,1, new QStandardItem(info.isReadable() ? "Yes" : "No"));

    item->setChild(5,0, new QStandardItem(QIcon(":/files/images/save.png"),"Writable"));
    item->setChild(5,1, new QStandardItem(info.isWritable() ? "Yes" : "No"));

    item->setChild(6,0, new QStandardItem(QIcon(":/files/images/font.png"),"Path"));
    item->setChild(6,1, new QStandardItem(info.path()));
}


void MainWindow::init()
{
    QDir dir = QDir::current();
    //dir.cdUp();

    QFileInfoList list = dir.entryInfoList();
    QStringList headers;
    headers.append("Name");
    headers.append("Value");
    model.setHorizontalHeaderLabels(headers);
    ui->treeView->setModel(&model);

    foreach(QFileInfo info, list)
    {
        if(info.isFile()){
            auto standardModel =  model.invisibleRootItem();
            standardModel->setIcon(QIcon(":/files/images/help.png"));
            addFile(standardModel, info);
            qInfo() << info << endl;
        }

    }

}

