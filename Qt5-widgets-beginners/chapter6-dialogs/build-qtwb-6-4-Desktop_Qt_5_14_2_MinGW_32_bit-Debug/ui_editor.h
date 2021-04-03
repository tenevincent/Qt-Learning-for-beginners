/********************************************************************************
** Form generated from reading UI file 'editor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_H
#define UI_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Editor
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *txtArtist;
    QLabel *label_2;
    QLineEdit *txtAlbum;
    QLabel *label_3;
    QDateEdit *deRelease;
    QLabel *label_4;
    QPlainTextEdit *txtNote;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Editor)
    {
        if (Editor->objectName().isEmpty())
            Editor->setObjectName(QString::fromUtf8("Editor"));
        Editor->resize(313, 333);
        verticalLayout = new QVBoxLayout(Editor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Editor);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txtArtist = new QLineEdit(Editor);
        txtArtist->setObjectName(QString::fromUtf8("txtArtist"));

        gridLayout->addWidget(txtArtist, 0, 1, 1, 1);

        label_2 = new QLabel(Editor);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtAlbum = new QLineEdit(Editor);
        txtAlbum->setObjectName(QString::fromUtf8("txtAlbum"));

        gridLayout->addWidget(txtAlbum, 1, 1, 1, 1);

        label_3 = new QLabel(Editor);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        deRelease = new QDateEdit(Editor);
        deRelease->setObjectName(QString::fromUtf8("deRelease"));

        gridLayout->addWidget(deRelease, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_4 = new QLabel(Editor);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        txtNote = new QPlainTextEdit(Editor);
        txtNote->setObjectName(QString::fromUtf8("txtNote"));

        verticalLayout->addWidget(txtNote);

        buttonBox = new QDialogButtonBox(Editor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Editor);
        QObject::connect(buttonBox, SIGNAL(accepted()), Editor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Editor, SLOT(reject()));

        QMetaObject::connectSlotsByName(Editor);
    } // setupUi

    void retranslateUi(QDialog *Editor)
    {
        Editor->setWindowTitle(QCoreApplication::translate("Editor", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Editor", "Artist", nullptr));
        label_2->setText(QCoreApplication::translate("Editor", "Album", nullptr));
        label_3->setText(QCoreApplication::translate("Editor", "Release", nullptr));
        label_4->setText(QCoreApplication::translate("Editor", "Notes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Editor: public Ui_Editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_H
