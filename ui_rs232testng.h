/********************************************************************************
** Form generated from reading UI file 'rs232testng.ui'
**
** Created: Fri 12. Nov 22:29:02 2010
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
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actSrcConnect;
    QAction *actAppConf;
    QAction *actAppExit;
    QAction *actAppHelp;
    QAction *actSrcHelp;
    QAction *actInHelp;
    QAction *actOutHelp;
    QAction *actSrcConf;
    QAction *actInConf;
    QAction *actOutConf;
    QAction *actShowInHist;
    QAction *actShowMacros;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbSrcSel;
    QToolButton *btnSrcHelp;
    QToolButton *btnSrcConf;
    QFrame *line_2;
    QComboBox *editSrcAddress;
    QPushButton *btnInConnect;
    QSpacerItem *horizontalSpacer;
    QFrame *line_4;
    QToolButton *btnAppExit;
    QSplitter *splitter;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QToolButton *btnShowInHist;
    QPushButton *btnInSend;
    QPlainTextEdit *editIn;
    QToolButton *btnShowMacros;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *cmbInSel;
    QToolButton *btnInHelp;
    QToolButton *btnInConf;
    QFrame *line;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QComboBox *cmbOutSel;
    QToolButton *btnOutHelp;
    QSpacerItem *horizontalSpacer_3;
    QTextEdit *editOut;
    QToolButton *btnOutConf;
    QFrame *line_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(794, 716);
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        MainWindow->setDockOptions(QMainWindow::AnimatedDocks);
        actSrcConnect = new QAction(MainWindow);
        actSrcConnect->setObjectName(QString::fromUtf8("actSrcConnect"));
        actSrcConnect->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/BtnPlay"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/buttons/BtnStopS"), QSize(), QIcon::Normal, QIcon::On);
        actSrcConnect->setIcon(icon);
        actAppConf = new QAction(MainWindow);
        actAppConf->setObjectName(QString::fromUtf8("actAppConf"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/AppConf"), QSize(), QIcon::Normal, QIcon::Off);
        actAppConf->setIcon(icon1);
        actAppExit = new QAction(MainWindow);
        actAppExit->setObjectName(QString::fromUtf8("actAppExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/AppExit"), QSize(), QIcon::Normal, QIcon::Off);
        actAppExit->setIcon(icon2);
        actAppHelp = new QAction(MainWindow);
        actAppHelp->setObjectName(QString::fromUtf8("actAppHelp"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/AppHelp"), QSize(), QIcon::Normal, QIcon::Off);
        actAppHelp->setIcon(icon3);
        actSrcHelp = new QAction(MainWindow);
        actSrcHelp->setObjectName(QString::fromUtf8("actSrcHelp"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/buttons/res/dialog-information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSrcHelp->setIcon(icon4);
        actInHelp = new QAction(MainWindow);
        actInHelp->setObjectName(QString::fromUtf8("actInHelp"));
        actInHelp->setIcon(icon4);
        actOutHelp = new QAction(MainWindow);
        actOutHelp->setObjectName(QString::fromUtf8("actOutHelp"));
        actOutHelp->setIcon(icon4);
        actSrcConf = new QAction(MainWindow);
        actSrcConf->setObjectName(QString::fromUtf8("actSrcConf"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/buttons/res/configure-toolbars.png"), QSize(), QIcon::Normal, QIcon::Off);
        actSrcConf->setIcon(icon5);
        actInConf = new QAction(MainWindow);
        actInConf->setObjectName(QString::fromUtf8("actInConf"));
        actInConf->setIcon(icon5);
        actOutConf = new QAction(MainWindow);
        actOutConf->setObjectName(QString::fromUtf8("actOutConf"));
        actOutConf->setIcon(icon5);
        actShowInHist = new QAction(MainWindow);
        actShowInHist->setObjectName(QString::fromUtf8("actShowInHist"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/buttons/res/arrow-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        actShowInHist->setIcon(icon6);
        actShowMacros = new QAction(MainWindow);
        actShowMacros->setObjectName(QString::fromUtf8("actShowMacros"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/buttons/res/arrow-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actShowMacros->setIcon(icon7);
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

        btnInConnect = new QPushButton(frame);
        btnInConnect->setObjectName(QString::fromUtf8("btnInConnect"));

        horizontalLayout->addWidget(btnInConnect);

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
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(4);
        btnShowInHist = new QToolButton(frame_2);
        btnShowInHist->setObjectName(QString::fromUtf8("btnShowInHist"));

        gridLayout->addWidget(btnShowInHist, 9, 6, 1, 1);

        btnInSend = new QPushButton(frame_2);
        btnInSend->setObjectName(QString::fromUtf8("btnInSend"));

        gridLayout->addWidget(btnInSend, 1, 5, 1, 1);

        editIn = new QPlainTextEdit(frame_2);
        editIn->setObjectName(QString::fromUtf8("editIn"));
        editIn->setMinimumSize(QSize(120, 60));

        gridLayout->addWidget(editIn, 7, 0, 3, 6);

        btnShowMacros = new QToolButton(frame_2);
        btnShowMacros->setObjectName(QString::fromUtf8("btnShowMacros"));

        gridLayout->addWidget(btnShowMacros, 7, 6, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        cmbInSel = new QComboBox(frame_2);
        cmbInSel->setObjectName(QString::fromUtf8("cmbInSel"));
        cmbInSel->setMinimumSize(QSize(120, 0));
        cmbInSel->setEditable(false);

        gridLayout->addWidget(cmbInSel, 1, 0, 1, 1);

        btnInHelp = new QToolButton(frame_2);
        btnInHelp->setObjectName(QString::fromUtf8("btnInHelp"));

        gridLayout->addWidget(btnInHelp, 1, 1, 1, 1);

        btnInConf = new QToolButton(frame_2);
        btnInConf->setObjectName(QString::fromUtf8("btnInConf"));

        gridLayout->addWidget(btnInConf, 1, 2, 1, 1);

        line = new QFrame(frame_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 3, 1, 1);

        splitter->addWidget(frame_2);
        frame_3 = new QFrame(splitter);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cmbOutSel = new QComboBox(frame_3);
        cmbOutSel->setObjectName(QString::fromUtf8("cmbOutSel"));
        cmbOutSel->setMinimumSize(QSize(120, 0));

        gridLayout_2->addWidget(cmbOutSel, 0, 0, 1, 1);

        btnOutHelp = new QToolButton(frame_3);
        btnOutHelp->setObjectName(QString::fromUtf8("btnOutHelp"));

        gridLayout_2->addWidget(btnOutHelp, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        editOut = new QTextEdit(frame_3);
        editOut->setObjectName(QString::fromUtf8("editOut"));
        editOut->setReadOnly(false);

        gridLayout_2->addWidget(editOut, 1, 0, 1, 5);

        btnOutConf = new QToolButton(frame_3);
        btnOutConf->setObjectName(QString::fromUtf8("btnOutConf"));

        gridLayout_2->addWidget(btnOutConf, 0, 2, 1, 1);

        line_3 = new QFrame(frame_3);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy3);
        line_3->setMinimumSize(QSize(10, 20));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 0, 3, 1, 1);

        splitter->addWidget(frame_3);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actSrcConnect->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        actAppConf->setText(QApplication::translate("MainWindow", "Conf", 0, QApplication::UnicodeUTF8));
        actAppExit->setText(QApplication::translate("MainWindow", "exit", 0, QApplication::UnicodeUTF8));
        actAppHelp->setText(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        actSrcHelp->setText(QApplication::translate("MainWindow", "Source Help", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actSrcHelp->setToolTip(QApplication::translate("MainWindow", "See info for selected input source", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actInHelp->setText(QApplication::translate("MainWindow", "Input Method Help", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actInHelp->setToolTip(QApplication::translate("MainWindow", "See info for selected input method", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actOutHelp->setText(QApplication::translate("MainWindow", "Output Method Help", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actOutHelp->setToolTip(QApplication::translate("MainWindow", "See info for selected output method", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actSrcConf->setText(QApplication::translate("MainWindow", "Source Config", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actSrcConf->setToolTip(QApplication::translate("MainWindow", "Additional source settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actInConf->setText(QApplication::translate("MainWindow", "Input Config", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actInConf->setToolTip(QApplication::translate("MainWindow", "Additional input method settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actOutConf->setText(QApplication::translate("MainWindow", "Output Config", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actOutConf->setToolTip(QApplication::translate("MainWindow", "Additional output method settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actShowInHist->setText(QApplication::translate("MainWindow", "Show History", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actShowInHist->setToolTip(QApplication::translate("MainWindow", "Show history ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actShowMacros->setText(QApplication::translate("MainWindow", "Show Predefined Macros", 0, QApplication::UnicodeUTF8));
        btnSrcHelp->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        btnSrcConf->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        btnInConnect->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        btnAppExit->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        btnShowInHist->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        btnInSend->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        btnShowMacros->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        btnInHelp->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        btnInConf->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        btnOutHelp->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        btnOutConf->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RS232TESTNG_H
