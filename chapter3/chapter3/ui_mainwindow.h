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
    QAction *actionSobel;
    QAction *actionCanny;
    QAction *actionLaplacian;
    QAction *actionDx;
    QAction *actionDy;
    QAction *actionDx_dy;
    QAction *action1;
    QAction *action3;
    QAction *action5;
    QAction *action7;
    QAction *action1_2;
    QAction *action0_5;
    QAction *action2;
    QAction *actionDelta_1;
    QAction *actionDelta_0;
    QAction *actionDelta_2;
    QAction *actionAs_1;
    QAction *actionAs_3;
    QAction *actionAs_4;
    QAction *actionFalse;
    QAction *actionTrue;
    QAction *action50;
    QAction *action150;
    QAction *action200;
    QAction *action100;
    QAction *actionKsize_1;
    QAction *actionKsize_3;
    QAction *actionKsize_5;
    QAction *actionScale_1;
    QAction *actionScale_0_5;
    QAction *actionScale_3;
    QAction *actionDelta_4;
    QAction *actionDelta_50;
    QAction *actionDelta_100;
    QAction *actionX;
    QAction *actionY;
    QAction *actionSscale_1;
    QAction *actionSscale_0_5;
    QAction *actionSscale_2;
    QAction *actionSdelta_0;
    QAction *actionSdelta_50;
    QAction *actionSdelta_100;
    QAction *actionScharr;
    QAction *Clear;
    QWidget *centralWidget;
    QLabel *label1;
    QLabel *label2;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menuSobel;
    QMenu *menu_4;
    QMenu *menuKsize;
    QMenu *menuScale;
    QMenu *menuDelta;
    QMenu *menuCanny;
    QMenu *menuApertureSize;
    QMenu *menuL2gradient;
    QMenu *menuThreshold1;
    QMenu *menuThreshold2;
    QMenu *menuLaplacian;
    QMenu *menuKsize_2;
    QMenu *menuScale_2;
    QMenu *menuDelta_2;
    QMenu *menuScharr;
    QMenu *menu_5;
    QMenu *menuScale_3;
    QMenu *menuDelta_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(576, 370);
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
        actionSobel = new QAction(MainWindow);
        actionSobel->setObjectName(QString::fromUtf8("actionSobel"));
        actionCanny = new QAction(MainWindow);
        actionCanny->setObjectName(QString::fromUtf8("actionCanny"));
        actionLaplacian = new QAction(MainWindow);
        actionLaplacian->setObjectName(QString::fromUtf8("actionLaplacian"));
        actionDx = new QAction(MainWindow);
        actionDx->setObjectName(QString::fromUtf8("actionDx"));
        actionDy = new QAction(MainWindow);
        actionDy->setObjectName(QString::fromUtf8("actionDy"));
        actionDx_dy = new QAction(MainWindow);
        actionDx_dy->setObjectName(QString::fromUtf8("actionDx_dy"));
        action1 = new QAction(MainWindow);
        action1->setObjectName(QString::fromUtf8("action1"));
        action3 = new QAction(MainWindow);
        action3->setObjectName(QString::fromUtf8("action3"));
        action5 = new QAction(MainWindow);
        action5->setObjectName(QString::fromUtf8("action5"));
        action7 = new QAction(MainWindow);
        action7->setObjectName(QString::fromUtf8("action7"));
        action1_2 = new QAction(MainWindow);
        action1_2->setObjectName(QString::fromUtf8("action1_2"));
        action0_5 = new QAction(MainWindow);
        action0_5->setObjectName(QString::fromUtf8("action0_5"));
        action2 = new QAction(MainWindow);
        action2->setObjectName(QString::fromUtf8("action2"));
        actionDelta_1 = new QAction(MainWindow);
        actionDelta_1->setObjectName(QString::fromUtf8("actionDelta_1"));
        actionDelta_0 = new QAction(MainWindow);
        actionDelta_0->setObjectName(QString::fromUtf8("actionDelta_0"));
        actionDelta_2 = new QAction(MainWindow);
        actionDelta_2->setObjectName(QString::fromUtf8("actionDelta_2"));
        actionAs_1 = new QAction(MainWindow);
        actionAs_1->setObjectName(QString::fromUtf8("actionAs_1"));
        actionAs_3 = new QAction(MainWindow);
        actionAs_3->setObjectName(QString::fromUtf8("actionAs_3"));
        actionAs_4 = new QAction(MainWindow);
        actionAs_4->setObjectName(QString::fromUtf8("actionAs_4"));
        actionFalse = new QAction(MainWindow);
        actionFalse->setObjectName(QString::fromUtf8("actionFalse"));
        actionTrue = new QAction(MainWindow);
        actionTrue->setObjectName(QString::fromUtf8("actionTrue"));
        action50 = new QAction(MainWindow);
        action50->setObjectName(QString::fromUtf8("action50"));
        action150 = new QAction(MainWindow);
        action150->setObjectName(QString::fromUtf8("action150"));
        action200 = new QAction(MainWindow);
        action200->setObjectName(QString::fromUtf8("action200"));
        action100 = new QAction(MainWindow);
        action100->setObjectName(QString::fromUtf8("action100"));
        actionKsize_1 = new QAction(MainWindow);
        actionKsize_1->setObjectName(QString::fromUtf8("actionKsize_1"));
        actionKsize_3 = new QAction(MainWindow);
        actionKsize_3->setObjectName(QString::fromUtf8("actionKsize_3"));
        actionKsize_5 = new QAction(MainWindow);
        actionKsize_5->setObjectName(QString::fromUtf8("actionKsize_5"));
        actionScale_1 = new QAction(MainWindow);
        actionScale_1->setObjectName(QString::fromUtf8("actionScale_1"));
        actionScale_0_5 = new QAction(MainWindow);
        actionScale_0_5->setObjectName(QString::fromUtf8("actionScale_0_5"));
        actionScale_3 = new QAction(MainWindow);
        actionScale_3->setObjectName(QString::fromUtf8("actionScale_3"));
        actionDelta_4 = new QAction(MainWindow);
        actionDelta_4->setObjectName(QString::fromUtf8("actionDelta_4"));
        actionDelta_50 = new QAction(MainWindow);
        actionDelta_50->setObjectName(QString::fromUtf8("actionDelta_50"));
        actionDelta_100 = new QAction(MainWindow);
        actionDelta_100->setObjectName(QString::fromUtf8("actionDelta_100"));
        actionX = new QAction(MainWindow);
        actionX->setObjectName(QString::fromUtf8("actionX"));
        actionY = new QAction(MainWindow);
        actionY->setObjectName(QString::fromUtf8("actionY"));
        actionSscale_1 = new QAction(MainWindow);
        actionSscale_1->setObjectName(QString::fromUtf8("actionSscale_1"));
        actionSscale_0_5 = new QAction(MainWindow);
        actionSscale_0_5->setObjectName(QString::fromUtf8("actionSscale_0_5"));
        actionSscale_2 = new QAction(MainWindow);
        actionSscale_2->setObjectName(QString::fromUtf8("actionSscale_2"));
        actionSdelta_0 = new QAction(MainWindow);
        actionSdelta_0->setObjectName(QString::fromUtf8("actionSdelta_0"));
        actionSdelta_50 = new QAction(MainWindow);
        actionSdelta_50->setObjectName(QString::fromUtf8("actionSdelta_50"));
        actionSdelta_100 = new QAction(MainWindow);
        actionSdelta_100->setObjectName(QString::fromUtf8("actionSdelta_100"));
        actionScharr = new QAction(MainWindow);
        actionScharr->setObjectName(QString::fromUtf8("actionScharr"));
        Clear = new QAction(MainWindow);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(20, 30, 250, 250));
        label1->setFrameShape(QFrame::Box);
        label2 = new QLabel(centralWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(300, 30, 250, 250));
        label2->setFrameShape(QFrame::Box);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 290, 54, 12));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 290, 54, 12));
        label_2->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 576, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menuSobel = new QMenu(menuBar);
        menuSobel->setObjectName(QString::fromUtf8("menuSobel"));
        menu_4 = new QMenu(menuSobel);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menuKsize = new QMenu(menuSobel);
        menuKsize->setObjectName(QString::fromUtf8("menuKsize"));
        menuScale = new QMenu(menuSobel);
        menuScale->setObjectName(QString::fromUtf8("menuScale"));
        menuDelta = new QMenu(menuSobel);
        menuDelta->setObjectName(QString::fromUtf8("menuDelta"));
        menuCanny = new QMenu(menuBar);
        menuCanny->setObjectName(QString::fromUtf8("menuCanny"));
        menuApertureSize = new QMenu(menuCanny);
        menuApertureSize->setObjectName(QString::fromUtf8("menuApertureSize"));
        menuL2gradient = new QMenu(menuCanny);
        menuL2gradient->setObjectName(QString::fromUtf8("menuL2gradient"));
        menuThreshold1 = new QMenu(menuCanny);
        menuThreshold1->setObjectName(QString::fromUtf8("menuThreshold1"));
        menuThreshold2 = new QMenu(menuCanny);
        menuThreshold2->setObjectName(QString::fromUtf8("menuThreshold2"));
        menuLaplacian = new QMenu(menuBar);
        menuLaplacian->setObjectName(QString::fromUtf8("menuLaplacian"));
        menuKsize_2 = new QMenu(menuLaplacian);
        menuKsize_2->setObjectName(QString::fromUtf8("menuKsize_2"));
        menuScale_2 = new QMenu(menuLaplacian);
        menuScale_2->setObjectName(QString::fromUtf8("menuScale_2"));
        menuDelta_2 = new QMenu(menuLaplacian);
        menuDelta_2->setObjectName(QString::fromUtf8("menuDelta_2"));
        menuScharr = new QMenu(menuBar);
        menuScharr->setObjectName(QString::fromUtf8("menuScharr"));
        menu_5 = new QMenu(menuScharr);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        menuScale_3 = new QMenu(menuScharr);
        menuScale_3->setObjectName(QString::fromUtf8("menuScale_3"));
        menuDelta_3 = new QMenu(menuScharr);
        menuDelta_3->setObjectName(QString::fromUtf8("menuDelta_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menuSobel->menuAction());
        menuBar->addAction(menuCanny->menuAction());
        menuBar->addAction(menuLaplacian->menuAction());
        menuBar->addAction(menuScharr->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(openLenaJpg);
        menu->addAction(openCustomeFile);
        menu->addAction(restoreFile);
        menu->addAction(Clear);
        menu->addAction(exitSystem);
        menu_2->addAction(copyright);
        menu_2->addAction(about);
        menu_3->addAction(actionSobel);
        menu_3->addAction(actionCanny);
        menu_3->addAction(actionLaplacian);
        menu_3->addAction(actionScharr);
        menuSobel->addAction(menu_4->menuAction());
        menuSobel->addAction(menuKsize->menuAction());
        menuSobel->addAction(menuScale->menuAction());
        menuSobel->addAction(menuDelta->menuAction());
        menu_4->addAction(actionDx);
        menu_4->addAction(actionDy);
        menu_4->addAction(actionDx_dy);
        menuKsize->addSeparator();
        menuKsize->addAction(action1);
        menuKsize->addAction(action3);
        menuKsize->addAction(action5);
        menuKsize->addAction(action7);
        menuScale->addAction(action1_2);
        menuScale->addAction(action0_5);
        menuScale->addAction(action2);
        menuDelta->addAction(actionDelta_0);
        menuDelta->addAction(actionDelta_1);
        menuDelta->addAction(actionDelta_2);
        menuCanny->addAction(menuThreshold1->menuAction());
        menuCanny->addAction(menuThreshold2->menuAction());
        menuCanny->addAction(menuApertureSize->menuAction());
        menuCanny->addAction(menuL2gradient->menuAction());
        menuApertureSize->addAction(actionAs_4);
        menuApertureSize->addAction(actionAs_1);
        menuApertureSize->addAction(actionAs_3);
        menuL2gradient->addAction(actionFalse);
        menuL2gradient->addAction(actionTrue);
        menuThreshold1->addAction(action50);
        menuThreshold1->addAction(action100);
        menuThreshold2->addAction(action150);
        menuThreshold2->addAction(action200);
        menuLaplacian->addAction(menuKsize_2->menuAction());
        menuLaplacian->addAction(menuScale_2->menuAction());
        menuLaplacian->addAction(menuDelta_2->menuAction());
        menuKsize_2->addAction(actionKsize_1);
        menuKsize_2->addAction(actionKsize_3);
        menuKsize_2->addAction(actionKsize_5);
        menuScale_2->addAction(actionScale_1);
        menuScale_2->addAction(actionScale_0_5);
        menuScale_2->addAction(actionScale_3);
        menuDelta_2->addAction(actionDelta_4);
        menuDelta_2->addAction(actionDelta_50);
        menuDelta_2->addAction(actionDelta_100);
        menuScharr->addAction(menu_5->menuAction());
        menuScharr->addAction(menuScale_3->menuAction());
        menuScharr->addAction(menuDelta_3->menuAction());
        menu_5->addAction(actionX);
        menu_5->addAction(actionY);
        menuScale_3->addAction(actionSscale_1);
        menuScale_3->addAction(actionSscale_0_5);
        menuScale_3->addAction(actionSscale_2);
        menuDelta_3->addAction(actionSdelta_0);
        menuDelta_3->addAction(actionSdelta_50);
        menuDelta_3->addAction(actionSdelta_100);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "chapter3", nullptr));
        openLenaJpg->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\265\213\350\257\225\346\226\207\344\273\266\357\274\210lena.jpg)", nullptr));
        openCustomeFile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\350\207\252\345\256\232\344\271\211\346\226\207\344\273\266", nullptr));
        restoreFile->setText(QCoreApplication::translate("MainWindow", "\350\277\230\345\216\237", nullptr));
        exitSystem->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        copyright->setText(QCoreApplication::translate("MainWindow", "\347\211\210\346\235\203", nullptr));
        about->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        actionSobel->setText(QCoreApplication::translate("MainWindow", "Sobel", nullptr));
        actionCanny->setText(QCoreApplication::translate("MainWindow", "Canny", nullptr));
        actionLaplacian->setText(QCoreApplication::translate("MainWindow", "Laplacian", nullptr));
        actionDx->setText(QCoreApplication::translate("MainWindow", "dx", nullptr));
        actionDy->setText(QCoreApplication::translate("MainWindow", "dy", nullptr));
        actionDx_dy->setText(QCoreApplication::translate("MainWindow", "dx&&dy", nullptr));
        action1->setText(QCoreApplication::translate("MainWindow", "size=1", nullptr));
        action3->setText(QCoreApplication::translate("MainWindow", "size=3", nullptr));
        action5->setText(QCoreApplication::translate("MainWindow", "size=5", nullptr));
        action7->setText(QCoreApplication::translate("MainWindow", "size=7", nullptr));
        action1_2->setText(QCoreApplication::translate("MainWindow", "scale=1", nullptr));
        action0_5->setText(QCoreApplication::translate("MainWindow", "scale=0.5", nullptr));
        action2->setText(QCoreApplication::translate("MainWindow", "scale=2", nullptr));
        actionDelta_1->setText(QCoreApplication::translate("MainWindow", "delta=50", nullptr));
        actionDelta_0->setText(QCoreApplication::translate("MainWindow", "delta=0", nullptr));
        actionDelta_2->setText(QCoreApplication::translate("MainWindow", "delta=100", nullptr));
        actionAs_1->setText(QCoreApplication::translate("MainWindow", "as=5", nullptr));
        actionAs_3->setText(QCoreApplication::translate("MainWindow", "as=7", nullptr));
        actionAs_4->setText(QCoreApplication::translate("MainWindow", "as=3", nullptr));
        actionFalse->setText(QCoreApplication::translate("MainWindow", "false", nullptr));
        actionTrue->setText(QCoreApplication::translate("MainWindow", "true", nullptr));
        action50->setText(QCoreApplication::translate("MainWindow", "t1=50", nullptr));
        action150->setText(QCoreApplication::translate("MainWindow", "t2=150", nullptr));
        action200->setText(QCoreApplication::translate("MainWindow", "t2=200", nullptr));
        action100->setText(QCoreApplication::translate("MainWindow", "t1=100", nullptr));
        actionKsize_1->setText(QCoreApplication::translate("MainWindow", "ksize=1", nullptr));
        actionKsize_3->setText(QCoreApplication::translate("MainWindow", "ksize=3", nullptr));
        actionKsize_5->setText(QCoreApplication::translate("MainWindow", "ksize=5", nullptr));
        actionScale_1->setText(QCoreApplication::translate("MainWindow", "lscale=1", nullptr));
        actionScale_0_5->setText(QCoreApplication::translate("MainWindow", "lscale=0.5", nullptr));
        actionScale_3->setText(QCoreApplication::translate("MainWindow", "lscale=2", nullptr));
        actionDelta_4->setText(QCoreApplication::translate("MainWindow", "ldelta=0", nullptr));
        actionDelta_50->setText(QCoreApplication::translate("MainWindow", "ldelta=50", nullptr));
        actionDelta_100->setText(QCoreApplication::translate("MainWindow", "ldelta=100", nullptr));
        actionX->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        actionY->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        actionSscale_1->setText(QCoreApplication::translate("MainWindow", "sscale=1", nullptr));
        actionSscale_0_5->setText(QCoreApplication::translate("MainWindow", "sscale=0.5", nullptr));
        actionSscale_2->setText(QCoreApplication::translate("MainWindow", "sscale=2", nullptr));
        actionSdelta_0->setText(QCoreApplication::translate("MainWindow", "sdelta=0", nullptr));
        actionSdelta_50->setText(QCoreApplication::translate("MainWindow", "sdelta=50", nullptr));
        actionSdelta_100->setText(QCoreApplication::translate("MainWindow", "sdelta=100", nullptr));
        actionScharr->setText(QCoreApplication::translate("MainWindow", "Scharr", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        label1->setText(QString());
        label2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\346\272\220\345\233\276\345\203\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\345\233\276\345\203\217", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\350\276\271\347\274\230\347\211\271\345\276\201", nullptr));
        menuSobel->setTitle(QCoreApplication::translate("MainWindow", "Sobel", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\346\226\271\345\220\221", nullptr));
        menuKsize->setTitle(QCoreApplication::translate("MainWindow", "Ksize\345\244\247\345\260\217", nullptr));
        menuScale->setTitle(QCoreApplication::translate("MainWindow", "scale\347\274\251\346\224\276\345\233\240\345\255\220", nullptr));
        menuDelta->setTitle(QCoreApplication::translate("MainWindow", "delta\345\200\274", nullptr));
        menuCanny->setTitle(QCoreApplication::translate("MainWindow", "Canny", nullptr));
        menuApertureSize->setTitle(QCoreApplication::translate("MainWindow", "apertureSize", nullptr));
        menuL2gradient->setTitle(QCoreApplication::translate("MainWindow", "L2gradient", nullptr));
        menuThreshold1->setTitle(QCoreApplication::translate("MainWindow", "threshold1", nullptr));
        menuThreshold2->setTitle(QCoreApplication::translate("MainWindow", "threshold2", nullptr));
        menuLaplacian->setTitle(QCoreApplication::translate("MainWindow", "Laplacian", nullptr));
        menuKsize_2->setTitle(QCoreApplication::translate("MainWindow", "ksize", nullptr));
        menuScale_2->setTitle(QCoreApplication::translate("MainWindow", "scale", nullptr));
        menuDelta_2->setTitle(QCoreApplication::translate("MainWindow", "delta", nullptr));
        menuScharr->setTitle(QCoreApplication::translate("MainWindow", "Scharr", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\346\226\271\345\220\221", nullptr));
        menuScale_3->setTitle(QCoreApplication::translate("MainWindow", "scale", nullptr));
        menuDelta_3->setTitle(QCoreApplication::translate("MainWindow", "delta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
