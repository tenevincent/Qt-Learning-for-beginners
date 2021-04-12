#include "formthirdview.h"
#include "ui_formthirdview.h"

FormThirdView::FormThirdView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormThirdView)
{
    ui->setupUi(this);
}

FormThirdView::~FormThirdView()
{
    delete ui;
}
