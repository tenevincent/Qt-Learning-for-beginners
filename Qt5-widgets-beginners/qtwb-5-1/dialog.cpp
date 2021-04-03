#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);




    QPushButton *btnAccept = new QPushButton(QIcon(":/dialog/images/accept.png"),"Accept",this);
     QPushButton *btnReject = new QPushButton("Reject",this);
     btnReject->setIcon(QIcon(":/dialog/images/cancel.png"));

     ui->buttonBox->addButton(btnAccept,QDialogButtonBox::ButtonRole::AcceptRole);
         ui->buttonBox->addButton(btnReject,QDialogButtonBox::ButtonRole::RejectRole);

     connect(btnAccept,&QPushButton::clicked,this,&Dialog::acceptMe);
     connect(btnReject,&QPushButton::clicked,this,&QDialog::reject);

     load();


}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_btnNew_clicked()
{
    ui->plainTextEdit->clear();
}

void Dialog::on_btnOpen_clicked()
{
    load();
}

void Dialog::on_btnSave_clicked()
{
    save();
    QMessageBox::information(this,"Saved","Your changes have been saved!");
}

void Dialog::acceptMe()
{
    save();
    accept();
}



void Dialog::load()
{
    QFile file(m_fileName);
    if(!file.exists()) return;

    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::critical(this,"Error",file.errorString());
        return;
    }

    QTextStream stream(&file);
    ui->plainTextEdit->setPlainText(stream.readAll());
    file.close();
    m_saved = true;
}

void Dialog::save()
{

    QFile file(m_fileName);

    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::critical(this,"Error",file.errorString());
        return;
    }

    QTextStream stream(&file);
    stream << ui->plainTextEdit->toPlainText();
    file.close();
    m_saved = true;
}


void Dialog::on_plainTextEdit_textChanged()
{
    m_saved = false;

}
