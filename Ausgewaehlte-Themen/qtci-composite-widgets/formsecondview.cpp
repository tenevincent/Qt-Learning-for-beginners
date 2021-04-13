#include "formsecondview.h"
#include "ui_formsecondview.h"

FormSecondView::FormSecondView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormSecondView)
{
    ui->setupUi(this);
}

FormSecondView::~FormSecondView()
{
    delete ui;
}
