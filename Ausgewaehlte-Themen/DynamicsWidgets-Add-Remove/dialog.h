#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QHash>
#include<QHBoxLayout>



QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

private:
    QHash<QPushButton*, QHBoxLayout*> mButtonToLayoutMap;

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();


    ///  @brief Handles user clicking on "add widget" button.
    void onAddWidget();

    ///  @brief Handles user clicking on a remove widget button.
    void onRemoveWidget();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
