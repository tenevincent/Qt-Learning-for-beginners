#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QDialog>
#include <QDebug>
#include <QDateTime>



QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_btnAccept_clicked();

    void on_btnCancel_clicked();

    void on_btnEditor_clicked();

    void doStuff();
private:
    Ui::Dialog *ui;




};
#endif // DIALOG_H
