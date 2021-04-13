#include "listwidgetitemview.h"
#include "ui_listwidgetitemview.h"

ListWidgetItemView::ListWidgetItemView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListWidgetItemView)
{
    ui->setupUi(this);
}

ListWidgetItemView::~ListWidgetItemView()
{
    delete ui;
}
