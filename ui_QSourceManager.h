/********************************************************************************
** Form generated from reading UI file 'SourceProviderManager.ui'
**
** Created: Sat 4. Dec 16:41:50 2010
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
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SourceProviderManagerUI
{
public:
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

        btnSrcHelp = new QToolButton(SourceProviderManagerUI);
        btnSrcHelp->setObjectName(QString::fromUtf8("btnSrcHelp"));

        horizontalLayout->addWidget(btnSrcHelp);

        btnSrcConf = new QToolButton(SourceProviderManagerUI);
        btnSrcConf->setObjectName(QString::fromUtf8("btnSrcConf"));

        horizontalLayout->addWidget(btnSrcConf);

        line_2 = new QFrame(SourceProviderManagerUI);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        editSrcAddress = new QComboBox(SourceProviderManagerUI);
        editSrcAddress->setObjectName(QString::fromUtf8("editSrcAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editSrcAddress->sizePolicy().hasHeightForWidth());
        editSrcAddress->setSizePolicy(sizePolicy);
        editSrcAddress->setEditable(true);

        horizontalLayout->addWidget(editSrcAddress);

        btnSrcConn = new QToolButton(SourceProviderManagerUI);
        btnSrcConn->setObjectName(QString::fromUtf8("btnSrcConn"));
        btnSrcConn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(btnSrcConn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

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
        btnSrcHelp->setText(QApplication::translate("SourceProviderManagerUI", "?", 0, QApplication::UnicodeUTF8));
        btnSrcConf->setText(QApplication::translate("SourceProviderManagerUI", "H", 0, QApplication::UnicodeUTF8));
        btnSrcConn->setText(QApplication::translate("SourceProviderManagerUI", "Connect", 0, QApplication::UnicodeUTF8));
        btnAppExit->setText(QApplication::translate("SourceProviderManagerUI", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SourceProviderManagerUI: public Ui_SourceProviderManagerUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOURCEPROVIDERMANAGER_H
