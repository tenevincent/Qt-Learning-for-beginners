/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitterVertical;
    QSplitter *splitterHorizontal;
    QPlainTextEdit *plainTextEditLeft;
    QPlainTextEdit *plainTextEditRight;
    QPlainTextEdit *plainTextEdit_3;
    QHBoxLayout *splitterVertical_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;
    QPushButton *btnAccept;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitterVertical = new QSplitter(Dialog);
        splitterVertical->setObjectName(QString::fromUtf8("splitterVertical"));
        splitterVertical->setMinimumSize(QSize(7, 0));
        splitterVertical->setOrientation(Qt::Vertical);
        splitterHorizontal = new QSplitter(splitterVertical);
        splitterHorizontal->setObjectName(QString::fromUtf8("splitterHorizontal"));
        splitterHorizontal->setEnabled(true);
        splitterHorizontal->setMinimumSize(QSize(100, 0));
        splitterHorizontal->setOrientation(Qt::Horizontal);
        plainTextEditLeft = new QPlainTextEdit(splitterHorizontal);
        plainTextEditLeft->setObjectName(QString::fromUtf8("plainTextEditLeft"));
        plainTextEditLeft->setMinimumSize(QSize(100, 0));
        splitterHorizontal->addWidget(plainTextEditLeft);
        plainTextEditRight = new QPlainTextEdit(splitterHorizontal);
        plainTextEditRight->setObjectName(QString::fromUtf8("plainTextEditRight"));
        splitterHorizontal->addWidget(plainTextEditRight);
        splitterVertical->addWidget(splitterHorizontal);
        plainTextEdit_3 = new QPlainTextEdit(splitterVertical);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        splitterVertical->addWidget(plainTextEdit_3);

        verticalLayout->addWidget(splitterVertical);

        splitterVertical_2 = new QHBoxLayout();
        splitterVertical_2->setObjectName(QString::fromUtf8("splitterVertical_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        splitterVertical_2->addItem(horizontalSpacer);

        btnCancel = new QPushButton(Dialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        splitterVertical_2->addWidget(btnCancel);

        btnAccept = new QPushButton(Dialog);
        btnAccept->setObjectName(QString::fromUtf8("btnAccept"));

        splitterVertical_2->addWidget(btnAccept);


        verticalLayout->addLayout(splitterVertical_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnCancel->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
        btnAccept->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
