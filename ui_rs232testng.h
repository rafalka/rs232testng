/********************************************************************************
** Form generated from reading UI file 'rs232testng.ui'
**
** Created: Fri 3. Dec 23:52:43 2010
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
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QInputProviderManager.h"

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
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbSrcSel;
    QToolButton *btnSrcHelp;
    QToolButton *btnSrcConf;
    QFrame *line_2;
    QComboBox *editSrcAddress;
    QToolButton *btnSrcConn;
    QSpacerItem *horizontalSpacer;
    QFrame *line_4;
    QToolButton *btnAppExit;
    QSplitter *splitter;
    QInputProviderManager *frameInMgr;
    QGridLayout *gridLayout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *OutputManagerArea;
    QWidget *OutputArea;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(727, 499);
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
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(0, 32));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(1);
        frame->setMidLineWidth(0);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cmbSrcSel = new QComboBox(frame);
        cmbSrcSel->setObjectName(QString::fromUtf8("cmbSrcSel"));
        cmbSrcSel->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(cmbSrcSel);

        btnSrcHelp = new QToolButton(frame);
        btnSrcHelp->setObjectName(QString::fromUtf8("btnSrcHelp"));

        horizontalLayout->addWidget(btnSrcHelp);

        btnSrcConf = new QToolButton(frame);
        btnSrcConf->setObjectName(QString::fromUtf8("btnSrcConf"));

        horizontalLayout->addWidget(btnSrcConf);

        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        editSrcAddress = new QComboBox(frame);
        editSrcAddress->setObjectName(QString::fromUtf8("editSrcAddress"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(editSrcAddress->sizePolicy().hasHeightForWidth());
        editSrcAddress->setSizePolicy(sizePolicy1);
        editSrcAddress->setEditable(true);

        horizontalLayout->addWidget(editSrcAddress);

        btnSrcConn = new QToolButton(frame);
        btnSrcConn->setObjectName(QString::fromUtf8("btnSrcConn"));
        btnSrcConn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(btnSrcConn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        line_4 = new QFrame(frame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        btnAppExit = new QToolButton(frame);
        btnAppExit->setObjectName(QString::fromUtf8("btnAppExit"));

        horizontalLayout->addWidget(btnAppExit);


        verticalLayout->addWidget(frame);

        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy2);
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setOrientation(Qt::Vertical);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(5);
        splitter->setChildrenCollapsible(false);
        frameInMgr = new QInputProviderManager(splitter);
        frameInMgr->setObjectName(QString::fromUtf8("frameInMgr"));
        sizePolicy2.setHeightForWidth(frameInMgr->sizePolicy().hasHeightForWidth());
        frameInMgr->setSizePolicy(sizePolicy2);
        frameInMgr->setFrameShape(QFrame::Box);
        frameInMgr->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(frameInMgr);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        splitter->addWidget(frameInMgr);
        frame_3 = new QFrame(splitter);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        OutputManagerArea = new QWidget(frame_3);
        OutputManagerArea->setObjectName(QString::fromUtf8("OutputManagerArea"));
        OutputManagerArea->setAutoFillBackground(false);

        verticalLayout_2->addWidget(OutputManagerArea);

        OutputArea = new QWidget(frame_3);
        OutputArea->setObjectName(QString::fromUtf8("OutputArea"));

        verticalLayout_2->addWidget(OutputArea);

        splitter->addWidget(frame_3);

        verticalLayout->addWidget(splitter);

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
        btnSrcHelp->setText(QApplication::translate("MainWindow", "?", 0, QApplication::UnicodeUTF8));
        btnSrcConf->setText(QApplication::translate("MainWindow", "H", 0, QApplication::UnicodeUTF8));
        btnSrcConn->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        btnAppExit->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RS232TESTNG_H
