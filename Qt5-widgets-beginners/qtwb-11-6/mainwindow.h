#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QCloseEvent>
#include <QPushButton>
#include <QMessageBox>
#include "server.h"



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
    void on_btnStart_clicked();

    void on_btnStop_clicked();

    void on_buttonBox_accepted();

    void next();
    void back();
    void changed();


private:
    Ui::MainWindow *ui;

    QPushButton *btnBack;
    QPushButton *btnNext;
    Server server;

    void init();
    void enableButtons();


    // QWidget interface
protected:
    void closeEvent(QCloseEvent *event) override;

};
#endif // MAINWINDOW_H
