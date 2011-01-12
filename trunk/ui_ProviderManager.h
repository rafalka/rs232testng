/********************************************************************************
** Form generated from reading UI file 'ProviderManager.ui'
**
** Created: Wed 12. Jan 21:48:58 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROVIDERMANAGER_H
#define UI_PROVIDERMANAGER_H

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

class Ui_ProviderManagerUI
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbOutSel;
    QFrame *line_3;
    QWidget *outCtrlPanel;

    void setupUi(QWidget *ProviderManagerUI)
    {
        if (ProviderManagerUI->objectName().isEmpty())
            ProviderManagerUI->setObjectName(QString::fromUtf8("ProviderManagerUI"));
        ProviderManagerUI->resize(654, 28);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProviderManagerUI->sizePolicy().hasHeightForWidth());
        ProviderManagerUI->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(ProviderManagerUI);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cmbOutSel = new QComboBox(ProviderManagerUI);
        cmbOutSel->setObjectName(QString::fromUtf8("cmbOutSel"));
        cmbOutSel->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(cmbOutSel);

        line_3 = new QFrame(ProviderManagerUI);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy1);
        line_3->setMinimumSize(QSize(10, 20));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);

        outCtrlPanel = new QWidget(ProviderManagerUI);
        outCtrlPanel->setObjectName(QString::fromUtf8("outCtrlPanel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(outCtrlPanel->sizePolicy().hasHeightForWidth());
        outCtrlPanel->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(outCtrlPanel);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 4);

        retranslateUi(ProviderManagerUI);

        QMetaObject::connectSlotsByName(ProviderManagerUI);
    } // setupUi

    void retranslateUi(QWidget *ProviderManagerUI)
    {
        ProviderManagerUI->setWindowTitle(QApplication::translate("ProviderManagerUI", "OutputModifierManager", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProviderManagerUI: public Ui_ProviderManagerUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROVIDERMANAGER_H
