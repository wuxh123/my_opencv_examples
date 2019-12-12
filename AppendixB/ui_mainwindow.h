/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
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
    QAction *openLenaJpg;
    QAction *openCustomeFile;
    QAction *restoreFile;
    QAction *exitSystem;
    QAction *copyright;
    QAction *about;
    QAction *CLEAR;
    QWidget *centralWidget;
    QLabel *label1;
    QLabel *label2;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(568, 365);
        openLenaJpg = new QAction(MainWindow);
        openLenaJpg->setObjectName(QString::fromUtf8("openLenaJpg"));
        openCustomeFile = new QAction(MainWindow);
        openCustomeFile->setObjectName(QString::fromUtf8("openCustomeFile"));
        restoreFile = new QAction(MainWindow);
        restoreFile->setObjectName(QString::fromUtf8("restoreFile"));
        exitSystem = new QAction(MainWindow);
        exitSystem->setObjectName(QString::fromUtf8("exitSystem"));
        copyright = new QAction(MainWindow);
        copyright->setObjectName(QString::fromUtf8("copyright"));
        about = new QAction(MainWindow);
        about->setObjectName(QString::fromUtf8("about"));
        CLEAR = new QAction(MainWindow);
        CLEAR->setObjectName(QString::fromUtf8("CLEAR"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(20, 20, 250, 250));
        label1->setFrameShape(QFrame::Box);
        label2 = new QLabel(centralWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(290, 20, 250, 250));
        label2->setFrameShape(QFrame::Box);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 280, 54, 12));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 280, 54, 12));
        label_2->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 568, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(openLenaJpg);
        menu->addAction(openCustomeFile);
        menu->addAction(restoreFile);
        menu->addAction(CLEAR);
        menu->addAction(exitSystem);
        menu_2->addAction(copyright);
        menu_2->addAction(about);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AppendixB", nullptr));
        openLenaJpg->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\265\213\350\257\225\346\226\207\344\273\266\357\274\210lena.jpg)", nullptr));
        openCustomeFile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\350\207\252\345\256\232\344\271\211\346\226\207\344\273\266", nullptr));
        restoreFile->setText(QCoreApplication::translate("MainWindow", "\350\277\230\345\216\237", nullptr));
        exitSystem->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        copyright->setText(QCoreApplication::translate("MainWindow", "\347\211\210\346\235\203", nullptr));
        about->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        CLEAR->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        label1->setText(QString());
        label2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\346\272\220\345\233\276\345\203\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\244\204\347\220\206\347\273\223\346\236\234", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
