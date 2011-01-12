/********************************************************************************
** Form generated from reading UI file 'rs232testng.ui'
**
** Created: Wed 12. Jan 22:57:34 2011
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
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actSrcConn;
    QAction *actAppConf;
    QAction *actAppExit;
    QAction *actAppHelp;
    QAction *actSrcHelp;
    QAction *actOutHelp;
    QAction *actSrcConf;
    QAction *actOutConf;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *SourceManagerArea;
    QSplitter *splitter;
    QFrame *inputGroupFrame;
    QVBoxLayout *verticalLayout_3;
    QWidget *InputManagerArea;
    QWidget *InputArea;
    QFrame *outputGroupFrame;
    QVBoxLayout *verticalLayout_2;
    QWidget *OutputManagerArea;
    QWidget *OutputArea;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(729, 478);
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        MainWindow->setDockOptions(QMainWindow::AnimatedDocks);
        actSrcConn = new QAction(MainWindow);
        actSrcConn->setObjectName(QString::fromUtf8("actSrcConn"));
        actSrcConn->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/22/res/connect_creating.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/buttons/22/res/connect_established.png"), QSize(), QIcon::Normal, QIcon::On);
        actSrcConn->setIcon(icon);
        actAppConf = new QAction(MainWindow);
        actAppConf->setObjectName(QString::fromUtf8("actAppConf"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/AppConf"), QSize(), QIcon::Normal, QIcon::Off);
        actAppConf->setIcon(icon1);
        actAppExit = new QAction(MainWindow);
        actAppExit->setObjectName(QString::fromUtf8("actAppExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/16/res/16/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAppExit->setIcon(icon2);
        actAppHelp = new QAction(MainWindow);
        actAppHelp->setObjectName(QString::fromUtf8("actAppHelp"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/16/res/16/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actAppHelp->setIcon(icon3);
        actSrcHelp = new QAction(MainWindow);
        actSrcHelp->setObjectName(QString::fromUtf8("actSrcHelp"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/buttons/16/res/16/dialog-information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSrcHelp->setIcon(icon4);
        actOutHelp = new QAction(MainWindow);
        actOutHelp->setObjectName(QString::fromUtf8("actOutHelp"));
        actOutHelp->setIcon(icon4);
        actSrcConf = new QAction(MainWindow);
        actSrcConf->setObjectName(QString::fromUtf8("actSrcConf"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/buttons/16/res/16/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSrcConf->setIcon(icon5);
        actOutConf = new QAction(MainWindow);
        actOutConf->setObjectName(QString::fromUtf8("actOutConf"));
        actOutConf->setIcon(icon5);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SourceManagerArea = new QFrame(centralWidget);
        SourceManagerArea->setObjectName(QString::fromUtf8("SourceManagerArea"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SourceManagerArea->sizePolicy().hasHeightForWidth());
        SourceManagerArea->setSizePolicy(sizePolicy);
        SourceManagerArea->setMinimumSize(QSize(0, 32));
        SourceManagerArea->setFrameShape(QFrame::Box);
        SourceManagerArea->setFrameShadow(QFrame::Sunken);
        SourceManagerArea->setLineWidth(1);
        SourceManagerArea->setMidLineWidth(0);

        verticalLayout->addWidget(SourceManagerArea);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setOrientation(Qt::Vertical);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(5);
        splitter->setChildrenCollapsible(false);
        inputGroupFrame = new QFrame(splitter);
        inputGroupFrame->setObjectName(QString::fromUtf8("inputGroupFrame"));
        sizePolicy1.setHeightForWidth(inputGroupFrame->sizePolicy().hasHeightForWidth());
        inputGroupFrame->setSizePolicy(sizePolicy1);
        inputGroupFrame->setFrameShape(QFrame::Box);
        inputGroupFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_3 = new QVBoxLayout(inputGroupFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        InputManagerArea = new QWidget(inputGroupFrame);
        InputManagerArea->setObjectName(QString::fromUtf8("InputManagerArea"));

        verticalLayout_3->addWidget(InputManagerArea);

        InputArea = new QWidget(inputGroupFrame);
        InputArea->setObjectName(QString::fromUtf8("InputArea"));

        verticalLayout_3->addWidget(InputArea);

        verticalLayout_3->setStretch(1, 1);
        splitter->addWidget(inputGroupFrame);
        outputGroupFrame = new QFrame(splitter);
        outputGroupFrame->setObjectName(QString::fromUtf8("outputGroupFrame"));
        outputGroupFrame->setFrameShape(QFrame::Box);
        outputGroupFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(outputGroupFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        OutputManagerArea = new QWidget(outputGroupFrame);
        OutputManagerArea->setObjectName(QString::fromUtf8("OutputManagerArea"));
        OutputManagerArea->setAutoFillBackground(false);

        verticalLayout_2->addWidget(OutputManagerArea);

        OutputArea = new QWidget(outputGroupFrame);
        OutputArea->setObjectName(QString::fromUtf8("OutputArea"));

        verticalLayout_2->addWidget(OutputArea);

        verticalLayout_2->setStretch(1, 1);
        splitter->addWidget(outputGroupFrame);

        verticalLayout->addWidget(splitter);

        verticalLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(actAppExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actSrcConn->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        actAppConf->setText(QApplication::translate("MainWindow", "Conf", 0, QApplication::UnicodeUTF8));
        actAppExit->setText(QApplication::translate("MainWindow", "exit", 0, QApplication::UnicodeUTF8));
        actAppHelp->setText(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        actSrcHelp->setText(QApplication::translate("MainWindow", "Source Help", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actSrcHelp->setToolTip(QApplication::translate("MainWindow", "See info for selected input source", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actOutHelp->setText(QApplication::translate("MainWindow", "Output Method Help", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actOutHelp->setToolTip(QApplication::translate("MainWindow", "See info for selected output method", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actSrcConf->setText(QApplication::translate("MainWindow", "Source Config", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actSrcConf->setToolTip(QApplication::translate("MainWindow", "Additional source settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actOutConf->setText(QApplication::translate("MainWindow", "Output Config", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actOutConf->setToolTip(QApplication::translate("MainWindow", "Additional output method settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RS232TESTNG_H
