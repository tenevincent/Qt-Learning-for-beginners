#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setCentralWidget(ui->scrollArea);

    //https://doc.qt.io/archives/qt-4.8/qstyle.html
    ui->actionOpen->setIcon(QApplication::style()->standardIcon(QStyle::SP_DialogOpenButton));
    ui->actionZoom_In->setIcon(QApplication::style()->standardIcon(QStyle::SP_ArrowUp));
    ui->actionZoom_Out->setIcon(QApplication::style()->standardIcon(QStyle::SP_ArrowDown));

    // ui->labelImage = new QLabel(this);
    // ui->scrollArea->setWidget(ui->labelImage);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_triggered()
{
    m_path = QFileDialog::getOpenFileName(this,"Open",QString(),"All Files(*.*);;JPG (*.jpg);;PNG (*.png)");
    if(m_path.isEmpty()) return;

    if(!m_image.load(m_path))
    {
        QMessageBox::critical(this,"Error","Could not load the image!");
        return;
    }

    ui->labelImage->setPixmap(m_image);




}

void MainWindow::on_actionZoom_In_triggered()
{
    int w = ui->labelImage->width();
    int h  = ui->labelImage->height();

    w += 10;
    h += 10;

    ui->labelImage->resize(w,h);
    ui->labelImage->setPixmap(m_image.scaled(w,h));

}

void MainWindow::on_actionZoom_Out_triggered()
{
    int w = ui->labelImage->width();
    int h  = ui->labelImage->height();

    w -= 10;
    h -= 10;

    if(w < 10) w = 10;
    if(h < 10) h = 10;

    ui->labelImage->resize(w,h);
    ui->labelImage->setPixmap(m_image.scaled(w,h));
}
