#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QFileInfo>
#include <QFileInfoList>
#include <QStringList>
#include <QDateTime>
#include <QDir>




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QStandardItemModel model;

    void init();
    void addFile(QStandardItem *root, QFileInfo info);


};
#endif // MAINWINDOW_H
