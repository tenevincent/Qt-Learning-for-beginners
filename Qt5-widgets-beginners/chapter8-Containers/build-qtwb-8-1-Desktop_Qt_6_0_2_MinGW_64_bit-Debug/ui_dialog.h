/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leEmail;
    QLabel *label_2;
    QLineEdit *leName;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *grpFood;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QGroupBox *grpActivies;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(435, 359);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leEmail = new QLineEdit(groupBox);
        leEmail->setObjectName(QString::fromUtf8("leEmail"));

        gridLayout->addWidget(leEmail, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        leName = new QLineEdit(groupBox);
        leName->setObjectName(QString::fromUtf8("leName"));

        gridLayout->addWidget(leName, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        grpFood = new QGroupBox(groupBox_2);
        grpFood->setObjectName(QString::fromUtf8("grpFood"));
        verticalLayout_2 = new QVBoxLayout(grpFood);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBox = new QCheckBox(grpFood);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        checkBox_2 = new QCheckBox(grpFood);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(grpFood);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_2->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(grpFood);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout_2->addWidget(checkBox_4);


        horizontalLayout->addWidget(grpFood);

        grpActivies = new QGroupBox(groupBox_2);
        grpActivies->setObjectName(QString::fromUtf8("grpActivies"));
        verticalLayout_3 = new QVBoxLayout(grpActivies);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkBox_5 = new QCheckBox(grpActivies);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout_3->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(grpActivies);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        verticalLayout_3->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(grpActivies);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        verticalLayout_3->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(grpActivies);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        verticalLayout_3->addWidget(checkBox_8);


        horizontalLayout->addWidget(grpActivies);


        verticalLayout->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "Person", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Email", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Name", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Dialog", "Options", nullptr));
        grpFood->setTitle(QCoreApplication::translate("Dialog", "Food", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog", "Salad", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Dialog", "Pizza", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Dialog", "Icecream", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Dialog", "Chicken", nullptr));
        grpActivies->setTitle(QCoreApplication::translate("Dialog", "Activites", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Dialog", "Netflix", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Dialog", "Running", nullptr));
        checkBox_7->setText(QCoreApplication::translate("Dialog", "Painting", nullptr));
        checkBox_8->setText(QCoreApplication::translate("Dialog", "Family", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
