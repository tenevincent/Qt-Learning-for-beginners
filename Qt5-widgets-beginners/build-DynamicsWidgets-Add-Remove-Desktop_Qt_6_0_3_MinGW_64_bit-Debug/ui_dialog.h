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
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnAddWidget;
    QFrame *frame_holder;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(608, 484);
        verticalLayout_3 = new QVBoxLayout(Dialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        btnAddWidget = new QPushButton(Dialog);
        btnAddWidget->setObjectName(QString::fromUtf8("btnAddWidget"));
        QFont font;
        font.setPointSize(15);
        btnAddWidget->setFont(font);
        btnAddWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0)"));

        verticalLayout_3->addWidget(btnAddWidget);

        frame_holder = new QFrame(Dialog);
        frame_holder->setObjectName(QString::fromUtf8("frame_holder"));
        frame_holder->setFrameShape(QFrame::StyledPanel);
        frame_holder->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_holder);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(frame_holder);

        verticalSpacer = new QSpacerItem(20, 397, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnAddWidget->setText(QCoreApplication::translate("Dialog", "Click to Add a Wdiget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
