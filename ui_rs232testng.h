/********************************************************************************
** Form generated from reading UI file 'rs232testng.ui'
**
** Created: Tue 9. Nov 22:21:50 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RS232TESTNG_H
#define UI_RS232TESTNG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStart;
    QAction *actionConf;
    QAction *actionExit;
    QAction *actionHelp;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuDUPA;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *srcSelDock;
    QWidget *dockWidgetContents_3;
    QDockWidget *mainDock;
    QWidget *dockWidgetContents_4;
    QToolButton *toolButton;
    QDockWidget *inSelDock;
    QWidget *dockWidgetContents;
    QDockWidget *outSelDock;
    QWidget *dockWidgetContents_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(606, 487);
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AnimatedDocks);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStart->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/BtnPlay"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/buttons/BtnStopS"), QSize(), QIcon::Normal, QIcon::On);
        actionStart->setIcon(icon);
        actionConf = new QAction(MainWindow);
        actionConf->setObjectName(QString::fromUtf8("actionConf"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/AppConf"), QSize(), QIcon::Normal, QIcon::Off);
        actionConf->setIcon(icon1);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/AppExit"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/AppHelp"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 606, 21));
        menuDUPA = new QMenu(menuBar);
        menuDUPA->setObjectName(QString::fromUtf8("menuDUPA"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        srcSelDock = new QDockWidget(MainWindow);
        srcSelDock->setObjectName(QString::fromUtf8("srcSelDock"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(srcSelDock->sizePolicy().hasHeightForWidth());
        srcSelDock->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(7);
        srcSelDock->setFont(font);
        srcSelDock->setFeatures(QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetVerticalTitleBar);
        srcSelDock->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::TopDockWidgetArea);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        srcSelDock->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(4), srcSelDock);
        mainDock = new QDockWidget(MainWindow);
        mainDock->setObjectName(QString::fromUtf8("mainDock"));
        sizePolicy.setHeightForWidth(mainDock->sizePolicy().hasHeightForWidth());
        mainDock->setSizePolicy(sizePolicy);
        mainDock->setFont(font);
        mainDock->setFloating(false);
        mainDock->setFeatures(QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetVerticalTitleBar);
        mainDock->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::TopDockWidgetArea);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        toolButton = new QToolButton(dockWidgetContents_4);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(10, 50, 25, 19));
        mainDock->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(4), mainDock);
        inSelDock = new QDockWidget(MainWindow);
        inSelDock->setObjectName(QString::fromUtf8("inSelDock"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(inSelDock->sizePolicy().hasHeightForWidth());
        inSelDock->setSizePolicy(sizePolicy1);
        inSelDock->setFont(font);
        inSelDock->setFloating(false);
        inSelDock->setFeatures(QDockWidget::DockWidgetMovable|QDockWidget::DockWidgetVerticalTitleBar);
        inSelDock->setAllowedAreas(Qt::AllDockWidgetAreas);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        inSelDock->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), inSelDock);
        outSelDock = new QDockWidget(MainWindow);
        outSelDock->setObjectName(QString::fromUtf8("outSelDock"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(outSelDock->sizePolicy().hasHeightForWidth());
        outSelDock->setSizePolicy(sizePolicy2);
        outSelDock->setMinimumSize(QSize(128, 48));
        outSelDock->setFont(font);
        outSelDock->setFeatures(QDockWidget::DockWidgetMovable);
        outSelDock->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::TopDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        outSelDock->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), outSelDock);

        menuBar->addAction(menuDUPA->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionStart->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        actionConf->setText(QApplication::translate("MainWindow", "Conf", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "exit", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuDUPA->setTitle(QApplication::translate("MainWindow", "DUPA!!!!", 0, QApplication::UnicodeUTF8));
        srcSelDock->setWindowTitle(QApplication::translate("MainWindow", "Source", 0, QApplication::UnicodeUTF8));
        mainDock->setWindowTitle(QApplication::translate("MainWindow", "Main Control", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        inSelDock->setWindowTitle(QApplication::translate("MainWindow", "Input Method", 0, QApplication::UnicodeUTF8));
        outSelDock->setWindowTitle(QApplication::translate("MainWindow", "Output Method", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RS232TESTNG_H
