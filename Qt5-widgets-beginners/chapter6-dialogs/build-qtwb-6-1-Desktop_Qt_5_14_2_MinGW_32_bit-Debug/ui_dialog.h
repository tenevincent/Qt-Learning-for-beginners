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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *btnWithParent;
    QPushButton *btnWithoutParent;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(355, 246);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnWithParent = new QPushButton(Dialog);
        btnWithParent->setObjectName(QString::fromUtf8("btnWithParent"));

        verticalLayout->addWidget(btnWithParent);

        btnWithoutParent = new QPushButton(Dialog);
        btnWithoutParent->setObjectName(QString::fromUtf8("btnWithoutParent"));

        verticalLayout->addWidget(btnWithoutParent);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnWithParent->setText(QCoreApplication::translate("Dialog", "With Parent", nullptr));
        btnWithoutParent->setText(QCoreApplication::translate("Dialog", "Without Parent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
