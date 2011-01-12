/********************************************************************************
** Form generated from reading UI file 'TextEnterInputProvider.ui'
**
** Created: Wed 12. Jan 22:57:34 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTENTERINPUTPROVIDER_H
#define UI_TEXTENTERINPUTPROVIDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEnterInputProviderUI
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
    QToolButton *btnShowMacros;
    QToolButton *btnInSend;

    void setupUi(QWidget *TextEnterInputProviderUI)
    {
        if (TextEnterInputProviderUI->objectName().isEmpty())
            TextEnterInputProviderUI->setObjectName(QString::fromUtf8("TextEnterInputProviderUI"));
        TextEnterInputProviderUI->resize(626, 114);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TextEnterInputProviderUI->sizePolicy().hasHeightForWidth());
        TextEnterInputProviderUI->setSizePolicy(sizePolicy);
        actInHelp = new QAction(TextEnterInputProviderUI);
        actInHelp->setObjectName(QString::fromUtf8("actInHelp"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/buttons/16/res/16/dialog-information.png"), QSize(), QIcon::Normal, QIcon::Off);
        actInHelp->setIcon(icon);
        actInConf = new QAction(TextEnterInputProviderUI);
        actInConf->setObjectName(QString::fromUtf8("actInConf"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/buttons/16/res/16/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actInConf->setIcon(icon1);
        actInSend = new QAction(TextEnterInputProviderUI);
        actInSend->setObjectName(QString::fromUtf8("actInSend"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/buttons/22/res/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        actInSend->setIcon(icon2);
        actShowInHist = new QAction(TextEnterInputProviderUI);
        actShowInHist->setObjectName(QString::fromUtf8("actShowInHist"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/buttons/16/res/16/arrow-down-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actShowInHist->setIcon(icon3);
        actShowMacros = new QAction(TextEnterInputProviderUI);
        actShowMacros->setObjectName(QString::fromUtf8("actShowMacros"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/buttons/16/res/16/arrow-left-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        actShowMacros->setIcon(icon4);
        gridLayout = new QGridLayout(TextEnterInputProviderUI);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnShowInHist = new QToolButton(TextEnterInputProviderUI);
        btnShowInHist->setObjectName(QString::fromUtf8("btnShowInHist"));
        btnShowInHist->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btnShowInHist, 8, 2, 1, 1);

        editIn = new QPlainTextEdit(TextEnterInputProviderUI);
        editIn->setObjectName(QString::fromUtf8("editIn"));
        editIn->setMinimumSize(QSize(120, 48));

        gridLayout->addWidget(editIn, 5, 0, 4, 2);

        btnShowMacros = new QToolButton(TextEnterInputProviderUI);
        btnShowMacros->setObjectName(QString::fromUtf8("btnShowMacros"));
        btnShowMacros->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btnShowMacros, 7, 2, 1, 1);

        btnInSend = new QToolButton(TextEnterInputProviderUI);
        btnInSend->setObjectName(QString::fromUtf8("btnInSend"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        btnInSend->setFont(font);
        btnInSend->setIconSize(QSize(22, 22));
        btnInSend->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btnInSend, 5, 2, 1, 1);


        retranslateUi(TextEnterInputProviderUI);

        QMetaObject::connectSlotsByName(TextEnterInputProviderUI);
    } // setupUi

    void retranslateUi(QWidget *TextEnterInputProviderUI)
    {
        actInHelp->setText(QApplication::translate("TextEnterInputProviderUI", "Input Method Help", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actInHelp->setToolTip(QApplication::translate("TextEnterInputProviderUI", "See info for selected input method", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actInConf->setText(QApplication::translate("TextEnterInputProviderUI", "Input Config", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actInConf->setToolTip(QApplication::translate("TextEnterInputProviderUI", "Additional input method settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actInSend->setText(QApplication::translate("TextEnterInputProviderUI", "Send", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actInSend->setToolTip(QApplication::translate("TextEnterInputProviderUI", "Send data", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actShowInHist->setText(QApplication::translate("TextEnterInputProviderUI", "History", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actShowInHist->setToolTip(QApplication::translate("TextEnterInputProviderUI", "Show history ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actShowMacros->setText(QApplication::translate("TextEnterInputProviderUI", "Macros", 0, QApplication::UnicodeUTF8));
        btnShowInHist->setText(QApplication::translate("TextEnterInputProviderUI", "History", 0, QApplication::UnicodeUTF8));
        btnShowMacros->setText(QApplication::translate("TextEnterInputProviderUI", "Macros", 0, QApplication::UnicodeUTF8));
        btnInSend->setText(QApplication::translate("TextEnterInputProviderUI", "Send", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(TextEnterInputProviderUI);
    } // retranslateUi

};

namespace Ui {
    class TextEnterInputProviderUI: public Ui_TextEnterInputProviderUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTENTERINPUTPROVIDER_H
