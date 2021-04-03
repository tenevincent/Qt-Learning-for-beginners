#include "editor.h"
#include "ui_editor.h"

Editor::Editor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);

    loadMusic( );
}

Editor::~Editor()
{
    delete ui;
}

void Editor::on_buttonBox_accepted()
{

    getMusic()->setAlbum(ui->txtAlbum->text());
    getMusic()->setArtist(ui->txtArtist->text());
    getMusic()->setNotes(ui->txtNote->toPlainText());
    getMusic()->setRelease(ui->deRelease->date());

    accept();
}

void Editor::on_buttonBox_rejected()
{
    reject();
}

Music* Editor::getMusic()
{
    return Singleton::getInstance()->getMusic();
}

/*
Music Editor::music() const
{
    return m_music;
}
*/
void Editor::loadMusic( )
{


    ui->txtArtist->setText(getMusic()->artist());
    ui->txtAlbum->setText(getMusic()->album());
    ui->txtNote->setPlainText(getMusic()->notes());
    ui->deRelease->setDate(getMusic()->release());
}
