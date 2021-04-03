#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);


    QPushButton *button = new QPushButton("Edit",this);
    ui->buttonBox->addButton(button,QDialogButtonBox::ButtonRole::ActionRole);
    connect(button,&QPushButton::clicked,this, &Dialog::on_edit);


    getMusic()->setArtist("Tool");
    getMusic()->setAlbum("Fear");
    getMusic()->setRelease(QDate(2019,8,9));
    getMusic()->setNotes("FINALLY!!!");

    qDebug() << "Album: " << getMusic()->album() ;
    qDebug() << "Artist: " << getMusic()->artist() ;
    qDebug() << "Release: " << getMusic()->release() ;
    qDebug() << "Note: " << getMusic()->notes() ;
    qDebug() << "Album: " << getMusic()->album() ;


    /*
    m_music.setArtist("Tool");
    m_music.setAlbum("Fear");
    m_music.setRelease(QDate(2019,8,9));
    m_music.setNotes("FINALLY!!!");
    */

    load();
}

Dialog::~Dialog()
{
    delete ui;
}

Music* Dialog::getMusic()
{
    return  Singleton::getInstance()->getMusic();
}


void Dialog::on_buttonBox_accepted()
{
    QMessageBox::information(this,"Selection", ui->plainTextEdit->toPlainText());
    accept();
}

void Dialog::on_buttonBox_rejected()
{
    reject();
}

void Dialog::on_edit()
{
    Editor *dlg = new Editor(this);
    //dlg->loadMusic(*getMusic());
    dlg->exec();

    //m_music = dlg->music();

    load();

    delete dlg;
}

void Dialog::load()
{
    ui->plainTextEdit->clear();
    ui->plainTextEdit->setReadOnly(true);

    QString data;
    data.append("Artist: " + getMusic()->artist() + "\r\n");
    data.append("Album: " + getMusic()->album() + "\r\n");
    data.append("Release: " + getMusic()->release().toString() + "\r\n");
    data.append("Notes: " + getMusic()->notes() + "\r\n");

    ui->plainTextEdit->setPlainText(data);

}







