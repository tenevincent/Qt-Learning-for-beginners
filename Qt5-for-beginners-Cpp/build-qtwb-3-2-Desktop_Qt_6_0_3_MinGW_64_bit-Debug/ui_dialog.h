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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(322, 253);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(Dialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QFont font;
        font.setPointSize(12);
        checkBox->setFont(font);

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(Dialog);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setFont(font);

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(Dialog);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setFont(font);

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(Dialog);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setFont(font);

        verticalLayout->addWidget(checkBox_4);

        checkBox_8 = new QCheckBox(Dialog);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setFont(font);

        verticalLayout->addWidget(checkBox_8);

        checkBox_7 = new QCheckBox(Dialog);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setFont(font);

        verticalLayout->addWidget(checkBox_7);

        checkBox_6 = new QCheckBox(Dialog);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setFont(font);

        verticalLayout->addWidget(checkBox_6);

        checkBox_5 = new QCheckBox(Dialog);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setFont(font);

        verticalLayout->addWidget(checkBox_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnOk = new QPushButton(Dialog);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(Dialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog", "Orange", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Dialog", "Banane", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Dialog", "Mangoo", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Dialog", "Mandarine", nullptr));
        checkBox_8->setText(QCoreApplication::translate("Dialog", "Clementine", nullptr));
        checkBox_7->setText(QCoreApplication::translate("Dialog", "Orangina", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Dialog", "Papaya", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Dialog", "Citronen", nullptr));
        btnOk->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
