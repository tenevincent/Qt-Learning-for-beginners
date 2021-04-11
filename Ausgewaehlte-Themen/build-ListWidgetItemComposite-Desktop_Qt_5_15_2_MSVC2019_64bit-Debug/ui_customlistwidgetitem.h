/********************************************************************************
** Form generated from reading UI file 'customlistwidgetitem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMLISTWIDGETITEM_H
#define UI_CUSTOMLISTWIDGETITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomListWidgetItem
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pressThisBtn_3;
    QPushButton *pressThisBtn;
    QPushButton *pressThisBtn_2;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider;
    QProgressBar *progressBar;
    QFrame *line;

    void setupUi(QWidget *CustomListWidgetItem)
    {
        if (CustomListWidgetItem->objectName().isEmpty())
            CustomListWidgetItem->setObjectName(QString::fromUtf8("CustomListWidgetItem"));
        CustomListWidgetItem->resize(462, 91);
        verticalLayout = new QVBoxLayout(CustomListWidgetItem);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(CustomListWidgetItem);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        label = new QLabel(CustomListWidgetItem);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        pressThisBtn_3 = new QPushButton(CustomListWidgetItem);
        pressThisBtn_3->setObjectName(QString::fromUtf8("pressThisBtn_3"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pressThisBtn_3->setFont(font);

        horizontalLayout_2->addWidget(pressThisBtn_3);

        pressThisBtn = new QPushButton(CustomListWidgetItem);
        pressThisBtn->setObjectName(QString::fromUtf8("pressThisBtn"));
        pressThisBtn->setFont(font);

        horizontalLayout_2->addWidget(pressThisBtn);

        pressThisBtn_2 = new QPushButton(CustomListWidgetItem);
        pressThisBtn_2->setObjectName(QString::fromUtf8("pressThisBtn_2"));
        pressThisBtn_2->setFont(font);

        horizontalLayout_2->addWidget(pressThisBtn_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSlider = new QSlider(CustomListWidgetItem);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        progressBar = new QProgressBar(CustomListWidgetItem);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(CustomListWidgetItem);
        line->setObjectName(QString::fromUtf8("line"));
        line->setStyleSheet(QString::fromUtf8("border: 3px solid green;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        retranslateUi(CustomListWidgetItem);

        QMetaObject::connectSlotsByName(CustomListWidgetItem);
    } // setupUi

    void retranslateUi(QWidget *CustomListWidgetItem)
    {
        CustomListWidgetItem->setWindowTitle(QCoreApplication::translate("CustomListWidgetItem", "Form", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("CustomListWidgetItem", "Write something", nullptr));
        label->setText(QCoreApplication::translate("CustomListWidgetItem", "TextLabel", nullptr));
        pressThisBtn_3->setText(QCoreApplication::translate("CustomListWidgetItem", "Add", nullptr));
        pressThisBtn->setText(QCoreApplication::translate("CustomListWidgetItem", "Edit", nullptr));
        pressThisBtn_2->setText(QCoreApplication::translate("CustomListWidgetItem", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomListWidgetItem: public Ui_CustomListWidgetItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMLISTWIDGETITEM_H
