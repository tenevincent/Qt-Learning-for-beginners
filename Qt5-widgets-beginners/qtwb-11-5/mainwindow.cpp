#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPushButton *btnStart = new QPushButton("Start",this);
    QPushButton *btnStop = new QPushButton("Stop",this);
    ui->buttonBox->addButton(btnStart,QDialogButtonBox::ButtonRole::ActionRole);
    ui->buttonBox->addButton(btnStop,QDialogButtonBox::ButtonRole::ActionRole);

    connect(btnStart,&QPushButton::clicked,this,&MainWindow::start);
    connect(btnStop,&QPushButton::clicked,this,&MainWindow::stop);

    m_timer.setInterval(100);
    connect(&m_timer,&QTimer::timeout,this,&MainWindow::timeout);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_buttonBox_accepted()
{
    this->close();

}




void MainWindow::timeout()
{
    qDebug() << QTime::currentTime().toString();
    m_stopped = QTime::currentTime();

    qint64 time = m_started.msecsTo(m_stopped);
    qint64 h = time / 1000 / 60 /60;
    qint64 m = (time / 1000 / 60) - (h * 60);
    qint64 s = (time / 1000) - (m * 60);
    qint64 ms = time - (s + ((m + (h * 60))* 60)) * 1000;

    const QString diff = QString("%1:%2:%3:%4")
            .arg(h,2,10,QChar('0'))
            .arg(m,2,10,QChar('0'))
            .arg(s,2,10,QChar('0'))
            .arg(ms,4,10,QChar('0'));

    ui->label->setText(diff);
}

void MainWindow::start()
{
    m_started = QTime::currentTime();
    m_stopped = QTime::currentTime();
    qDebug() << "Starting";
    m_timer.start();
}

void MainWindow::stop()
{
    m_timer.stop();
    qDebug() << "Stopped";
}

