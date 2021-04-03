#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <QVariant>
#include <QMessageBox>
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
    void on_btnAdd_clicked();



    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::MainWindow *ui;


    void init();
    void load();
    void save();


};
#endif // MAINWINDOW_H
