#ifndef FORMTHIRDVIEW_H
#define FORMTHIRDVIEW_H

#include <QWidget>

namespace Ui {
class FormThirdView;
}

class FormThirdView : public QWidget
{
    Q_OBJECT

public:
    explicit FormThirdView(QWidget *parent = nullptr);
    ~FormThirdView();

private:
    Ui::FormThirdView *ui;
};

#endif // FORMTHIRDVIEW_H
