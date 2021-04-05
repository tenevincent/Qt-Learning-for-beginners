#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIcon>
#include <QStyle>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->init();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{

    QStringList headers;
    headers << "Parent";
    model.setHorizontalHeaderLabels(headers);

    QStandardItem *root = model.invisibleRootItem();
    for (int p = 0;p < 100; p++)
    {

        QIcon icon = QIcon(":/files/images/save.png");
        QStandardItem* parentItem = new QStandardItem(icon,  QString("Project %0 [10]").arg(p));
        root->appendRow(parentItem);

        for (int  c = 0; c < 10;c++)
        {
             QIcon iconChild = QIcon(":/files/images/color.png");
            QStandardItem* childItem = new QStandardItem(iconChild, QString("Charge %0  [10]").arg(c));
            parentItem->appendRow(childItem);
            for (int  s = 0; s < 10;s++)
            {
               QIcon iconSubItem = QIcon(":/files/images/open.png");

                QStandardItem* subItem = new QStandardItem(iconSubItem, QString("Messsdaten %0  [5]").arg(s));
                childItem->appendRow(subItem);
            }
        }
    }

    ui->treeView->setModel(&model);
}



