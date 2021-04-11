#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_listwidgetitemview.h"
#include "listwidgetitemview.h"

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


void MainWindow::on_listWidget_itemActivated(QListWidgetItem *item)
{

}

void MainWindow::init()
{
    //Creating a new list widget item whose parent is the listwidget itself
    QListWidgetItem *listWidgetItem = new QListWidgetItem(ui->listWidget);

    //Adding the item to the listwidget
    ui->listWidget->addItem (listWidgetItem);

    //Creating an object of the designed widget which is to be added to the listwidget
    ListWidgetItemView *customlistWidgetItem = new ListWidgetItemView;

    //Making sure that the listWidgetItem has the same size as the TheWidgetItem
    listWidgetItem->setSizeHint (customlistWidgetItem->sizeHint ());

    //Finally adding the itemWidget to the list
    ui->listWidget->setItemWidget (listWidgetItem, customlistWidgetItem);


}
