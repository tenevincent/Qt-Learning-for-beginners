#ifndef DIALOGCHILD_H
#define DIALOGCHILD_H

#include <QDialog>

namespace Ui {
class DialogChild;
}

class DialogChild : public QDialog
{
    Q_OBJECT

public:
    explicit DialogChild(QWidget *parent = nullptr);
    ~DialogChild();

private slots:
    void on_btnClose_clicked();

private:
    Ui::DialogChild *ui;
};

#endif // DIALOGCHILD_H
