#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSettings>
#include <QVariant>
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

private slots:
    void on_btnSave_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::Dialog *ui;
    void init();
    void load();


};
#endif // DIALOG_H
