#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QListWidgetItem>
#include <QUrl>
#include <QDebug>
#include <QDesktopServices>



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
    void itemDoubleClicked(QListWidgetItem *item);


private:
    Ui::MainWindow *ui;



    void init();
    void addCategory(QString name);
    void addLink(QListWidget* list, QString name, QString url);
    void addNews();
    void addSocial();
    void addSearch();


};
#endif // MAINWINDOW_H
