#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QTime>
#include <QTimer>
#include <QDebug>




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_buttonBox_accepted();

    void timeout();
    void start();
    void stop();


private:
    Ui::MainWindow *ui;


    QTimer m_timer;
    QTime m_started;
    QTime m_stopped;


};
#endif // MAINWINDOW_H
