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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QGroupBox *groupBoxSyrup;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QGroupBox *groupBoxToppings;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QGroupBox *groupBoxIceCream;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *groupBoxSize;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(658, 626);
        verticalLayout_5 = new QVBoxLayout(Dialog);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBoxSyrup = new QGroupBox(Dialog);
        groupBoxSyrup->setObjectName(QString::fromUtf8("groupBoxSyrup"));
        horizontalLayout_3 = new QHBoxLayout(groupBoxSyrup);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioButton_9 = new QRadioButton(groupBoxSyrup);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        QFont font;
        font.setPointSize(16);
        radioButton_9->setFont(font);

        verticalLayout_3->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(groupBoxSyrup);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setFont(font);

        verticalLayout_3->addWidget(radioButton_10);

        radioButton_11 = new QRadioButton(groupBoxSyrup);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));
        radioButton_11->setFont(font);

        verticalLayout_3->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(groupBoxSyrup);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));
        radioButton_12->setFont(font);

        verticalLayout_3->addWidget(radioButton_12);


        horizontalLayout_3->addLayout(verticalLayout_3);


        gridLayout->addWidget(groupBoxSyrup, 0, 0, 1, 1);

        groupBoxToppings = new QGroupBox(Dialog);
        groupBoxToppings->setObjectName(QString::fromUtf8("groupBoxToppings"));
        horizontalLayout_2 = new QHBoxLayout(groupBoxToppings);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_5 = new QRadioButton(groupBoxToppings);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        QFont font1;
        font1.setPointSize(13);
        radioButton_5->setFont(font1);

        verticalLayout_2->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(groupBoxToppings);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setFont(font1);

        verticalLayout_2->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(groupBoxToppings);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setFont(font1);

        verticalLayout_2->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(groupBoxToppings);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setFont(font1);

        verticalLayout_2->addWidget(radioButton_8);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout->addWidget(groupBoxToppings, 0, 1, 1, 1);

        groupBoxIceCream = new QGroupBox(Dialog);
        groupBoxIceCream->setObjectName(QString::fromUtf8("groupBoxIceCream"));
        horizontalLayout = new QHBoxLayout(groupBoxIceCream);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(groupBoxIceCream);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font1);

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBoxIceCream);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font1);

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBoxIceCream);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font1);

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBoxIceCream);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setFont(font1);

        verticalLayout->addWidget(radioButton_4);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addWidget(groupBoxIceCream, 1, 0, 1, 1);

        groupBoxSize = new QGroupBox(Dialog);
        groupBoxSize->setObjectName(QString::fromUtf8("groupBoxSize"));
        groupBoxSize->setFont(font1);
        horizontalLayout_4 = new QHBoxLayout(groupBoxSize);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        radioButton_13 = new QRadioButton(groupBoxSize);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));
        radioButton_13->setFont(font1);

        verticalLayout_4->addWidget(radioButton_13);

        radioButton_14 = new QRadioButton(groupBoxSize);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));
        radioButton_14->setFont(font1);

        verticalLayout_4->addWidget(radioButton_14);

        radioButton_15 = new QRadioButton(groupBoxSize);
        radioButton_15->setObjectName(QString::fromUtf8("radioButton_15"));
        radioButton_15->setFont(font1);

        verticalLayout_4->addWidget(radioButton_15);


        horizontalLayout_4->addLayout(verticalLayout_4);


        gridLayout->addWidget(groupBoxSize, 1, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        btnOK = new QPushButton(Dialog);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout_5->addWidget(btnOK);

        btnCancel = new QPushButton(Dialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_5->addWidget(btnCancel);


        verticalLayout_5->addLayout(horizontalLayout_5);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBoxSyrup->setTitle(QCoreApplication::translate("Dialog", "Syrup", nullptr));
        radioButton_9->setText(QCoreApplication::translate("Dialog", "Vanilla", nullptr));
        radioButton_10->setText(QCoreApplication::translate("Dialog", "Chocolate", nullptr));
        radioButton_11->setText(QCoreApplication::translate("Dialog", "Strawberry", nullptr));
        radioButton_12->setText(QCoreApplication::translate("Dialog", "Special", nullptr));
        groupBoxToppings->setTitle(QCoreApplication::translate("Dialog", "Toppings", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Dialog", "Nuts", nullptr));
        radioButton_6->setText(QCoreApplication::translate("Dialog", "Sprinkles", nullptr));
        radioButton_7->setText(QCoreApplication::translate("Dialog", "Fruit", nullptr));
        radioButton_8->setText(QCoreApplication::translate("Dialog", "Candy", nullptr));
        groupBoxIceCream->setTitle(QCoreApplication::translate("Dialog", "Icecream", nullptr));
        radioButton->setText(QCoreApplication::translate("Dialog", "Carmel", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Dialog", "Fudge", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Dialog", "Cherry", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Dialog", "Strawberry", nullptr));
        groupBoxSize->setTitle(QCoreApplication::translate("Dialog", "Size", nullptr));
        radioButton_13->setText(QCoreApplication::translate("Dialog", "Medium", nullptr));
        radioButton_14->setText(QCoreApplication::translate("Dialog", "Large", nullptr));
        radioButton_15->setText(QCoreApplication::translate("Dialog", "Small", nullptr));
        btnOK->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
