/********************************************************************************
** Form generated from reading UI file 'selections.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTIONS_H
#define UI_SELECTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Selections
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Selections)
    {
        if (Selections->objectName().isEmpty())
            Selections->setObjectName(QString::fromUtf8("Selections"));
        Selections->resize(400, 300);
        verticalLayout = new QVBoxLayout(Selections);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(Selections);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        buttonBox = new QDialogButtonBox(Selections);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Selections);
        QObject::connect(buttonBox, SIGNAL(accepted()), Selections, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Selections, SLOT(reject()));

        QMetaObject::connectSlotsByName(Selections);
    } // setupUi

    void retranslateUi(QDialog *Selections)
    {
        Selections->setWindowTitle(QCoreApplication::translate("Selections", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Selections: public Ui_Selections {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTIONS_H
