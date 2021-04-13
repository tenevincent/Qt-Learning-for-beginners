#ifndef CUSTOMLISTWIDGETITEM_H
#define CUSTOMLISTWIDGETITEM_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QSlider>
#include <QProgressBar>
#include <QLabel>



namespace Ui {
class CustomListWidgetItem;
}

class CustomListWidgetItem : public QWidget
{
    Q_OBJECT

public:
    explicit CustomListWidgetItem(QWidget *parent = 0);
    ~CustomListWidgetItem();

private slots:
    void on_pressThisBtn_clicked();

    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::CustomListWidgetItem *ui;
};

#endif // CUSTOMLISTWIDGETITEM_H
