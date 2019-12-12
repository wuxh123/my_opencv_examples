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
    QAction *HistEqualize;
    QAction *contrast;
    QAction *light;
    QAction *filter2D1;
    QAction *filter2D2;
    QAction *filter2D3;
    QAction *filter2D4;
    QAction *filter2D5;
    QAction *filter2D6;
    QAction *contrastAndLight;
    QAction *actionCV_TM_SQDIFF;
    QAction *actionCV_TM_SQDIFF_NORMED;
    QAction *actionCV_TM_CCORR;
    QAction *actionCV_TM_CCORR_NORMED;
    QAction *actionCV_TM_CCOEFF;
    QAction *actionCV_TM_CCOEFF_NORMED;
    QAction *resizeSmall;
    QAction *resizeBig;
    QAction *mirrorHorizen;
    QAction *mirrorVertical;
    QAction *mirrorHorizenAndVertical;
    QAction *action_7;
    QAction *wrapAffine;
    QAction *rotateWrapAffine;
    QAction *remapX;
    QAction *remapY;
    QAction *remapSmall;
    QAction *remapRotate;
    QAction *clockwise;
    QAction *clockwiseResize;
    QAction *UNclockwise;
    QAction *zeroRotateResize;
    QAction *actionTHRESH_BINARY;
    QAction *actionTHRESH_BINARY_INV;
    QAction *actionTHRESH_BINARY_3;
    QAction *actionTHRESH_BINARY_INV_3;
    QAction *actionTHRESH_TRUNC;
    QAction *actionTHRESH_TRUNC_2;
    QAction *actionTHRESH_TOZERO;
    QAction *actionTHRESH_TOZERO_2;
    QAction *actionTHRESH_TOZERO_INV;
    QAction *actionTHRESH_TOZERO_INV_2;
    QAction *actionADAPTIVE_THRESH_MEAN_C;
    QAction *actionADAPTIVE_THRESH_GAUSSIAN_C;
    QAction *actionADAPTIVE_THRESH_GAUSSIAN_C_2;
    QAction *actionADAPTIVE_THRESH_MEAN_C_2;
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *remapDiagonal;
    QAction *remapCopy;
    QAction *actionTHRESH_BINARY_2;
    QAction *actionTHRESH_BINARY_INV_2;
    QAction *actionTHRESH_TRUNC_3;
    QAction *actionTHRESH_TOZERO_3;
    QAction *actionTHRESH_TOZERO_INV_3;
    QAction *Clear;
    QWidget *centralWidget;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_10;
    QMenu *menu_11;
    QMenu *menu_12;
    QMenu *menuThreshold;
    QMenu *menuTHRESH_OTSU;
    QMenu *menuAdaptiveThreshold;
    QMenu *menuTHRESH_BINARY;
    QMenu *menuTHRESH_BINARY_INV;
    QMenu *menuTHRESH_TRIANGLE;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(594, 392);
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
        HistEqualize = new QAction(MainWindow);
        HistEqualize->setObjectName(QString::fromUtf8("HistEqualize"));
        contrast = new QAction(MainWindow);
        contrast->setObjectName(QString::fromUtf8("contrast"));
        light = new QAction(MainWindow);
        light->setObjectName(QString::fromUtf8("light"));
        filter2D1 = new QAction(MainWindow);
        filter2D1->setObjectName(QString::fromUtf8("filter2D1"));
        filter2D2 = new QAction(MainWindow);
        filter2D2->setObjectName(QString::fromUtf8("filter2D2"));
        filter2D3 = new QAction(MainWindow);
        filter2D3->setObjectName(QString::fromUtf8("filter2D3"));
        filter2D4 = new QAction(MainWindow);
        filter2D4->setObjectName(QString::fromUtf8("filter2D4"));
        filter2D5 = new QAction(MainWindow);
        filter2D5->setObjectName(QString::fromUtf8("filter2D5"));
        filter2D6 = new QAction(MainWindow);
        filter2D6->setObjectName(QString::fromUtf8("filter2D6"));
        contrastAndLight = new QAction(MainWindow);
        contrastAndLight->setObjectName(QString::fromUtf8("contrastAndLight"));
        actionCV_TM_SQDIFF = new QAction(MainWindow);
        actionCV_TM_SQDIFF->setObjectName(QString::fromUtf8("actionCV_TM_SQDIFF"));
        actionCV_TM_SQDIFF_NORMED = new QAction(MainWindow);
        actionCV_TM_SQDIFF_NORMED->setObjectName(QString::fromUtf8("actionCV_TM_SQDIFF_NORMED"));
        actionCV_TM_CCORR = new QAction(MainWindow);
        actionCV_TM_CCORR->setObjectName(QString::fromUtf8("actionCV_TM_CCORR"));
        actionCV_TM_CCORR_NORMED = new QAction(MainWindow);
        actionCV_TM_CCORR_NORMED->setObjectName(QString::fromUtf8("actionCV_TM_CCORR_NORMED"));
        actionCV_TM_CCOEFF = new QAction(MainWindow);
        actionCV_TM_CCOEFF->setObjectName(QString::fromUtf8("actionCV_TM_CCOEFF"));
        actionCV_TM_CCOEFF_NORMED = new QAction(MainWindow);
        actionCV_TM_CCOEFF_NORMED->setObjectName(QString::fromUtf8("actionCV_TM_CCOEFF_NORMED"));
        resizeSmall = new QAction(MainWindow);
        resizeSmall->setObjectName(QString::fromUtf8("resizeSmall"));
        resizeBig = new QAction(MainWindow);
        resizeBig->setObjectName(QString::fromUtf8("resizeBig"));
        mirrorHorizen = new QAction(MainWindow);
        mirrorHorizen->setObjectName(QString::fromUtf8("mirrorHorizen"));
        mirrorVertical = new QAction(MainWindow);
        mirrorVertical->setObjectName(QString::fromUtf8("mirrorVertical"));
        mirrorHorizenAndVertical = new QAction(MainWindow);
        mirrorHorizenAndVertical->setObjectName(QString::fromUtf8("mirrorHorizenAndVertical"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        wrapAffine = new QAction(MainWindow);
        wrapAffine->setObjectName(QString::fromUtf8("wrapAffine"));
        rotateWrapAffine = new QAction(MainWindow);
        rotateWrapAffine->setObjectName(QString::fromUtf8("rotateWrapAffine"));
        remapX = new QAction(MainWindow);
        remapX->setObjectName(QString::fromUtf8("remapX"));
        remapY = new QAction(MainWindow);
        remapY->setObjectName(QString::fromUtf8("remapY"));
        remapSmall = new QAction(MainWindow);
        remapSmall->setObjectName(QString::fromUtf8("remapSmall"));
        remapRotate = new QAction(MainWindow);
        remapRotate->setObjectName(QString::fromUtf8("remapRotate"));
        clockwise = new QAction(MainWindow);
        clockwise->setObjectName(QString::fromUtf8("clockwise"));
        clockwiseResize = new QAction(MainWindow);
        clockwiseResize->setObjectName(QString::fromUtf8("clockwiseResize"));
        UNclockwise = new QAction(MainWindow);
        UNclockwise->setObjectName(QString::fromUtf8("UNclockwise"));
        zeroRotateResize = new QAction(MainWindow);
        zeroRotateResize->setObjectName(QString::fromUtf8("zeroRotateResize"));
        actionTHRESH_BINARY = new QAction(MainWindow);
        actionTHRESH_BINARY->setObjectName(QString::fromUtf8("actionTHRESH_BINARY"));
        actionTHRESH_BINARY_INV = new QAction(MainWindow);
        actionTHRESH_BINARY_INV->setObjectName(QString::fromUtf8("actionTHRESH_BINARY_INV"));
        actionTHRESH_BINARY_3 = new QAction(MainWindow);
        actionTHRESH_BINARY_3->setObjectName(QString::fromUtf8("actionTHRESH_BINARY_3"));
        actionTHRESH_BINARY_INV_3 = new QAction(MainWindow);
        actionTHRESH_BINARY_INV_3->setObjectName(QString::fromUtf8("actionTHRESH_BINARY_INV_3"));
        actionTHRESH_TRUNC = new QAction(MainWindow);
        actionTHRESH_TRUNC->setObjectName(QString::fromUtf8("actionTHRESH_TRUNC"));
        actionTHRESH_TRUNC_2 = new QAction(MainWindow);
        actionTHRESH_TRUNC_2->setObjectName(QString::fromUtf8("actionTHRESH_TRUNC_2"));
        actionTHRESH_TOZERO = new QAction(MainWindow);
        actionTHRESH_TOZERO->setObjectName(QString::fromUtf8("actionTHRESH_TOZERO"));
        actionTHRESH_TOZERO_2 = new QAction(MainWindow);
        actionTHRESH_TOZERO_2->setObjectName(QString::fromUtf8("actionTHRESH_TOZERO_2"));
        actionTHRESH_TOZERO_INV = new QAction(MainWindow);
        actionTHRESH_TOZERO_INV->setObjectName(QString::fromUtf8("actionTHRESH_TOZERO_INV"));
        actionTHRESH_TOZERO_INV_2 = new QAction(MainWindow);
        actionTHRESH_TOZERO_INV_2->setObjectName(QString::fromUtf8("actionTHRESH_TOZERO_INV_2"));
        actionADAPTIVE_THRESH_MEAN_C = new QAction(MainWindow);
        actionADAPTIVE_THRESH_MEAN_C->setObjectName(QString::fromUtf8("actionADAPTIVE_THRESH_MEAN_C"));
        actionADAPTIVE_THRESH_GAUSSIAN_C = new QAction(MainWindow);
        actionADAPTIVE_THRESH_GAUSSIAN_C->setObjectName(QString::fromUtf8("actionADAPTIVE_THRESH_GAUSSIAN_C"));
        actionADAPTIVE_THRESH_GAUSSIAN_C_2 = new QAction(MainWindow);
        actionADAPTIVE_THRESH_GAUSSIAN_C_2->setObjectName(QString::fromUtf8("actionADAPTIVE_THRESH_GAUSSIAN_C_2"));
        actionADAPTIVE_THRESH_MEAN_C_2 = new QAction(MainWindow);
        actionADAPTIVE_THRESH_MEAN_C_2->setObjectName(QString::fromUtf8("actionADAPTIVE_THRESH_MEAN_C_2"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        remapDiagonal = new QAction(MainWindow);
        remapDiagonal->setObjectName(QString::fromUtf8("remapDiagonal"));
        remapCopy = new QAction(MainWindow);
        remapCopy->setObjectName(QString::fromUtf8("remapCopy"));
        actionTHRESH_BINARY_2 = new QAction(MainWindow);
        actionTHRESH_BINARY_2->setObjectName(QString::fromUtf8("actionTHRESH_BINARY_2"));
        actionTHRESH_BINARY_INV_2 = new QAction(MainWindow);
        actionTHRESH_BINARY_INV_2->setObjectName(QString::fromUtf8("actionTHRESH_BINARY_INV_2"));
        actionTHRESH_TRUNC_3 = new QAction(MainWindow);
        actionTHRESH_TRUNC_3->setObjectName(QString::fromUtf8("actionTHRESH_TRUNC_3"));
        actionTHRESH_TOZERO_3 = new QAction(MainWindow);
        actionTHRESH_TOZERO_3->setObjectName(QString::fromUtf8("actionTHRESH_TOZERO_3"));
        actionTHRESH_TOZERO_INV_3 = new QAction(MainWindow);
        actionTHRESH_TOZERO_INV_3->setObjectName(QString::fromUtf8("actionTHRESH_TOZERO_INV_3"));
        Clear = new QAction(MainWindow);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(30, 40, 250, 250));
        label1->setFrameShape(QFrame::Box);
        label2 = new QLabel(centralWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(310, 40, 250, 250));
        label2->setFrameShape(QFrame::Box);
        label3 = new QLabel(centralWidget);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(0, 0, 101, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 300, 54, 12));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 300, 54, 12));
        label_2->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 594, 23));
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
        menu_10 = new QMenu(menuBar);
        menu_10->setObjectName(QString::fromUtf8("menu_10"));
        menu_11 = new QMenu(menuBar);
        menu_11->setObjectName(QString::fromUtf8("menu_11"));
        menu_12 = new QMenu(menuBar);
        menu_12->setObjectName(QString::fromUtf8("menu_12"));
        menuThreshold = new QMenu(menu_12);
        menuThreshold->setObjectName(QString::fromUtf8("menuThreshold"));
        menuTHRESH_OTSU = new QMenu(menu_12);
        menuTHRESH_OTSU->setObjectName(QString::fromUtf8("menuTHRESH_OTSU"));
        menuAdaptiveThreshold = new QMenu(menu_12);
        menuAdaptiveThreshold->setObjectName(QString::fromUtf8("menuAdaptiveThreshold"));
        menuTHRESH_BINARY = new QMenu(menuAdaptiveThreshold);
        menuTHRESH_BINARY->setObjectName(QString::fromUtf8("menuTHRESH_BINARY"));
        menuTHRESH_BINARY_INV = new QMenu(menuAdaptiveThreshold);
        menuTHRESH_BINARY_INV->setObjectName(QString::fromUtf8("menuTHRESH_BINARY_INV"));
        menuTHRESH_TRIANGLE = new QMenu(menu_12);
        menuTHRESH_TRIANGLE->setObjectName(QString::fromUtf8("menuTHRESH_TRIANGLE"));
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
        menuBar->addAction(menu_10->menuAction());
        menuBar->addAction(menu_11->menuAction());
        menuBar->addAction(menu_12->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(openLenaJpg);
        menu->addAction(openCustomeFile);
        menu->addAction(restoreFile);
        menu->addAction(Clear);
        menu->addAction(exitSystem);
        menu_2->addAction(copyright);
        menu_2->addAction(about);
        menu_3->addAction(HistEqualize);
        menu_3->addAction(contrast);
        menu_3->addAction(light);
        menu_3->addAction(contrastAndLight);
        menu_4->addAction(filter2D1);
        menu_4->addAction(filter2D2);
        menu_4->addAction(filter2D3);
        menu_4->addAction(filter2D4);
        menu_4->addAction(filter2D5);
        menu_4->addAction(filter2D6);
        menu_5->addAction(actionCV_TM_SQDIFF);
        menu_5->addAction(actionCV_TM_SQDIFF_NORMED);
        menu_5->addAction(actionCV_TM_CCORR);
        menu_5->addAction(actionCV_TM_CCORR_NORMED);
        menu_5->addAction(actionCV_TM_CCOEFF);
        menu_5->addAction(actionCV_TM_CCOEFF_NORMED);
        menu_10->addAction(wrapAffine);
        menu_10->addAction(rotateWrapAffine);
        menu_11->addAction(remapCopy);
        menu_11->addAction(remapX);
        menu_11->addAction(remapY);
        menu_11->addAction(remapSmall);
        menu_11->addAction(remapRotate);
        menu_11->addAction(remapDiagonal);
        menu_12->addAction(menuThreshold->menuAction());
        menu_12->addAction(menuTHRESH_OTSU->menuAction());
        menu_12->addAction(menuTHRESH_TRIANGLE->menuAction());
        menu_12->addAction(menuAdaptiveThreshold->menuAction());
        menuThreshold->addAction(actionTHRESH_BINARY);
        menuThreshold->addAction(actionTHRESH_BINARY_INV);
        menuThreshold->addAction(actionTHRESH_TRUNC);
        menuThreshold->addAction(actionTHRESH_TOZERO);
        menuThreshold->addAction(actionTHRESH_TOZERO_INV_2);
        menuTHRESH_OTSU->addAction(actionTHRESH_BINARY_3);
        menuTHRESH_OTSU->addAction(actionTHRESH_BINARY_INV_3);
        menuTHRESH_OTSU->addAction(actionTHRESH_TRUNC_2);
        menuTHRESH_OTSU->addAction(actionTHRESH_TOZERO_2);
        menuTHRESH_OTSU->addAction(actionTHRESH_TOZERO_INV);
        menuAdaptiveThreshold->addAction(menuTHRESH_BINARY->menuAction());
        menuAdaptiveThreshold->addAction(menuTHRESH_BINARY_INV->menuAction());
        menuTHRESH_BINARY->addAction(actionADAPTIVE_THRESH_MEAN_C);
        menuTHRESH_BINARY->addAction(actionADAPTIVE_THRESH_GAUSSIAN_C);
        menuTHRESH_BINARY_INV->addAction(actionADAPTIVE_THRESH_GAUSSIAN_C_2);
        menuTHRESH_BINARY_INV->addAction(actionADAPTIVE_THRESH_MEAN_C_2);
        menuTHRESH_TRIANGLE->addAction(actionTHRESH_BINARY_2);
        menuTHRESH_TRIANGLE->addAction(actionTHRESH_BINARY_INV_2);
        menuTHRESH_TRIANGLE->addAction(actionTHRESH_TRUNC_3);
        menuTHRESH_TRIANGLE->addAction(actionTHRESH_TOZERO_3);
        menuTHRESH_TRIANGLE->addAction(actionTHRESH_TOZERO_INV_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "chapter2", nullptr));
        openLenaJpg->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\265\213\350\257\225\346\226\207\344\273\266\357\274\210lena.jpg)", nullptr));
        openCustomeFile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\350\207\252\345\256\232\344\271\211\346\226\207\344\273\266", nullptr));
        restoreFile->setText(QCoreApplication::translate("MainWindow", "\350\277\230\345\216\237", nullptr));
        exitSystem->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        copyright->setText(QCoreApplication::translate("MainWindow", "\347\211\210\346\235\203", nullptr));
        about->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        HistEqualize->setText(QCoreApplication::translate("MainWindow", "\347\233\264\346\226\271\345\233\276\345\235\207\350\241\241\345\214\226", nullptr));
        contrast->setText(QCoreApplication::translate("MainWindow", "\345\257\271\346\257\224\345\272\246", nullptr));
        light->setText(QCoreApplication::translate("MainWindow", "\344\272\256\345\272\246", nullptr));
        filter2D1->setText(QCoreApplication::translate("MainWindow", "\347\256\227\345\255\2201", nullptr));
        filter2D2->setText(QCoreApplication::translate("MainWindow", "\347\256\227\345\255\2202", nullptr));
        filter2D3->setText(QCoreApplication::translate("MainWindow", "\347\256\227\345\255\2203", nullptr));
        filter2D4->setText(QCoreApplication::translate("MainWindow", "\347\256\227\345\255\2204", nullptr));
        filter2D5->setText(QCoreApplication::translate("MainWindow", "\347\256\227\345\255\2205", nullptr));
        filter2D6->setText(QCoreApplication::translate("MainWindow", "\347\256\227\345\255\2206", nullptr));
        contrastAndLight->setText(QCoreApplication::translate("MainWindow", "\344\272\256\345\272\246&\345\257\271\346\257\224\345\272\246", nullptr));
        actionCV_TM_SQDIFF->setText(QCoreApplication::translate("MainWindow", "TM_SQDIFF", nullptr));
#if QT_CONFIG(tooltip)
        actionCV_TM_SQDIFF->setToolTip(QCoreApplication::translate("MainWindow", "TM_SQDIFF", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCV_TM_SQDIFF_NORMED->setText(QCoreApplication::translate("MainWindow", "TM_SQDIFF_NORMED", nullptr));
#if QT_CONFIG(tooltip)
        actionCV_TM_SQDIFF_NORMED->setToolTip(QCoreApplication::translate("MainWindow", "TM_SQDIFF_NORMED", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCV_TM_CCORR->setText(QCoreApplication::translate("MainWindow", "TM_CCORR", nullptr));
#if QT_CONFIG(tooltip)
        actionCV_TM_CCORR->setToolTip(QCoreApplication::translate("MainWindow", "TM_CCORR", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCV_TM_CCORR_NORMED->setText(QCoreApplication::translate("MainWindow", "TM_CCORR_NORMED", nullptr));
#if QT_CONFIG(tooltip)
        actionCV_TM_CCORR_NORMED->setToolTip(QCoreApplication::translate("MainWindow", "TM_CCORR_NORMED", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCV_TM_CCOEFF->setText(QCoreApplication::translate("MainWindow", "TM_CCOEFF", nullptr));
#if QT_CONFIG(tooltip)
        actionCV_TM_CCOEFF->setToolTip(QCoreApplication::translate("MainWindow", "TM_CCOEFF", nullptr));
#endif // QT_CONFIG(tooltip)
        actionCV_TM_CCOEFF_NORMED->setText(QCoreApplication::translate("MainWindow", "TM_CCOEFF_NORMED", nullptr));
#if QT_CONFIG(tooltip)
        actionCV_TM_CCOEFF_NORMED->setToolTip(QCoreApplication::translate("MainWindow", "TM_CCOEFF_NORMED", nullptr));
#endif // QT_CONFIG(tooltip)
        resizeSmall->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
        resizeBig->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
        mirrorHorizen->setText(QCoreApplication::translate("MainWindow", "\346\260\264\345\271\263", nullptr));
        mirrorVertical->setText(QCoreApplication::translate("MainWindow", "\345\236\202\347\233\264", nullptr));
        mirrorHorizenAndVertical->setText(QCoreApplication::translate("MainWindow", "\346\260\264\345\271\263\345\236\202\347\233\264", nullptr));
        action_7->setText(QCoreApplication::translate("MainWindow", "\346\227\213\350\275\254", nullptr));
        wrapAffine->setText(QCoreApplication::translate("MainWindow", "\345\215\225\347\272\257\344\273\277\345\260\204", nullptr));
        rotateWrapAffine->setText(QCoreApplication::translate("MainWindow", "\346\227\213\350\275\254\344\273\277\345\260\204", nullptr));
        remapX->setText(QCoreApplication::translate("MainWindow", "x\350\275\264", nullptr));
        remapY->setText(QCoreApplication::translate("MainWindow", "y\350\275\264", nullptr));
        remapSmall->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
        remapRotate->setText(QCoreApplication::translate("MainWindow", "\346\227\213\350\275\254", nullptr));
        clockwise->setText(QCoreApplication::translate("MainWindow", "\351\241\272\346\227\266\351\222\210\346\227\240\347\274\251\346\224\276", nullptr));
        clockwiseResize->setText(QCoreApplication::translate("MainWindow", "\351\241\272\346\227\266\351\222\210\347\274\251\346\224\276", nullptr));
        UNclockwise->setText(QCoreApplication::translate("MainWindow", "\351\200\206\346\227\266\351\222\210", nullptr));
        zeroRotateResize->setText(QCoreApplication::translate("MainWindow", "\351\233\266\346\227\213\350\275\254\347\274\251\346\224\276", nullptr));
        actionTHRESH_BINARY->setText(QCoreApplication::translate("MainWindow", "THRESH_BINARY", nullptr));
        actionTHRESH_BINARY_INV->setText(QCoreApplication::translate("MainWindow", "THRESH_BINARY_INV", nullptr));
        actionTHRESH_BINARY_3->setText(QCoreApplication::translate("MainWindow", "THRESH_BINARY", nullptr));
        actionTHRESH_BINARY_INV_3->setText(QCoreApplication::translate("MainWindow", "THRESH_BINARY_INV", nullptr));
        actionTHRESH_TRUNC->setText(QCoreApplication::translate("MainWindow", "THRESH_TRUNC", nullptr));
        actionTHRESH_TRUNC_2->setText(QCoreApplication::translate("MainWindow", "THRESH_TRUNC", nullptr));
        actionTHRESH_TOZERO->setText(QCoreApplication::translate("MainWindow", "THRESH_TOZERO", nullptr));
        actionTHRESH_TOZERO_2->setText(QCoreApplication::translate("MainWindow", "THRESH_TOZERO", nullptr));
        actionTHRESH_TOZERO_INV->setText(QCoreApplication::translate("MainWindow", "THRESH_TOZERO_INV", nullptr));
        actionTHRESH_TOZERO_INV_2->setText(QCoreApplication::translate("MainWindow", "THRESH_TOZERO_INV", nullptr));
        actionADAPTIVE_THRESH_MEAN_C->setText(QCoreApplication::translate("MainWindow", "ADAPTIVE_THRESH_MEAN_C", nullptr));
        actionADAPTIVE_THRESH_GAUSSIAN_C->setText(QCoreApplication::translate("MainWindow", "ADAPTIVE_THRESH_GAUSSIAN_C", nullptr));
        actionADAPTIVE_THRESH_GAUSSIAN_C_2->setText(QCoreApplication::translate("MainWindow", "ADAPTIVE_THRESH_GAUSSIAN_C", nullptr));
        actionADAPTIVE_THRESH_MEAN_C_2->setText(QCoreApplication::translate("MainWindow", "ADAPTIVE_THRESH_MEAN_C", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\351\224\220\345\214\226", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\346\240\207\345\207\206", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\351\253\230\346\226\257", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\200\274", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\345\217\214\350\276\271", nullptr));
        remapDiagonal->setText(QCoreApplication::translate("MainWindow", "xy\350\275\264\344\272\222\346\215\242", nullptr));
        remapCopy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
        actionTHRESH_BINARY_2->setText(QCoreApplication::translate("MainWindow", "THRESH_BINARY", nullptr));
        actionTHRESH_BINARY_INV_2->setText(QCoreApplication::translate("MainWindow", "THRESH_BINARY_INV", nullptr));
        actionTHRESH_TRUNC_3->setText(QCoreApplication::translate("MainWindow", "THRESH_TRUNC", nullptr));
        actionTHRESH_TOZERO_3->setText(QCoreApplication::translate("MainWindow", "THRESH_TOZERO", nullptr));
        actionTHRESH_TOZERO_INV_3->setText(QCoreApplication::translate("MainWindow", "THRESH_TOZERO_INV", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        label1->setText(QString());
        label2->setText(QString());
        label3->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\346\272\220\345\233\276\345\203\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\345\233\276\345\203\217", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\345\242\236\345\274\272", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\345\215\267\347\247\257", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\346\250\241\347\211\210\345\214\271\351\205\215", nullptr));
        menu_10->setTitle(QCoreApplication::translate("MainWindow", "\344\273\277\345\260\204\345\217\230\346\215\242", nullptr));
        menu_11->setTitle(QCoreApplication::translate("MainWindow", "\351\207\215\346\230\240\345\260\204", nullptr));
        menu_12->setTitle(QCoreApplication::translate("MainWindow", "\345\210\206\345\211\262", nullptr));
        menuThreshold->setTitle(QCoreApplication::translate("MainWindow", "threshold", nullptr));
        menuTHRESH_OTSU->setTitle(QCoreApplication::translate("MainWindow", "THRESH_OTSU", nullptr));
        menuAdaptiveThreshold->setTitle(QCoreApplication::translate("MainWindow", "adaptiveThreshold", nullptr));
        menuTHRESH_BINARY->setTitle(QCoreApplication::translate("MainWindow", "THRESH_BINARY", nullptr));
        menuTHRESH_BINARY_INV->setTitle(QCoreApplication::translate("MainWindow", "THRESH_BINARY_INV", nullptr));
        menuTHRESH_TRIANGLE->setTitle(QCoreApplication::translate("MainWindow", "THRESH_TRIANGLE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
