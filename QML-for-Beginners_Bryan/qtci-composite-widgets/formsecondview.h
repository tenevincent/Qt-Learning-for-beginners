#ifndef FORMSECONDVIEW_H
#define FORMSECONDVIEW_H

#include <QWidget>

namespace Ui {
class FormSecondView;
}

class FormSecondView : public QWidget
{
    Q_OBJECT

public:
    explicit FormSecondView(QWidget *parent = nullptr);
    ~FormSecondView();

private:
    Ui::FormSecondView *ui;
};

#endif // FORMSECONDVIEW_H
