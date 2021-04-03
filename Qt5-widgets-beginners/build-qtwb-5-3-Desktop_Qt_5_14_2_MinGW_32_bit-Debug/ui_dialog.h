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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelImage;
    QLabel *labelPath;
    QDialogButtonBox *btnCancel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(368, 326);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(Dialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelImage = new QLabel(Dialog);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setMaximumSize(QSize(30, 16777215));
        QFont font;
        font.setPointSize(18);
        font.setBold(false);
        font.setWeight(50);
        labelImage->setFont(font);

        horizontalLayout->addWidget(labelImage);

        labelPath = new QLabel(Dialog);
        labelPath->setObjectName(QString::fromUtf8("labelPath"));

        horizontalLayout->addWidget(labelPath);


        verticalLayout->addLayout(horizontalLayout);

        btnCancel = new QDialogButtonBox(Dialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(btnCancel);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        labelImage->setText(QCoreApplication::translate("Dialog", "X", nullptr));
        labelPath->setText(QCoreApplication::translate("Dialog", "Path here", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
