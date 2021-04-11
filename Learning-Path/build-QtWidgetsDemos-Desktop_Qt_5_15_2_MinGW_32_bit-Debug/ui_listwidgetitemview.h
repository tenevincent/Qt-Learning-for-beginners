/********************************************************************************
** Form generated from reading UI file 'listwidgetitemview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWIDGETITEMVIEW_H
#define UI_LISTWIDGETITEMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListWidgetItemView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelDescription;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QFrame *line;

    void setupUi(QWidget *ListWidgetItemView)
    {
        if (ListWidgetItemView->objectName().isEmpty())
            ListWidgetItemView->setObjectName(QString::fromUtf8("ListWidgetItemView"));
        ListWidgetItemView->resize(414, 52);
        verticalLayout = new QVBoxLayout(ListWidgetItemView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelDescription = new QLabel(ListWidgetItemView);
        labelDescription->setObjectName(QString::fromUtf8("labelDescription"));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        labelDescription->setFont(font);

        horizontalLayout->addWidget(labelDescription);

        btnEdit = new QPushButton(ListWidgetItemView);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setMaximumSize(QSize(70, 16777215));
        btnEdit->setBaseSize(QSize(4, 0));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        btnEdit->setFont(font1);

        horizontalLayout->addWidget(btnEdit);

        btnDelete = new QPushButton(ListWidgetItemView);
        btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
        btnDelete->setMaximumSize(QSize(70, 16777215));
        btnDelete->setFont(font1);
        btnDelete->setAutoDefault(false);
        btnDelete->setFlat(false);

        horizontalLayout->addWidget(btnDelete);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(ListWidgetItemView);
        line->setObjectName(QString::fromUtf8("line"));
        line->setBaseSize(QSize(2, 0));
        line->setStyleSheet(QString::fromUtf8("color : green;"));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);


        retranslateUi(ListWidgetItemView);

        QMetaObject::connectSlotsByName(ListWidgetItemView);
    } // setupUi

    void retranslateUi(QWidget *ListWidgetItemView)
    {
        ListWidgetItemView->setWindowTitle(QCoreApplication::translate("ListWidgetItemView", "Form", nullptr));
        labelDescription->setText(QCoreApplication::translate("ListWidgetItemView", "TextLabel", nullptr));
        btnEdit->setText(QCoreApplication::translate("ListWidgetItemView", "Edit", nullptr));
        btnDelete->setText(QCoreApplication::translate("ListWidgetItemView", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListWidgetItemView: public Ui_ListWidgetItemView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWIDGETITEMVIEW_H
