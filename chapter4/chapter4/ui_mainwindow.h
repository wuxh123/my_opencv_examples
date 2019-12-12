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
    QAction *actionTest;
    QAction *blackAndWhite;
    QAction *myGray;
    QAction *myColor;
    QAction *encryp;
    QAction *deCryp;
    QAction *Sencryp;
    QAction *Sdecryp;
    QWidget *centralWidget;
    QLabel *label1;
    QLabel *label2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(650, 380);
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
        actionTest = new QAction(MainWindow);
        actionTest->setObjectName(QString::fromUtf8("actionTest"));
        blackAndWhite = new QAction(MainWindow);
        blackAndWhite->setObjectName(QString::fromUtf8("blackAndWhite"));
        myGray = new QAction(MainWindow);
        myGray->setObjectName(QString::fromUtf8("myGray"));
        myColor = new QAction(MainWindow);
        myColor->setObjectName(QString::fromUtf8("myColor"));
        encryp = new QAction(MainWindow);
        encryp->setObjectName(QString::fromUtf8("encryp"));
        deCryp = new QAction(MainWindow);
        deCryp->setObjectName(QString::fromUtf8("deCryp"));
        Sencryp = new QAction(MainWindow);
        Sencryp->setObjectName(QString::fromUtf8("Sencryp"));
        Sdecryp = new QAction(MainWindow);
        Sdecryp->setObjectName(QString::fromUtf8("Sdecryp"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(20, 40, 271, 271));
        label1->setFrameShape(QFrame::Box);
        label2 = new QLabel(centralWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(330, 40, 271, 271));
        label2->setFrameShape(QFrame::Box);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 650, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(openLenaJpg);
        menu->addAction(openCustomeFile);
        menu->addAction(restoreFile);
        menu->addAction(exitSystem);
        menu_2->addAction(copyright);
        menu_2->addAction(about);
        menu_2->addAction(actionTest);
        menu_3->addAction(blackAndWhite);
        menu_3->addAction(myGray);
        menu_3->addAction(myColor);
        menu_4->addAction(encryp);
        menu_4->addAction(deCryp);
        menu_5->addAction(Sencryp);
        menu_5->addAction(Sdecryp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "chapter4", nullptr));
        openLenaJpg->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\265\213\350\257\225\346\226\207\344\273\266\357\274\210lena.jpg)", nullptr));
        openCustomeFile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\350\207\252\345\256\232\344\271\211\346\226\207\344\273\266", nullptr));
        restoreFile->setText(QCoreApplication::translate("MainWindow", "\350\277\230\345\216\237", nullptr));
        exitSystem->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        copyright->setText(QCoreApplication::translate("MainWindow", "\347\211\210\346\235\203", nullptr));
        about->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        actionTest->setText(QCoreApplication::translate("MainWindow", "test", nullptr));
        blackAndWhite->setText(QCoreApplication::translate("MainWindow", "\351\273\221\347\231\275", nullptr));
        myGray->setText(QCoreApplication::translate("MainWindow", "\347\201\260\345\272\246", nullptr));
        myColor->setText(QCoreApplication::translate("MainWindow", "\345\275\251\350\211\262", nullptr));
        encryp->setText(QCoreApplication::translate("MainWindow", "\345\212\240\345\257\206", nullptr));
        deCryp->setText(QCoreApplication::translate("MainWindow", "\350\247\243\345\257\206", nullptr));
        Sencryp->setText(QCoreApplication::translate("MainWindow", "\345\212\240\345\257\206", nullptr));
        Sdecryp->setText(QCoreApplication::translate("MainWindow", "\350\247\243\345\257\206", nullptr));
        label1->setText(QString());
        label2->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\346\267\267\346\262\214\345\233\276\345\203\217", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\345\274\202\346\210\226", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\347\275\256\344\271\261", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
