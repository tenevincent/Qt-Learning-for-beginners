/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;
    QLabel *labelSelected;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(452, 250);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        commandLinkButton = new QCommandLinkButton(Dialog);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));

        verticalLayout->addWidget(commandLinkButton);

        commandLinkButton_2 = new QCommandLinkButton(Dialog);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));

        verticalLayout->addWidget(commandLinkButton_2);

        commandLinkButton_3 = new QCommandLinkButton(Dialog);
        commandLinkButton_3->setObjectName(QString::fromUtf8("commandLinkButton_3"));

        verticalLayout->addWidget(commandLinkButton_3);

        labelSelected = new QLabel(Dialog);
        labelSelected->setObjectName(QString::fromUtf8("labelSelected"));

        verticalLayout->addWidget(labelSelected);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("Dialog", "Option 1", nullptr));
        commandLinkButton->setDescription(QCoreApplication::translate("Dialog", "This is an option 1", nullptr));
        commandLinkButton_2->setText(QCoreApplication::translate("Dialog", "Option 2", nullptr));
        commandLinkButton_2->setDescription(QCoreApplication::translate("Dialog", "This is a Option 2", nullptr));
        commandLinkButton_3->setText(QCoreApplication::translate("Dialog", "Option 3", nullptr));
        commandLinkButton_3->setDescription(QCoreApplication::translate("Dialog", "This is an option 3", nullptr));
        labelSelected->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
