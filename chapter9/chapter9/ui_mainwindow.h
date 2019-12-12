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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *openCustomeFile;
    QAction *action_2;
    QAction *exitSystem;
    QAction *copyright;
    QAction *about;
    QAction *action_3;
    QWidget *centralWidget;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QLabel *label6;
    QLabel *label7;
    QLabel *label8;
    QLabel *label9;
    QFrame *line;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(545, 415);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        openCustomeFile = new QAction(MainWindow);
        openCustomeFile->setObjectName(QString::fromUtf8("openCustomeFile"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        exitSystem = new QAction(MainWindow);
        exitSystem->setObjectName(QString::fromUtf8("exitSystem"));
        copyright = new QAction(MainWindow);
        copyright->setObjectName(QString::fromUtf8("copyright"));
        about = new QAction(MainWindow);
        about->setObjectName(QString::fromUtf8("about"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label1 = new QLabel(centralWidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(80, 20, 141, 111));
        label1->setFrameShape(QFrame::Box);
        label2 = new QLabel(centralWidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(50, 170, 71, 61));
        label2->setFrameShape(QFrame::Box);
        label3 = new QLabel(centralWidget);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setGeometry(QRect(170, 170, 71, 61));
        label3->setFrameShape(QFrame::Box);
        label4 = new QLabel(centralWidget);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setGeometry(QRect(280, 170, 71, 61));
        label4->setFrameShape(QFrame::Box);
        label5 = new QLabel(centralWidget);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setGeometry(QRect(390, 170, 71, 61));
        label5->setFrameShape(QFrame::Box);
        label6 = new QLabel(centralWidget);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setGeometry(QRect(50, 270, 71, 61));
        label6->setFrameShape(QFrame::Box);
        label7 = new QLabel(centralWidget);
        label7->setObjectName(QString::fromUtf8("label7"));
        label7->setGeometry(QRect(170, 270, 71, 61));
        label7->setFrameShape(QFrame::Box);
        label8 = new QLabel(centralWidget);
        label8->setObjectName(QString::fromUtf8("label8"));
        label8->setGeometry(QRect(280, 270, 71, 61));
        label8->setFrameShape(QFrame::Box);
        label9 = new QLabel(centralWidget);
        label9->setObjectName(QString::fromUtf8("label9"));
        label9->setGeometry(QRect(390, 270, 71, 61));
        label9->setFrameShape(QFrame::Box);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 140, 551, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 75, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 75, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 110, 75, 23));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(390, 110, 75, 23));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(290, 40, 75, 23));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(390, 40, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 545, 23));
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
        menu->addAction(action);
        menu->addAction(action_3);
        menu->addAction(openCustomeFile);
        menu->addAction(action_2);
        menu->addAction(exitSystem);
        menu_2->addAction(copyright);
        menu_2->addAction(about);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "chapter9", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\256\232\347\233\256\345\275\225", nullptr));
        openCustomeFile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\345\276\205\346\243\200\347\264\242\346\226\207\344\273\266", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\346\243\200\347\264\242", nullptr));
        exitSystem->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        copyright->setText(QCoreApplication::translate("MainWindow", "\347\211\210\346\235\203", nullptr));
        about->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\346\217\220\345\217\226\347\211\271\345\276\201", nullptr));
        label1->setText(QString());
        label2->setText(QString());
        label3->setText(QString());
        label4->setText(QString());
        label5->setText(QString());
        label6->setText(QString());
        label7->setText(QString());
        label8->setText(QString());
        label9->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\256\232\350\267\257\345\276\204", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\346\217\220\345\217\226\347\211\271\345\276\201", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
