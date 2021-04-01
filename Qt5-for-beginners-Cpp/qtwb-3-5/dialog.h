#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>



QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;

    QString temp;
    QString code;

private slots:
    void append();


};
#endif // DIALOG_H
