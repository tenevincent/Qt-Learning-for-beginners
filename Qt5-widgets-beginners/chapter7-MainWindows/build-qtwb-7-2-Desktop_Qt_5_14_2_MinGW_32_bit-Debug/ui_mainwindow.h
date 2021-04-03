/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionSelect_All;
    QAction *actionSelect_None;
    QAction *actionAnimals;
    QAction *actionShapes;
    QAction *actionFood;
    QAction *actionToolbar_top;
    QAction *actionToolbar_bottom;
    QAction *actionToolbar_left;
    QAction *actionToolbar_right;
    QAction *actionToolbar_floatable;
    QAction *actionToolbar_movable;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QListWidget *listWidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuInsert;
    QMenu *menuView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(563, 435);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/files/images/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon3);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/files/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/files/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon5);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/files/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/files/images/selectall.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_All->setIcon(icon7);
        actionSelect_None = new QAction(MainWindow);
        actionSelect_None->setObjectName(QString::fromUtf8("actionSelect_None"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/files/images/selectnone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_None->setIcon(icon8);
        actionAnimals = new QAction(MainWindow);
        actionAnimals->setObjectName(QString::fromUtf8("actionAnimals"));
        actionShapes = new QAction(MainWindow);
        actionShapes->setObjectName(QString::fromUtf8("actionShapes"));
        actionFood = new QAction(MainWindow);
        actionFood->setObjectName(QString::fromUtf8("actionFood"));
        actionToolbar_top = new QAction(MainWindow);
        actionToolbar_top->setObjectName(QString::fromUtf8("actionToolbar_top"));
        actionToolbar_bottom = new QAction(MainWindow);
        actionToolbar_bottom->setObjectName(QString::fromUtf8("actionToolbar_bottom"));
        actionToolbar_left = new QAction(MainWindow);
        actionToolbar_left->setObjectName(QString::fromUtf8("actionToolbar_left"));
        actionToolbar_right = new QAction(MainWindow);
        actionToolbar_right->setObjectName(QString::fromUtf8("actionToolbar_right"));
        actionToolbar_floatable = new QAction(MainWindow);
        actionToolbar_floatable->setObjectName(QString::fromUtf8("actionToolbar_floatable"));
        actionToolbar_floatable->setCheckable(true);
        actionToolbar_movable = new QAction(MainWindow);
        actionToolbar_movable->setObjectName(QString::fromUtf8("actionToolbar_movable"));
        actionToolbar_movable->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setLineWidth(1);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(5);
        splitter->setChildrenCollapsible(false);
        listWidget = new QListWidget(splitter);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(200, 16777215));
        splitter->addWidget(listWidget);
        plainTextEdit = new QPlainTextEdit(splitter);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        splitter->addWidget(plainTextEdit);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 563, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuInsert = new QMenu(menubar);
        menuInsert->setObjectName(QString::fromUtf8("menuInsert"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuInsert->menuAction());
        menubar->addAction(menuView->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuEdit->addAction(actionSelect_None);
        menuInsert->addAction(actionAnimals);
        menuInsert->addAction(actionShapes);
        menuInsert->addAction(actionFood);
        menuView->addAction(actionToolbar_top);
        menuView->addAction(actionToolbar_bottom);
        menuView->addAction(actionToolbar_left);
        menuView->addAction(actionToolbar_right);
        menuView->addSeparator();
        menuView->addAction(actionToolbar_floatable);
        menuView->addAction(actionToolbar_movable);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_As);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionPaste);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionSelect_All->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
        actionSelect_None->setText(QCoreApplication::translate("MainWindow", "Select None", nullptr));
        actionAnimals->setText(QCoreApplication::translate("MainWindow", "Animals", nullptr));
        actionShapes->setText(QCoreApplication::translate("MainWindow", "Shapes", nullptr));
        actionFood->setText(QCoreApplication::translate("MainWindow", "Food", nullptr));
        actionToolbar_top->setText(QCoreApplication::translate("MainWindow", "Toolbar top", nullptr));
        actionToolbar_bottom->setText(QCoreApplication::translate("MainWindow", "Toolbar bottom", nullptr));
        actionToolbar_left->setText(QCoreApplication::translate("MainWindow", "Toolbar left", nullptr));
        actionToolbar_right->setText(QCoreApplication::translate("MainWindow", "Toolbar right", nullptr));
        actionToolbar_floatable->setText(QCoreApplication::translate("MainWindow", "Toolbar floatable", nullptr));
        actionToolbar_movable->setText(QCoreApplication::translate("MainWindow", "Toolbar movable", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuInsert->setTitle(QCoreApplication::translate("MainWindow", "Insert", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
