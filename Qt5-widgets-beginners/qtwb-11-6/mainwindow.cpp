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


void MainWindow::on_btnStart_clicked()
{
    quint16 port = static_cast<quint16>(ui->sbPort->value());

    server.setMessage(ui->txtMessage->text() + "\r\n");
    if(!server.listen(QHostAddress::Any, port))
    {
        QMessageBox::critical(this,"Error",server.errorString());
        return;
    }

    ui->lblStatus->setText("Listening...");
    enableButtons();
}

void MainWindow::on_btnStop_clicked()
{
    server.close();
    ui->lblStatus->setText("Closed");
    enableButtons();
}

void MainWindow::on_buttonBox_accepted()
{
    this->close();
}


void MainWindow::closeEvent(QCloseEvent *event)
{

    QMessageBox msgBox;

    msgBox.setText("Closing the application.");
    msgBox.setInformativeText("Do you want to close the application?");

    msgBox.setWindowTitle("TODO App");
    msgBox.setWindowIcon(QIcon(":/files/images/add.png"));
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    int ret = msgBox.exec();
    if(ret == QMessageBox::Ok){
        event->accept();
    }
    else{
        event->ignore();
    }
}


void MainWindow::next()
{
    int i = ui->stackedWidget->currentIndex();
    i++;
    if(i >= ui->stackedWidget->count()) i = ui->stackedWidget->count() - 1;
    ui->stackedWidget->setCurrentIndex(i);
    enableButtons();
}

void MainWindow::back()
{
    int i = ui->stackedWidget->currentIndex();
    i--;
    if(i < 0) i = 0;
    ui->stackedWidget->setCurrentIndex(i);
    enableButtons();
}

void MainWindow::changed()
{
    ui->lblStatus->setText(QString("There are %0 clients connected").arg(server.count()));
}




void MainWindow::enableButtons()
{
    ui->btnStart->setEnabled(!server.isListening());
    ui->btnStop->setEnabled(server.isListening());

    //Only one page
    if(ui->stackedWidget->count() <= 1)
    {
        btnBack->setEnabled(false);
        btnNext->setEnabled(false);
        return;
    }

    //First page
    if(ui->stackedWidget->currentIndex() == 0)
    {
        btnBack->setEnabled(false);
        btnNext->setEnabled(true);
        return;
    }

    //Last page
    if(ui->stackedWidget->currentIndex() >= ui->stackedWidget->count() -1)
    {
        btnBack->setEnabled(true);
        btnNext->setEnabled(false);
        return;
    }
}




void MainWindow::init()
{
    btnNext = new QPushButton("Next", this);
    btnBack = new QPushButton("Back", this);

    ui->buttonBox->addButton(btnBack, QDialogButtonBox::ButtonRole::ActionRole);
    ui->buttonBox->addButton(btnNext, QDialogButtonBox::ButtonRole::ActionRole);

    connect(btnBack, &QPushButton::clicked,this,&MainWindow::back);
    connect(btnNext, &QPushButton::clicked,this,&MainWindow::next);
    connect(&server, &Server::changed,this,&MainWindow::changed);
    enableButtons();
}


