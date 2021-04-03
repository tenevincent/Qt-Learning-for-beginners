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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *txtDefault;
    QLabel *label_2;
    QLineEdit *txtTest;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QComboBox *cmbEcho;
    QCheckBox *chkEnabled;
    QCheckBox *chkReadOnly;
    QCheckBox *chkClearButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(327, 313);
        verticalLayout_2 = new QVBoxLayout(Dialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        txtDefault = new QLineEdit(Dialog);
        txtDefault->setObjectName(QString::fromUtf8("txtDefault"));

        verticalLayout_2->addWidget(txtDefault);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        txtTest = new QLineEdit(Dialog);
        txtTest->setObjectName(QString::fromUtf8("txtTest"));

        verticalLayout_2->addWidget(txtTest);

        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cmbEcho = new QComboBox(groupBox);
        cmbEcho->setObjectName(QString::fromUtf8("cmbEcho"));

        verticalLayout->addWidget(cmbEcho);

        chkEnabled = new QCheckBox(groupBox);
        chkEnabled->setObjectName(QString::fromUtf8("chkEnabled"));

        verticalLayout->addWidget(chkEnabled);

        chkReadOnly = new QCheckBox(groupBox);
        chkReadOnly->setObjectName(QString::fromUtf8("chkReadOnly"));

        verticalLayout->addWidget(chkReadOnly);

        chkClearButton = new QCheckBox(groupBox);
        chkClearButton->setObjectName(QString::fromUtf8("chkClearButton"));

        verticalLayout->addWidget(chkClearButton);


        verticalLayout_2->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Default", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Test", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "Options", nullptr));
        chkEnabled->setText(QCoreApplication::translate("Dialog", "Enabled", nullptr));
        chkReadOnly->setText(QCoreApplication::translate("Dialog", "ReadOnly", nullptr));
        chkClearButton->setText(QCoreApplication::translate("Dialog", "ClearButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
