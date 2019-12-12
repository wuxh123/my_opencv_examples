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
    QAction *openTestJpg;
    QAction *openCustomeFile;
    QAction *restoreFile;
    QAction *exitSystem;
    QAction *aboutMe;
    QAction *contacctUs;
    QAction *showImage;
    QAction *showMessage;
    QAction *ImageAndMessage;
    QAction *horizenFlip;
    QAction *VerticalFlip;
    QAction *VerticalAndHorizen;
    QAction *erode;
    QAction *dialate;
    QAction *open;
    QAction *close;
    QAction *topHat;
    QAction *blackHat;
    QAction *actionSobel;
    QAction *actionCanny;
    QAction *actionLaplacian;
    QAction *actionScharr;
    QAction *gray;
    QAction *invertColor;
    QAction *rSpace;
    QAction *gSpace;
    QAction *bSpace;
    QAction *binValue;
    QAction *action_2;
    QAction *actionRtong;
    QAction *Rchannel;
    QAction *Gchannel;
    QAction *Bchannel;
    QAction *Clear;
    QWidget *centralWidget;
    QLabel *label1;
    QLabel *label2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_7;
    QMenu *menu_4;
    QMenu *menuSplit;
    QMenu *menuMerge;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(545, 415);
        openTestJpg = new QAction(MainWindow);
        openTestJpg->setObjectName(QString::fromUtf8("openTestJpg"));
        openCustomeFile = new QAction(MainWindow);
        openCustomeFile->setObjectName(QString::fromUtf8("openCustomeFile"));
        restoreFile = new QAction(MainWindow);
        restoreFile->setObjectName(QString::fromUtf8("restoreFile"));
        exitSystem = new QAction(MainWindow);
        exitSystem->setObjectName(QString::fromUtf8("exitSystem"));
        aboutMe = new QAction(MainWindow);
        aboutMe->setObjectName(QString::fromUtf8("aboutMe"));
        contacctUs = new QAction(MainWindow);
        contacctUs->setObjectName(QString::fromUtf8("contacctUs"));
        showImage = new QAction(MainWindow);
        showImage->setObjectName(QString::fromUtf8("showImage"));
        showMessage = new QAction(MainWindow);
        showMessage->setObjectName(QString::fromUtf8("showMessage"));
        ImageAndMessage = new QAction(MainWindow);
        ImageAndMessage->setObjectName(QString::fromUtf8("ImageAndMessage"));
        horizenFlip = new QAction(MainWindow);
        horizenFlip->setObjectName(QString::fromUtf8("horizenFlip"));
        VerticalFlip = new QAction(MainWindow);
        VerticalFlip->setObjectName(QString::fromUtf8("VerticalFlip"));
        VerticalAndHorizen = new QAction(MainWindow);
        VerticalAndHorizen->setObjectName(QString::fromUtf8("VerticalAndHorizen"));
        erode = new QAction(MainWindow);
        erode->setObjectName(QString::fromUtf8("erode"));
        dialate = new QAction(MainWindow);
        dialate->setObjectName(QString::fromUtf8("dialate"));
        open = new QAction(MainWindow);
        open->setObjectName(QString::fromUtf8("open"));
        close = new QAction(MainWindow);
        close->setObjectName(QString::fromUtf8("close"));
        topHat = new QAction(MainWindow);
        topHat->setObjectName(QString::fromUtf8("topHat"));
        blackHat = new QAction(MainWindow);
        blackHat->setObjectName(QString::fromUtf8("blackHat"));
        actionSobel = new QAction(MainWindow);
        actionSobel->setObjectName(QString::fromUtf8("actionSobel"));
        actionCanny = new QAction(MainWindow);
        actionCanny->setObjectName(QString::fromUtf8("actionCanny"));
        actionLaplacian = new QAction(MainWindow);
        actionLaplacian->setObjectName(QString::fromUtf8("actionLaplacian"));
        actionScharr = new QAction(MainWindow);
        actionScharr->setObjectName(QString::fromUtf8("actionScharr"));
        gray = new QAction(MainWindow);
        gray->setObjectName(QString::fromUtf8("gray"));
        invertColor = new QAction(MainWindow);
        invertColor->setObjectName(QString::fromUtf8("invertColor"));
        rSpace = new QAction(MainWindow);
        rSpace->setObjectName(QString::fromUtf8("rSpace"));
        gSpace = new QAction(MainWindow);
        gSpace->setObjectName(QString::fromUtf8("gSpace"));
        bSpace = new QAction(MainWindow);
        bSpace->setObjectName(QString::fromUtf8("bSpace"));
        binValue = new QAction(MainWindow);
        binValue->setObjectName(QString::fromUtf8("binValue"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        actionRtong = new QAction(MainWindow);
        actionRtong->setObjectName(QString::fromUtf8("actionRtong"));
        Rchannel = new QAction(MainWindow);
        Rchannel->setObjectName(QString::fromUtf8("Rchannel"));
        Gchannel = new QAction(MainWindow);
        Gchannel->setObjectName(QString::fromUtf8("Gchannel"));
        Bchannel = new QAction(MainWindow);
        Bchannel->setObjectName(QString::fromUtf8("Bchannel"));
        Clear = new QAction(MainWindow);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(50, 40, 201, 271));
        label1->setFrameShape(QFrame::Box);
        label2 = new QLabel(centralWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(300, 40, 201, 271));
        label2->setFrameShape(QFrame::Box);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 545, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_7 = new QMenu(menuBar);
        menu_7->setObjectName(QString::fromUtf8("menu_7"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menuSplit = new QMenu(menu_4);
        menuSplit->setObjectName(QString::fromUtf8("menuSplit"));
        menuMerge = new QMenu(menu_4);
        menuMerge->setObjectName(QString::fromUtf8("menuMerge"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_7->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(openTestJpg);
        menu->addAction(openCustomeFile);
        menu->addAction(restoreFile);
        menu->addAction(Clear);
        menu->addAction(exitSystem);
        menu_2->addAction(aboutMe);
        menu_2->addAction(contacctUs);
        menu_3->addAction(showImage);
        menu_3->addAction(showMessage);
        menu_3->addAction(ImageAndMessage);
        menu_7->addAction(gray);
        menu_7->addAction(binValue);
        menu_7->addAction(invertColor);
        menu_4->addAction(menuSplit->menuAction());
        menu_4->addAction(menuMerge->menuAction());
        menuSplit->addAction(Rchannel);
        menuSplit->addAction(Gchannel);
        menuSplit->addAction(Bchannel);
        menuMerge->addAction(rSpace);
        menuMerge->addAction(gSpace);
        menuMerge->addAction(bSpace);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "chapter5", nullptr));
        openTestJpg->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\265\213\350\257\225\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        openTestJpg->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\265\213\350\257\225\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        openCustomeFile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\350\207\252\345\256\232\344\271\211\346\226\207\344\273\266", nullptr));
        restoreFile->setText(QCoreApplication::translate("MainWindow", "\350\277\230\345\216\237", nullptr));
        exitSystem->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        aboutMe->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        contacctUs->setText(QCoreApplication::translate("MainWindow", "\350\201\224\347\263\273\346\210\221\344\273\254", nullptr));
        showImage->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217\346\230\276\347\244\272", nullptr));
        showMessage->setText(QCoreApplication::translate("MainWindow", "\345\257\271\350\257\235\346\241\206\346\230\276\347\244\272", nullptr));
        ImageAndMessage->setText(QCoreApplication::translate("MainWindow", "\345\233\276\345\203\217&\344\277\241\346\201\257", nullptr));
        horizenFlip->setText(QCoreApplication::translate("MainWindow", "\346\260\264\345\271\263", nullptr));
        VerticalFlip->setText(QCoreApplication::translate("MainWindow", "\345\236\202\347\233\264", nullptr));
        VerticalAndHorizen->setText(QCoreApplication::translate("MainWindow", "\346\260\264\345\271\263&\345\236\202\347\233\264", nullptr));
        erode->setText(QCoreApplication::translate("MainWindow", "\350\205\220\350\232\200", nullptr));
        dialate->setText(QCoreApplication::translate("MainWindow", "\350\206\250\350\203\200", nullptr));
        open->setText(QCoreApplication::translate("MainWindow", "\345\274\200\350\277\220\347\256\227", nullptr));
        close->setText(QCoreApplication::translate("MainWindow", "\351\227\255\350\277\220\347\256\227", nullptr));
        topHat->setText(QCoreApplication::translate("MainWindow", "\351\241\266\345\270\275", nullptr));
        blackHat->setText(QCoreApplication::translate("MainWindow", "\351\273\221\345\270\275", nullptr));
        actionSobel->setText(QCoreApplication::translate("MainWindow", "Sobel", nullptr));
        actionCanny->setText(QCoreApplication::translate("MainWindow", "Canny", nullptr));
        actionLaplacian->setText(QCoreApplication::translate("MainWindow", "Laplacian", nullptr));
        actionScharr->setText(QCoreApplication::translate("MainWindow", "Scharr", nullptr));
        gray->setText(QCoreApplication::translate("MainWindow", "\347\201\260\345\272\246\345\214\226", nullptr));
        invertColor->setText(QCoreApplication::translate("MainWindow", "\345\217\215\350\211\262", nullptr));
        rSpace->setText(QCoreApplication::translate("MainWindow", "R\347\251\272\351\227\264", nullptr));
        gSpace->setText(QCoreApplication::translate("MainWindow", "G\347\251\272\351\227\264", nullptr));
        bSpace->setText(QCoreApplication::translate("MainWindow", "B\347\251\272\351\227\264", nullptr));
        binValue->setText(QCoreApplication::translate("MainWindow", "\344\272\214\345\200\274\345\214\226", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\345\220\210\345\271\266", nullptr));
        actionRtong->setText(QCoreApplication::translate("MainWindow", "rtong", nullptr));
        Rchannel->setText(QCoreApplication::translate("MainWindow", "R\351\200\232\351\201\223", nullptr));
        Gchannel->setText(QCoreApplication::translate("MainWindow", "G\351\200\232\351\201\223", nullptr));
        Bchannel->setText(QCoreApplication::translate("MainWindow", "B\351\200\232\351\201\223", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        label1->setText(QString());
        label2->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\345\255\227\350\257\206\345\210\253", nullptr));
        menu_7->setTitle(QCoreApplication::translate("MainWindow", "\351\242\234\350\211\262\345\244\204\347\220\206", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\351\200\232\351\201\223\345\244\204\347\220\206", nullptr));
        menuSplit->setTitle(QCoreApplication::translate("MainWindow", "split\345\207\275\346\225\260", nullptr));
        menuMerge->setTitle(QCoreApplication::translate("MainWindow", "merge\345\207\275\346\225\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
