#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QListWidget>
#include <QListWidgetItem>
#include "customlistwidgetitem.h"
#include <QVector>
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


    QVector <CustomListWidgetItem*> itemVec;

    void init_widgets();
    
private slots:
    void on_addBtn_clicked();

    void on_delBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
