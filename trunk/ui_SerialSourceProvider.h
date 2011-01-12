/********************************************************************************
** Form generated from reading UI file 'SerialSourceProvider.ui'
**
** Created: Wed 12. Jan 22:57:34 2011
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

class Ui_SerialSourceProviderUI
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *editSrcAddress;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnSrcConn;

    void setupUi(QWidget *SerialSourceProviderUI)
    {
        if (SerialSourceProviderUI->objectName().isEmpty())
            SerialSourceProviderUI->setObjectName(QString::fromUtf8("SerialSourceProviderUI"));
        SerialSourceProviderUI->resize(400, 32);
        horizontalLayout = new QHBoxLayout(SerialSourceProviderUI);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editSrcAddress = new QComboBox(SerialSourceProviderUI);
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

        btnSrcConn = new QToolButton(SerialSourceProviderUI);
        btnSrcConn->setObjectName(QString::fromUtf8("btnSrcConn"));
        btnSrcConn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(btnSrcConn);


        retranslateUi(SerialSourceProviderUI);

        QMetaObject::connectSlotsByName(SerialSourceProviderUI);
    } // setupUi

    void retranslateUi(QWidget *SerialSourceProviderUI)
    {
        SerialSourceProviderUI->setWindowTitle(QApplication::translate("SerialSourceProviderUI", "Form", 0, QApplication::UnicodeUTF8));
        btnSrcConn->setText(QApplication::translate("SerialSourceProviderUI", "Connect", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SerialSourceProviderUI: public Ui_SerialSourceProviderUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALSOURCEPROVIDER_H
