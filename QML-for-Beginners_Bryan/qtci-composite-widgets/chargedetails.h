#ifndef CHARGEDETAILS_H
#define CHARGEDETAILS_H

#include <QMainWindow>
#include <QWidget>


namespace Ui {
class ChargeDetails;
}

class ChargeDetails : public QWidget
{
    Q_OBJECT

public:
    explicit ChargeDetails(QWidget *parent = nullptr);
    ~ChargeDetails();

private:
    Ui::ChargeDetails *ui;
};

#endif // CHARGEDETAILS_H
