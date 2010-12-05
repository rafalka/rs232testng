/********************************************************************************
** Form generated from reading UI file 'SourceProviderManager.ui'
**
** Created: Sun 5. Dec 12:55:48 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOURCEPROVIDERMANAGER_H
#define UI_SOURCEPROVIDERMANAGER_H

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

class Ui_SourceProviderManagerUI
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbSrcSel;
    QFrame *line_2;
    QWidget *srcCtrlArea;

    void setupUi(QWidget *SourceProviderManagerUI)
    {
        if (SourceProviderManagerUI->objectName().isEmpty())
            SourceProviderManagerUI->setObjectName(QString::fromUtf8("SourceProviderManagerUI"));
        SourceProviderManagerUI->resize(831, 37);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SourceProviderManagerUI->sizePolicy().hasHeightForWidth());
        SourceProviderManagerUI->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(SourceProviderManagerUI);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cmbSrcSel = new QComboBox(SourceProviderManagerUI);
        cmbSrcSel->setObjectName(QString::fromUtf8("cmbSrcSel"));
        cmbSrcSel->setMinimumSize(QSize(120, 0));
        cmbSrcSel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(cmbSrcSel);

        line_2 = new QFrame(SourceProviderManagerUI);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        srcCtrlArea = new QWidget(SourceProviderManagerUI);
        srcCtrlArea->setObjectName(QString::fromUtf8("srcCtrlArea"));

        horizontalLayout->addWidget(srcCtrlArea);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 4);

        retranslateUi(SourceProviderManagerUI);

        QMetaObject::connectSlotsByName(SourceProviderManagerUI);
    } // setupUi

    void retranslateUi(QWidget *SourceProviderManagerUI)
    {
        SourceProviderManagerUI->setWindowTitle(QApplication::translate("SourceProviderManagerUI", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SourceProviderManagerUI: public Ui_SourceProviderManagerUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOURCEPROVIDERMANAGER_H
