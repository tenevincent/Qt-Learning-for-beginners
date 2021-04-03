/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *txtPhone;
    QLabel *label_2;
    QLineEdit *txtIP;
    QLabel *label_3;
    QLineEdit *txtDate;
    QLabel *label_4;
    QLineEdit *txtEmail;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(336, 217);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txtPhone = new QLineEdit(Dialog);
        txtPhone->setObjectName(QString::fromUtf8("txtPhone"));

        gridLayout->addWidget(txtPhone, 0, 1, 1, 1);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtIP = new QLineEdit(Dialog);
        txtIP->setObjectName(QString::fromUtf8("txtIP"));

        gridLayout->addWidget(txtIP, 1, 1, 1, 1);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        txtDate = new QLineEdit(Dialog);
        txtDate->setObjectName(QString::fromUtf8("txtDate"));

        gridLayout->addWidget(txtDate, 2, 1, 1, 1);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        txtEmail = new QLineEdit(Dialog);
        txtEmail->setObjectName(QString::fromUtf8("txtEmail"));

        gridLayout->addWidget(txtEmail, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Phone", nullptr));
        txtPhone->setInputMask(QCoreApplication::translate("Dialog", "000-000-0000", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "IP", nullptr));
        txtIP->setInputMask(QCoreApplication::translate("Dialog", "000.000.000.000;_", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Date", nullptr));
        txtDate->setInputMask(QCoreApplication::translate("Dialog", "00/00/0000;-", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "Email", nullptr));
        txtEmail->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
