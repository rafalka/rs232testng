/********************************************************************************
** Form generated from reading UI file 'SerialSourceProvider.ui'
**
** Created: Sat 4. Dec 23:43:08 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALSOURCEPROVIDER_H
#define UI_SERIALSOURCEPROVIDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *editSrcAddress;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnSrcConn;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(400, 32);
        horizontalLayout = new QHBoxLayout(Form);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editSrcAddress = new QComboBox(Form);
        editSrcAddress->setObjectName(QString::fromUtf8("editSrcAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editSrcAddress->sizePolicy().hasHeightForWidth());
        editSrcAddress->setSizePolicy(sizePolicy);
        editSrcAddress->setEditable(true);

        horizontalLayout->addWidget(editSrcAddress);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSrcConn = new QToolButton(Form);
        btnSrcConn->setObjectName(QString::fromUtf8("btnSrcConn"));
        btnSrcConn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(btnSrcConn);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        btnSrcConn->setText(QApplication::translate("Form", "Connect", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALSOURCEPROVIDER_H
