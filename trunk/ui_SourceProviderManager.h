/********************************************************************************
** Form generated from reading UI file 'SourceProviderManager.ui'
**
** Created: Sat 4. Dec 23:43:08 2010
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
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SourceProviderManagerUI
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *cmbSrcSel;
    QFrame *line_2;
    QWidget *srcCtrlArea;
    QFrame *line_4;
    QToolButton *btnAppExit;

    void setupUi(QWidget *SourceProviderManagerUI)
    {
        if (SourceProviderManagerUI->objectName().isEmpty())
            SourceProviderManagerUI->setObjectName(QString::fromUtf8("SourceProviderManagerUI"));
        SourceProviderManagerUI->resize(400, 33);
        horizontalLayout = new QHBoxLayout(SourceProviderManagerUI);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cmbSrcSel = new QComboBox(SourceProviderManagerUI);
        cmbSrcSel->setObjectName(QString::fromUtf8("cmbSrcSel"));
        cmbSrcSel->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(cmbSrcSel);

        line_2 = new QFrame(SourceProviderManagerUI);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        srcCtrlArea = new QWidget(SourceProviderManagerUI);
        srcCtrlArea->setObjectName(QString::fromUtf8("srcCtrlArea"));

        horizontalLayout->addWidget(srcCtrlArea);

        line_4 = new QFrame(SourceProviderManagerUI);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        btnAppExit = new QToolButton(SourceProviderManagerUI);
        btnAppExit->setObjectName(QString::fromUtf8("btnAppExit"));

        horizontalLayout->addWidget(btnAppExit);


        retranslateUi(SourceProviderManagerUI);

        QMetaObject::connectSlotsByName(SourceProviderManagerUI);
    } // setupUi

    void retranslateUi(QWidget *SourceProviderManagerUI)
    {
        SourceProviderManagerUI->setWindowTitle(QApplication::translate("SourceProviderManagerUI", "Form", 0, QApplication::UnicodeUTF8));
        btnAppExit->setText(QApplication::translate("SourceProviderManagerUI", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SourceProviderManagerUI: public Ui_SourceProviderManagerUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOURCEPROVIDERMANAGER_H
