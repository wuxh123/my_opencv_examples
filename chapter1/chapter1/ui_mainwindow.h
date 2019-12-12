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
    QAction *openTestFile;
    QAction *myExit;
    QAction *Horizen;
    QAction *about;
    QAction *vertical;
    QAction *horizenAndVertical;
    QAction *restore;
    QAction *openCustomeFile;
    QAction *copyright;
    QAction *actionSobel;
    QAction *actionCanny;
    QAction *actionLaplacian;
    QAction *normalizeFilter;
    QAction *GaussFilter;
    QAction *medianFilter;
    QAction *bilateralFilter;
    QAction *Erosion;
    QAction *dialation;
    QAction *actionMorphological_Gradient;
    QAction *opening;
    QAction *closing;
    QAction *topHat;
    QAction *blackHat;
    QAction *PyrUpAction;
    QAction *PyrDownAction;
    QAction *ResizeUp;
    QAction *ResizeDown;
    QAction *cNresize;
    QAction *cResize;
    QAction *antiClockwise;
    QAction *NFlipResize;
    QAction *Clear;
    QAction *normalize;
    QAction *NoNormalize;
    QWidget *centralWidget;
    QLabel *label1;
    QLabel *label2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menuF;
    QMenu *menu_5;
    QMenu *menu_6;
    QMenu *menu_7;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(793, 570);
        openTestFile = new QAction(MainWindow);
        openTestFile->setObjectName(QString::fromUtf8("openTestFile"));
        myExit = new QAction(MainWindow);
        myExit->setObjectName(QString::fromUtf8("myExit"));
        Horizen = new QAction(MainWindow);
        Horizen->setObjectName(QString::fromUtf8("Horizen"));
        about = new QAction(MainWindow);
        about->setObjectName(QString::fromUtf8("about"));
        vertical = new QAction(MainWindow);
        vertical->setObjectName(QString::fromUtf8("vertical"));
        horizenAndVertical = new QAction(MainWindow);
        horizenAndVertical->setObjectName(QString::fromUtf8("horizenAndVertical"));
        restore = new QAction(MainWindow);
        restore->setObjectName(QString::fromUtf8("restore"));
        openCustomeFile = new QAction(MainWindow);
        openCustomeFile->setObjectName(QString::fromUtf8("openCustomeFile"));
        copyright = new QAction(MainWindow);
        copyright->setObjectName(QString::fromUtf8("copyright"));
        actionSobel = new QAction(MainWindow);
        actionSobel->setObjectName(QString::fromUtf8("actionSobel"));
        actionCanny = new QAction(MainWindow);
        actionCanny->setObjectName(QString::fromUtf8("actionCanny"));
        actionLaplacian = new QAction(MainWindow);
        actionLaplacian->setObjectName(QString::fromUtf8("actionLaplacian"));
        normalizeFilter = new QAction(MainWindow);
        normalizeFilter->setObjectName(QString::fromUtf8("normalizeFilter"));
        GaussFilter = new QAction(MainWindow);
        GaussFilter->setObjectName(QString::fromUtf8("GaussFilter"));
        medianFilter = new QAction(MainWindow);
        medianFilter->setObjectName(QString::fromUtf8("medianFilter"));
        bilateralFilter = new QAction(MainWindow);
        bilateralFilter->setObjectName(QString::fromUtf8("bilateralFilter"));
        Erosion = new QAction(MainWindow);
        Erosion->setObjectName(QString::fromUtf8("Erosion"));
        dialation = new QAction(MainWindow);
        dialation->setObjectName(QString::fromUtf8("dialation"));
        actionMorphological_Gradient = new QAction(MainWindow);
        actionMorphological_Gradient->setObjectName(QString::fromUtf8("actionMorphological_Gradient"));
        opening = new QAction(MainWindow);
        opening->setObjectName(QString::fromUtf8("opening"));
        closing = new QAction(MainWindow);
        closing->setObjectName(QString::fromUtf8("closing"));
        topHat = new QAction(MainWindow);
        topHat->setObjectName(QString::fromUtf8("topHat"));
        blackHat = new QAction(MainWindow);
        blackHat->setObjectName(QString::fromUtf8("blackHat"));
        PyrUpAction = new QAction(MainWindow);
        PyrUpAction->setObjectName(QString::fromUtf8("PyrUpAction"));
        PyrDownAction = new QAction(MainWindow);
        PyrDownAction->setObjectName(QString::fromUtf8("PyrDownAction"));
        ResizeUp = new QAction(MainWindow);
        ResizeUp->setObjectName(QString::fromUtf8("ResizeUp"));
        ResizeDown = new QAction(MainWindow);
        ResizeDown->setObjectName(QString::fromUtf8("ResizeDown"));
        cNresize = new QAction(MainWindow);
        cNresize->setObjectName(QString::fromUtf8("cNresize"));
        cResize = new QAction(MainWindow);
        cResize->setObjectName(QString::fromUtf8("cResize"));
        antiClockwise = new QAction(MainWindow);
        antiClockwise->setObjectName(QString::fromUtf8("antiClockwise"));
        NFlipResize = new QAction(MainWindow);
        NFlipResize->setObjectName(QString::fromUtf8("NFlipResize"));
        Clear = new QAction(MainWindow);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        normalize = new QAction(MainWindow);
        normalize->setObjectName(QString::fromUtf8("normalize"));
        NoNormalize = new QAction(MainWindow);
        NoNormalize->setObjectName(QString::fromUtf8("NoNormalize"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(260, 170, 201, 201));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label1->sizePolicy().hasHeightForWidth());
        label1->setSizePolicy(sizePolicy);
        label1->setFrameShape(QFrame::Box);
        label1->setAlignment(Qt::AlignCenter);
        label2 = new QLabel(centralWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(520, 170, 201, 201));
        sizePolicy.setHeightForWidth(label2->sizePolicy().hasHeightForWidth());
        label2->setSizePolicy(sizePolicy);
        label2->setFrameShape(QFrame::Box);
        label2->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 400, 54, 12));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(590, 400, 54, 12));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(470, 80, 54, 12));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 793, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menuF = new QMenu(menu_4);
        menuF->setObjectName(QString::fromUtf8("menuF"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        menu_6 = new QMenu(menuBar);
        menu_6->setObjectName(QString::fromUtf8("menu_6"));
        menu_7 = new QMenu(menuBar);
        menu_7->setObjectName(QString::fromUtf8("menu_7"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menuBar->addAction(menu_7->menuAction());
        menuBar->addAction(menu_6->menuAction());
        menu->addSeparator();
        menu->addAction(openTestFile);
        menu->addAction(openCustomeFile);
        menu->addAction(restore);
        menu->addAction(Clear);
        menu->addAction(myExit);
        menu_2->addAction(Horizen);
        menu_2->addAction(vertical);
        menu_2->addAction(horizenAndVertical);
        menu_3->addAction(Erosion);
        menu_3->addAction(dialation);
        menu_3->addAction(opening);
        menu_3->addAction(closing);
        menu_3->addAction(actionMorphological_Gradient);
        menu_3->addAction(topHat);
        menu_3->addAction(blackHat);
        menu_4->addAction(normalizeFilter);
        menu_4->addAction(menuF->menuAction());
        menu_4->addAction(GaussFilter);
        menu_4->addAction(medianFilter);
        menu_4->addAction(bilateralFilter);
        menuF->addAction(normalize);
        menuF->addAction(NoNormalize);
        menu_5->addAction(PyrUpAction);
        menu_5->addAction(PyrDownAction);
        menu_5->addAction(ResizeUp);
        menu_5->addAction(ResizeDown);
        menu_6->addAction(about);
        menu_6->addAction(copyright);
        menu_7->addAction(cNresize);
        menu_7->addAction(cResize);
        menu_7->addAction(antiClockwise);
        menu_7->addAction(NFlipResize);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "chapter1", nullptr));
        openTestFile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\265\213\350\257\225\346\226\207\344\273\266", nullptr));
        myExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        Horizen->setText(QCoreApplication::translate("MainWindow", "\346\260\264\345\271\263", nullptr));
        about->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        vertical->setText(QCoreApplication::translate("MainWindow", "\345\236\202\347\233\264", nullptr));
        horizenAndVertical->setText(QCoreApplication::translate("MainWindow", "\346\260\264\345\271\263&\345\236\202\347\233\264", nullptr));
        restore->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\216\237", nullptr));
        openCustomeFile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\350\207\252\345\256\232\344\271\211\346\226\207\344\273\266", nullptr));
        copyright->setText(QCoreApplication::translate("MainWindow", "\347\211\210\346\235\203", nullptr));
        actionSobel->setText(QCoreApplication::translate("MainWindow", "sobel", nullptr));
        actionCanny->setText(QCoreApplication::translate("MainWindow", "canny", nullptr));
        actionLaplacian->setText(QCoreApplication::translate("MainWindow", "Laplacian", nullptr));
        normalizeFilter->setText(QCoreApplication::translate("MainWindow", "\345\235\207\345\200\274\346\273\244\346\263\242", nullptr));
        GaussFilter->setText(QCoreApplication::translate("MainWindow", "\351\253\230\346\226\257\346\273\244\346\263\242", nullptr));
        medianFilter->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\200\274\346\273\244\346\263\242", nullptr));
        bilateralFilter->setText(QCoreApplication::translate("MainWindow", "\345\217\214\350\276\271\346\273\244\346\263\242", nullptr));
        Erosion->setText(QCoreApplication::translate("MainWindow", "\350\205\220\350\232\200", nullptr));
        dialation->setText(QCoreApplication::translate("MainWindow", "\350\206\250\350\203\200", nullptr));
        actionMorphological_Gradient->setText(QCoreApplication::translate("MainWindow", "Morphological Gradient", nullptr));
        opening->setText(QCoreApplication::translate("MainWindow", "\345\274\200\350\277\220\347\256\227", nullptr));
        closing->setText(QCoreApplication::translate("MainWindow", "\351\227\255\350\277\220\347\256\227", nullptr));
        topHat->setText(QCoreApplication::translate("MainWindow", "\351\241\266\345\270\275", nullptr));
        blackHat->setText(QCoreApplication::translate("MainWindow", "\351\273\221\345\270\275", nullptr));
        PyrUpAction->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247(PyrUp)", nullptr));
        PyrDownAction->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217(PyrDown)", nullptr));
        ResizeUp->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247(Resize)", nullptr));
        ResizeDown->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217(Resize)", nullptr));
        cNresize->setText(QCoreApplication::translate("MainWindow", "\351\241\272\346\227\266\351\222\210\346\227\240\347\274\251\346\224\276", nullptr));
        cResize->setText(QCoreApplication::translate("MainWindow", "\351\241\272\346\227\266\351\222\210\347\274\251\346\224\276", nullptr));
        antiClockwise->setText(QCoreApplication::translate("MainWindow", "\351\200\206\346\227\266\351\222\210", nullptr));
        NFlipResize->setText(QCoreApplication::translate("MainWindow", "\351\233\266\346\227\213\350\275\254\347\274\251\346\224\276", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        Clear->setToolTip(QCoreApplication::translate("MainWindow", "CLEAR", nullptr));
#endif // QT_CONFIG(tooltip)
        normalize->setText(QCoreApplication::translate("MainWindow", "\345\275\222\344\270\200\345\214\226", nullptr));
        NoNormalize->setText(QCoreApplication::translate("MainWindow", "\351\235\236\345\275\222\344\270\200\345\214\226", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "\345\216\237\345\247\213\345\233\276\345\203\217", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "\347\273\223\346\236\234\345\233\276\345\203\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\272\220\345\233\276\345\203\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\345\233\276\345\203\217", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\347\277\273\350\275\254", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\345\275\242\346\200\201", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\346\273\244\346\263\242", nullptr));
        menuF->setTitle(QCoreApplication::translate("MainWindow", "\346\226\271\346\241\206\346\273\244\346\263\242", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\347\274\251\346\224\276", nullptr));
        menu_6->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        menu_7->setTitle(QCoreApplication::translate("MainWindow", "\346\227\213\350\275\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
