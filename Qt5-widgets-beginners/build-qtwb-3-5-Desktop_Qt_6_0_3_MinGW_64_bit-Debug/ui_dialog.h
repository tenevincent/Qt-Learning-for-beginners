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
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btnOne;
    QPushButton *btnTwo;
    QPushButton *btnThree;
    QPushButton *btnFourfth;
    QPushButton *btnFive;
    QPushButton *btnSixth;
    QPushButton *btnSeven;
    QPushButton *btnEight;
    QPushButton *btnNine;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnZero;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelNotify;
    QPushButton *btnVerify;
    QPushButton *btnSave;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(450, 279);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnOne = new QPushButton(Dialog);
        btnOne->setObjectName(QString::fromUtf8("btnOne"));
        QFont font;
        font.setPointSize(16);
        btnOne->setFont(font);

        gridLayout->addWidget(btnOne, 0, 0, 1, 1);

        btnTwo = new QPushButton(Dialog);
        btnTwo->setObjectName(QString::fromUtf8("btnTwo"));
        btnTwo->setFont(font);

        gridLayout->addWidget(btnTwo, 0, 1, 1, 1);

        btnThree = new QPushButton(Dialog);
        btnThree->setObjectName(QString::fromUtf8("btnThree"));
        btnThree->setFont(font);

        gridLayout->addWidget(btnThree, 0, 2, 1, 1);

        btnFourfth = new QPushButton(Dialog);
        btnFourfth->setObjectName(QString::fromUtf8("btnFourfth"));
        btnFourfth->setFont(font);

        gridLayout->addWidget(btnFourfth, 1, 0, 1, 1);

        btnFive = new QPushButton(Dialog);
        btnFive->setObjectName(QString::fromUtf8("btnFive"));
        btnFive->setFont(font);

        gridLayout->addWidget(btnFive, 1, 1, 1, 1);

        btnSixth = new QPushButton(Dialog);
        btnSixth->setObjectName(QString::fromUtf8("btnSixth"));
        btnSixth->setFont(font);

        gridLayout->addWidget(btnSixth, 1, 2, 1, 1);

        btnSeven = new QPushButton(Dialog);
        btnSeven->setObjectName(QString::fromUtf8("btnSeven"));
        btnSeven->setFont(font);

        gridLayout->addWidget(btnSeven, 2, 0, 1, 1);

        btnEight = new QPushButton(Dialog);
        btnEight->setObjectName(QString::fromUtf8("btnEight"));
        btnEight->setFont(font);

        gridLayout->addWidget(btnEight, 2, 1, 1, 1);

        btnNine = new QPushButton(Dialog);
        btnNine->setObjectName(QString::fromUtf8("btnNine"));
        btnNine->setFont(font);

        gridLayout->addWidget(btnNine, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnZero = new QPushButton(Dialog);
        btnZero->setObjectName(QString::fromUtf8("btnZero"));
        btnZero->setFont(font);

        horizontalLayout->addWidget(btnZero);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        labelNotify = new QLabel(Dialog);
        labelNotify->setObjectName(QString::fromUtf8("labelNotify"));
        QFont font1;
        font1.setPointSize(14);
        labelNotify->setFont(font1);

        verticalLayout->addWidget(labelNotify);

        btnVerify = new QPushButton(Dialog);
        btnVerify->setObjectName(QString::fromUtf8("btnVerify"));
        btnVerify->setEnabled(false);
        btnVerify->setFont(font);

        verticalLayout->addWidget(btnVerify);

        btnSave = new QPushButton(Dialog);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setEnabled(false);
        btnSave->setFont(font);

        verticalLayout->addWidget(btnSave);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnOne->setText(QCoreApplication::translate("Dialog", "1", nullptr));
        btnTwo->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        btnThree->setText(QCoreApplication::translate("Dialog", "3", nullptr));
        btnFourfth->setText(QCoreApplication::translate("Dialog", "4", nullptr));
        btnFive->setText(QCoreApplication::translate("Dialog", "5", nullptr));
        btnSixth->setText(QCoreApplication::translate("Dialog", "6", nullptr));
        btnSeven->setText(QCoreApplication::translate("Dialog", "7", nullptr));
        btnEight->setText(QCoreApplication::translate("Dialog", "8", nullptr));
        btnNine->setText(QCoreApplication::translate("Dialog", "9", nullptr));
        btnZero->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        labelNotify->setText(QCoreApplication::translate("Dialog", "Please enter a code and press save", nullptr));
        btnVerify->setText(QCoreApplication::translate("Dialog", "Verify", nullptr));
        btnSave->setText(QCoreApplication::translate("Dialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
