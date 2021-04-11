#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    init_widgets();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::init_widgets()
{
    for (int index = 0; index < 50 ; index++ ) {
        //Creating a new list widget item whose parent is the listwidget itself
        QListWidgetItem *listWidgetItem = new QListWidgetItem(ui->listWidget);

        //Adding the item to the listwidget
        ui->listWidget->addItem (listWidgetItem);

        //Creating an object of the designed widget which is to be added to the listwidget
        CustomListWidgetItem *customlistWidgetItem = new CustomListWidgetItem;

        //Making sure that the listWidgetItem has the same size as the TheWidgetItem
        listWidgetItem->setSizeHint (customlistWidgetItem->sizeHint ());

        //Finally adding the itemWidget to the list
        ui->listWidget->setItemWidget (listWidgetItem, customlistWidgetItem);
    }
}

void MainWindow::on_addBtn_clicked()
{
    init_widgets();

}

void MainWindow::on_delBtn_clicked()
{
    //Delete selected item from the listWidget
    delete ui->listWidget->currentItem ();
}

