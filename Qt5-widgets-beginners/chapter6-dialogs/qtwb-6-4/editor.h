#ifndef EDITOR_H
#define EDITOR_H

#include <QDialog>
#include "music.h"
#include "singleton.h"


namespace Ui {
class Editor;
}

class Editor : public QDialog
{
    Q_OBJECT

public:
    explicit Editor(QWidget *parent = nullptr);
    ~Editor();

   // Music music() const;
    void loadMusic();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Editor *ui;
    Music* getMusic();
};

#endif // EDITOR_H
