/********************************************************************************
** Form generated from reading UI file 'QInputProviderManager.ui'
**
** Created: Fri 3. Dec 21:48:35 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QINPUTPROVIDERMANAGER_H
#define UI_QINPUTPROVIDERMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_QInputProviderManager
{
public:
    QAction *actInHelp;
    QAction *actInConf;
    QAction *actInSend;
    QAction *actShowInHist;
    QAction *actShowMacros;
    QGridLayout *gridLayout;
    QToolButton *btnShowInHist;
    QPlainTextEdit *editIn;
    QComboBox *cmbInSel;
    QToolButton *btnShowMacros;
    QToolButton *btnInSend;
    QFrame *outCtrlFrame;
    QFrame *line;

    void setupUi(QFrame *QInputProviderManager)
    {
        if (QInputProviderManager->objectName().isEmpty())
            QInputProviderManager->setObjectName(QString::fromUtf8("QInputProviderManager"));
        QInputProviderManager->resize(626, 114);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QInputProviderManager->sizePolicy().hasHeightForWidth());
        QInputProviderManager->setSizePolicy(sizePolicy);
        QInputProviderManager->setFrameShape(QFrame::Box);
        QInputProviderManager->setFrameShadow(QFrame::Sunken);
        actInHelp = new QAction(QInputProviderManager);
        actInHelp->setObjectName(QString::fromUtf8("actInHelp"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/16/res/16/dialog-information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actInHelp->setIcon(icon);
        actInConf = new QAction(QInputProviderManager);
        actInConf->setObjectName(QString::fromUtf8("actInConf"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/16/res/16/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actInConf->setIcon(icon1);
        actInSend = new QAction(QInputProviderManager);
        actInSend->setObjectName(QString::fromUtf8("actInSend"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/22/res/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        actInSend->setIcon(icon2);
        actShowInHist = new QAction(QInputProviderManager);
        actShowInHist->setObjectName(QString::fromUtf8("actShowInHist"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/16/res/16/arrow-down-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actShowInHist->setIcon(icon3);
        actShowMacros = new QAction(QInputProviderManager);
        actShowMacros->setObjectName(QString::fromUtf8("actShowMacros"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/buttons/16/res/16/arrow-left-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actShowMacros->setIcon(icon4);
        gridLayout = new QGridLayout(QInputProviderManager);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        btnShowInHist = new QToolButton(QInputProviderManager);
        btnShowInHist->setObjectName(QString::fromUtf8("btnShowInHist"));
        btnShowInHist->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btnShowInHist, 9, 5, 1, 1);

        editIn = new QPlainTextEdit(QInputProviderManager);
        editIn->setObjectName(QString::fromUtf8("editIn"));
        editIn->setMinimumSize(QSize(120, 48));

        gridLayout->addWidget(editIn, 6, 0, 4, 5);

        cmbInSel = new QComboBox(QInputProviderManager);
        cmbInSel->setObjectName(QString::fromUtf8("cmbInSel"));
        cmbInSel->setMinimumSize(QSize(120, 0));
        cmbInSel->setMouseTracking(true);
        cmbInSel->setEditable(false);
        cmbInSel->setDuplicatesEnabled(true);
        cmbInSel->setModelColumn(0);

        gridLayout->addWidget(cmbInSel, 1, 0, 1, 1);

        btnShowMacros = new QToolButton(QInputProviderManager);
        btnShowMacros->setObjectName(QString::fromUtf8("btnShowMacros"));
        btnShowMacros->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btnShowMacros, 8, 5, 1, 1);

        btnInSend = new QToolButton(QInputProviderManager);
        btnInSend->setObjectName(QString::fromUtf8("btnInSend"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        btnInSend->setFont(font);
        btnInSend->setIconSize(QSize(22, 22));
        btnInSend->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btnInSend, 6, 5, 1, 1);

        outCtrlFrame = new QFrame(QInputProviderManager);
        outCtrlFrame->setObjectName(QString::fromUtf8("outCtrlFrame"));
        outCtrlFrame->setFrameShape(QFrame::StyledPanel);
        outCtrlFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(outCtrlFrame, 1, 2, 1, 4);

        line = new QFrame(QInputProviderManager);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 1, 1, 1);


        retranslateUi(QInputProviderManager);

        QMetaObject::connectSlotsByName(QInputProviderManager);
    } // setupUi

    void retranslateUi(QFrame *QInputProviderManager)
    {
        actInHelp->setText(QApplication::translate("QInputProviderManager", "Input Method Help", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actInHelp->setToolTip(QApplication::translate("QInputProviderManager", "See info for selected input method", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actInConf->setText(QApplication::translate("QInputProviderManager", "Input Config", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actInConf->setToolTip(QApplication::translate("QInputProviderManager", "Additional input method settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actInSend->setText(QApplication::translate("QInputProviderManager", "Send", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actInSend->setToolTip(QApplication::translate("QInputProviderManager", "Send data", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actShowInHist->setText(QApplication::translate("QInputProviderManager", "History", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actShowInHist->setToolTip(QApplication::translate("QInputProviderManager", "Show history ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actShowMacros->setText(QApplication::translate("QInputProviderManager", "Macros", 0, QApplication::UnicodeUTF8));
        btnShowInHist->setText(QApplication::translate("QInputProviderManager", "History", 0, QApplication::UnicodeUTF8));
        cmbInSel->clear();
        cmbInSel->insertItems(0, QStringList()
         << QApplication::translate("QInputProviderManager", "Ala", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QInputProviderManager", "Kot", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        cmbInSel->setToolTip(QApplication::translate("QInputProviderManager", "TOOLTIP\\", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbInSel->setStatusTip(QApplication::translate("QInputProviderManager", "DUPA", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        btnShowMacros->setText(QApplication::translate("QInputProviderManager", "Macros", 0, QApplication::UnicodeUTF8));
        btnInSend->setText(QApplication::translate("QInputProviderManager", "Send", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QInputProviderManager);
    } // retranslateUi

};

namespace Ui {
    class QInputProviderManager: public Ui_QInputProviderManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QINPUTPROVIDERMANAGER_H
