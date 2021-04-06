/********************************************************************************
** Form generated from reading UI file 'formthirdview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTHIRDVIEW_H
#define UI_FORMTHIRDVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormThirdView
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;
    QDateEdit *dateEdit;
    QDateTimeEdit *dateTimeEdit;
    QCalendarWidget *calendarWidget;
    QLCDNumber *lcdNumber;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;

    void setupUi(QWidget *FormThirdView)
    {
        if (FormThirdView->objectName().isEmpty())
            FormThirdView->setObjectName(QString::fromUtf8("FormThirdView"));
        FormThirdView->resize(656, 476);
        horizontalLayout = new QHBoxLayout(FormThirdView);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalSlider = new QSlider(FormThirdView);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        dateEdit = new QDateEdit(FormThirdView);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout->addWidget(dateEdit);

        dateTimeEdit = new QDateTimeEdit(FormThirdView);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        verticalLayout->addWidget(dateTimeEdit);

        calendarWidget = new QCalendarWidget(FormThirdView);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        verticalLayout->addWidget(calendarWidget);

        lcdNumber = new QLCDNumber(FormThirdView);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        verticalLayout->addWidget(lcdNumber);


        horizontalLayout->addLayout(verticalLayout);

        scrollArea = new QScrollArea(FormThirdView);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 314, 456));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);


        retranslateUi(FormThirdView);

        QMetaObject::connectSlotsByName(FormThirdView);
    } // setupUi

    void retranslateUi(QWidget *FormThirdView)
    {
        FormThirdView->setWindowTitle(QCoreApplication::translate("FormThirdView", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormThirdView: public Ui_FormThirdView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTHIRDVIEW_H
