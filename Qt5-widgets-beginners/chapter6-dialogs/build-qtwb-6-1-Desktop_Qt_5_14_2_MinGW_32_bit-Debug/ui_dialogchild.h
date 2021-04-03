/********************************************************************************
** Form generated from reading UI file 'dialogchild.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCHILD_H
#define UI_DIALOGCHILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogChild
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *btnClose;

    void setupUi(QDialog *DialogChild)
    {
        if (DialogChild->objectName().isEmpty())
            DialogChild->setObjectName(QString::fromUtf8("DialogChild"));
        DialogChild->resize(400, 300);
        verticalLayout = new QVBoxLayout(DialogChild);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(DialogChild);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(17);
        label->setFont(font);

        verticalLayout->addWidget(label);

        btnClose = new QPushButton(DialogChild);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        verticalLayout->addWidget(btnClose);


        retranslateUi(DialogChild);

        QMetaObject::connectSlotsByName(DialogChild);
    } // setupUi

    void retranslateUi(QDialog *DialogChild)
    {
        DialogChild->setWindowTitle(QCoreApplication::translate("DialogChild", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogChild", "This is the child Dialog", nullptr));
        btnClose->setText(QCoreApplication::translate("DialogChild", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogChild: public Ui_DialogChild {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCHILD_H
