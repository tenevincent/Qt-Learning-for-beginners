#ifndef LISTWIDGETITEMVIEW_H
#define LISTWIDGETITEMVIEW_H

#include <QWidget>

namespace Ui {
class ListWidgetItemView;
}

class ListWidgetItemView : public QWidget
{
    Q_OBJECT

public:
    explicit ListWidgetItemView(QWidget *parent = nullptr);
    ~ListWidgetItemView();

private:
    Ui::ListWidgetItemView *ui;
};

#endif // LISTWIDGETITEMVIEW_H
