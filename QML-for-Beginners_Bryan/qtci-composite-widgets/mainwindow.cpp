#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "projectdetails.h"
#include "formsecondview.h"
#include "formthirdview.h"


#include <QHBoxLayout>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    addFirstFormView();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::addFirstFormView()
{
    QHBoxLayout *layout = dynamic_cast<QHBoxLayout *>(this->ui->frame->layout()) ;
    auto *chargeView = new ProjectDetails(this->ui->frame);
    layout->insertWidget(0, chargeView);

}

void MainWindow::on_btnAdd_clicked()
{
    addFirstFormView();
}



void MainWindow::on_btnRemove_clicked()
{

    // 1° First method...
    removeFrameContent();
    QHBoxLayout *layout = dynamic_cast<QHBoxLayout *>(this->ui->frame->layout()) ;
    auto *secondView = new FormSecondView(this->ui->frame);
    layout->insertWidget(0, secondView);

     //2°  second method
     // delete_Projects_Widgets();
}

void MainWindow::on_btnUpdate_clicked()
{
    removeFrameContent();
    QHBoxLayout *layout = dynamic_cast<QHBoxLayout *>(this->ui->frame->layout()) ;
    auto *thirdView = new FormThirdView(this->ui->frame);
    layout->insertWidget(0, thirdView);
}




void MainWindow::delete_Projects_Widgets()
{
    QHBoxLayout *layout = dynamic_cast<QHBoxLayout *>(this->ui->frame->layout()) ;
    QList<ProjectDetails *> projectsWidgets = this->ui->frame->findChildren<ProjectDetails *>();
    qInfo()<< "Widgets count " << projectsWidgets.count()  << " " <<layout;
    foreach(QWidget * child, projectsWidgets)
    {
        delete child;
    }
}

void MainWindow::removeFrameContent()
{
    QHBoxLayout *layout = dynamic_cast<QHBoxLayout *>(this->ui->frame->layout()) ;
     QLayoutItem * layoutItem= nullptr;
     while ( (layoutItem = layout->takeAt(0)) != nullptr) {
           layoutItem->widget()->deleteLater();
     }
}

