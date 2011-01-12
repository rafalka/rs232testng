/********************************************************************************
** Form generated from reading UI file 'InputModifierManager.ui'
**
** Created: Wed 12. Jan 21:48:58 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTMODIFIERMANAGER_H
#define UI_INPUTMODIFIERMANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputModifierManagerUI
{
public:
    QAction *actInHelp;
    QAction *actInConf;
    QAction *actInSend;
    QAction *actShowInHist;
    QAction *actShowMacros;
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbInSel;
    QFrame *line;
    QFrame *outCtrlFrame;

    void setupUi(QWidget *InputModifierManagerUI)
    {
        if (InputModifierManagerUI->objectName().isEmpty())
            InputModifierManagerUI->setObjectName(QString::fromUtf8("InputModifierManagerUI"));
        InputModifierManagerUI->resize(383, 28);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InputModifierManagerUI->sizePolicy().hasHeightForWidth());
        InputModifierManagerUI->setSizePolicy(sizePolicy);
        actInHelp = new QAction(InputModifierManagerUI);
        actInHelp->setObjectName(QString::fromUtf8("actInHelp"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/16/res/16/dialog-information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actInHelp->setIcon(icon);
        actInConf = new QAction(InputModifierManagerUI);
        actInConf->setObjectName(QString::fromUtf8("actInConf"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/16/res/16/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actInConf->setIcon(icon1);
        actInSend = new QAction(InputModifierManagerUI);
        actInSend->setObjectName(QString::fromUtf8("actInSend"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/22/res/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        actInSend->setIcon(icon2);
        actShowInHist = new QAction(InputModifierManagerUI);
        actShowInHist->setObjectName(QString::fromUtf8("actShowInHist"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/16/res/16/arrow-down-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actShowInHist->setIcon(icon3);
        actShowMacros = new QAction(InputModifierManagerUI);
        actShowMacros->setObjectName(QString::fromUtf8("actShowMacros"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/buttons/16/res/16/arrow-left-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actShowMacros->setIcon(icon4);
        horizontalLayout = new QHBoxLayout(InputModifierManagerUI);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cmbInSel = new QComboBox(InputModifierManagerUI);
        cmbInSel->setObjectName(QString::fromUtf8("cmbInSel"));
        cmbInSel->setMinimumSize(QSize(120, 0));
        cmbInSel->setSizeIncrement(QSize(0, 0));
        cmbInSel->setBaseSize(QSize(0, 0));
        cmbInSel->setMouseTracking(true);
        cmbInSel->setEditable(false);
        cmbInSel->setDuplicatesEnabled(true);
        cmbInSel->setModelColumn(0);

        horizontalLayout->addWidget(cmbInSel);

        line = new QFrame(InputModifierManagerUI);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        outCtrlFrame = new QFrame(InputModifierManagerUI);
        outCtrlFrame->setObjectName(QString::fromUtf8("outCtrlFrame"));
        outCtrlFrame->setFrameShape(QFrame::StyledPanel);
        outCtrlFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(outCtrlFrame);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 4);

        retranslateUi(InputModifierManagerUI);

        QMetaObject::connectSlotsByName(InputModifierManagerUI);
    } // setupUi

    void retranslateUi(QWidget *InputModifierManagerUI)
    {
        actInHelp->setText(QApplication::translate("InputModifierManagerUI", "Input Method Help", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actInHelp->setToolTip(QApplication::translate("InputModifierManagerUI", "See info for selected input method", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actInConf->setText(QApplication::translate("InputModifierManagerUI", "Input Config", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actInConf->setToolTip(QApplication::translate("InputModifierManagerUI", "Additional input method settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actInSend->setText(QApplication::translate("InputModifierManagerUI", "Send", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actInSend->setToolTip(QApplication::translate("InputModifierManagerUI", "Send data", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actShowInHist->setText(QApplication::translate("InputModifierManagerUI", "History", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actShowInHist->setToolTip(QApplication::translate("InputModifierManagerUI", "Show history ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actShowMacros->setText(QApplication::translate("InputModifierManagerUI", "Macros", 0, QApplication::UnicodeUTF8));
        cmbInSel->clear();
        cmbInSel->insertItems(0, QStringList()
         << QApplication::translate("InputModifierManagerUI", "Ala", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("InputModifierManagerUI", "Kot", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        cmbInSel->setToolTip(QApplication::translate("InputModifierManagerUI", "TOOLTIP\\", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        cmbInSel->setStatusTip(QApplication::translate("InputModifierManagerUI", "DUPA", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        Q_UNUSED(InputModifierManagerUI);
    } // retranslateUi

};

namespace Ui {
    class InputModifierManagerUI: public Ui_InputModifierManagerUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTMODIFIERMANAGER_H
