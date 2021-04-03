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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnNew;
    QPushButton *btnOpen;
    QPushButton *btnSave;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(307, 283);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnNew = new QPushButton(Dialog);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/file.png"), QSize(), QIcon::Normal, QIcon::On);
        btnNew->setIcon(icon);

        horizontalLayout->addWidget(btnNew);

        btnOpen = new QPushButton(Dialog);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/folder.png"), QSize(), QIcon::Normal, QIcon::On);
        btnOpen->setIcon(icon1);

        horizontalLayout->addWidget(btnOpen);

        btnSave = new QPushButton(Dialog);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/images/disk.png"), QSize(), QIcon::Normal, QIcon::On);
        btnSave->setIcon(icon2);

        horizontalLayout->addWidget(btnSave);


        verticalLayout->addLayout(horizontalLayout);

        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnNew->setText(QCoreApplication::translate("Dialog", "New", nullptr));
        btnOpen->setText(QCoreApplication::translate("Dialog", "Open", nullptr));
        btnSave->setText(QCoreApplication::translate("Dialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
