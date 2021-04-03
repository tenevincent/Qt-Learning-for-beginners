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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btnCheckable;
    QPushButton *btnToggleIsChecked;
    QPushButton *btnAutoRepeat;
    QPushButton *btnToggleAutoRepeat;
    QPushButton *btnDefault;
    QPushButton *btnToggleDefault;
    QPushButton *btnQuit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(328, 162);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnCheckable = new QPushButton(Dialog);
        btnCheckable->setObjectName(QString::fromUtf8("btnCheckable"));
        btnCheckable->setCheckable(true);
        btnCheckable->setChecked(true);

        gridLayout->addWidget(btnCheckable, 0, 0, 1, 1);

        btnToggleIsChecked = new QPushButton(Dialog);
        btnToggleIsChecked->setObjectName(QString::fromUtf8("btnToggleIsChecked"));
        btnToggleIsChecked->setCheckable(true);
        btnToggleIsChecked->setChecked(true);

        gridLayout->addWidget(btnToggleIsChecked, 0, 1, 1, 1);

        btnAutoRepeat = new QPushButton(Dialog);
        btnAutoRepeat->setObjectName(QString::fromUtf8("btnAutoRepeat"));
        btnAutoRepeat->setAutoRepeat(true);

        gridLayout->addWidget(btnAutoRepeat, 1, 0, 1, 1);

        btnToggleAutoRepeat = new QPushButton(Dialog);
        btnToggleAutoRepeat->setObjectName(QString::fromUtf8("btnToggleAutoRepeat"));

        gridLayout->addWidget(btnToggleAutoRepeat, 1, 1, 1, 1);

        btnDefault = new QPushButton(Dialog);
        btnDefault->setObjectName(QString::fromUtf8("btnDefault"));

        gridLayout->addWidget(btnDefault, 2, 0, 1, 1);

        btnToggleDefault = new QPushButton(Dialog);
        btnToggleDefault->setObjectName(QString::fromUtf8("btnToggleDefault"));

        gridLayout->addWidget(btnToggleDefault, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        btnQuit = new QPushButton(Dialog);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));

        verticalLayout->addWidget(btnQuit);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Dialog);

        btnDefault->setDefault(true);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnCheckable->setText(QCoreApplication::translate("Dialog", "Checkable", nullptr));
        btnToggleIsChecked->setText(QCoreApplication::translate("Dialog", "Is Checked", nullptr));
        btnAutoRepeat->setText(QCoreApplication::translate("Dialog", "Auto Repeat", nullptr));
        btnToggleAutoRepeat->setText(QCoreApplication::translate("Dialog", "Toggle Auto Repeat", nullptr));
        btnDefault->setText(QCoreApplication::translate("Dialog", "Default", nullptr));
        btnToggleDefault->setText(QCoreApplication::translate("Dialog", "Toggle Default", nullptr));
        btnQuit->setText(QCoreApplication::translate("Dialog", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
