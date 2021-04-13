/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QAction *actionAdd;
    QAction *actionRemove;
    QAction *actionSelect_All;
    QAction *actionSelect_None;
    QAction *actionChecked;
    QAction *actionUnchecked;
    QAction *actionPartially;
    QWidget *centralwidget;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuItems;
    QMenu *menuState;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/files/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/files/images/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon4);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/files/images/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon5);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionAdd->setIcon(icon);
        actionRemove = new QAction(MainWindow);
        actionRemove->setObjectName(QString::fromUtf8("actionRemove"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/files/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemove->setIcon(icon6);
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/files/images/page_refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_All->setIcon(icon7);
        actionSelect_None = new QAction(MainWindow);
        actionSelect_None->setObjectName(QString::fromUtf8("actionSelect_None"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/files/images/page_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_None->setIcon(icon8);
        actionChecked = new QAction(MainWindow);
        actionChecked->setObjectName(QString::fromUtf8("actionChecked"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/files/images/pencil_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChecked->setIcon(icon9);
        actionUnchecked = new QAction(MainWindow);
        actionUnchecked->setObjectName(QString::fromUtf8("actionUnchecked"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/files/images/pencil_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnchecked->setIcon(icon10);
        actionPartially = new QAction(MainWindow);
        actionPartially->setObjectName(QString::fromUtf8("actionPartially"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/files/images/pencil_go.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPartially->setIcon(icon11);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 30, 721, 431));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuItems = new QMenu(menubar);
        menuItems->setObjectName(QString::fromUtf8("menuItems"));
        menuState = new QMenu(menubar);
        menuState->setObjectName(QString::fromUtf8("menuState"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuItems->menuAction());
        menubar->addAction(menuState->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuItems->addAction(actionAdd);
        menuItems->addAction(actionRemove);
        menuItems->addAction(actionSelect_All);
        menuItems->addAction(actionSelect_None);
        menuState->addAction(actionChecked);
        menuState->addAction(actionUnchecked);
        menuState->addAction(actionPartially);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_as);
        toolBar->addSeparator();
        toolBar->addAction(actionAdd);
        toolBar->addAction(actionRemove);
        toolBar->addSeparator();
        toolBar->addAction(actionChecked);
        toolBar->addAction(actionUnchecked);
        toolBar->addAction(actionPartially);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        actionRemove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        actionSelect_All->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
        actionSelect_None->setText(QCoreApplication::translate("MainWindow", "Select None", nullptr));
        actionChecked->setText(QCoreApplication::translate("MainWindow", "Checked", nullptr));
        actionUnchecked->setText(QCoreApplication::translate("MainWindow", "Unchecked", nullptr));
        actionPartially->setText(QCoreApplication::translate("MainWindow", "Partially", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuItems->setTitle(QCoreApplication::translate("MainWindow", "Items", nullptr));
        menuState->setTitle(QCoreApplication::translate("MainWindow", "State", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
