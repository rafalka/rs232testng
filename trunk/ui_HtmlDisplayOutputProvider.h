/********************************************************************************
** Form generated from reading UI file 'HtmlDisplayOutputProvider.ui'
**
** Created: Fri 3. Dec 23:47:38 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HTMLDISPLAYOUTPUTPROVIDER_H
#define UI_HTMLDISPLAYOUTPUTPROVIDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HtmlDisplayOutputProviderUI
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *editOut;

    void setupUi(QWidget *HtmlDisplayOutputProviderUI)
    {
        if (HtmlDisplayOutputProviderUI->objectName().isEmpty())
            HtmlDisplayOutputProviderUI->setObjectName(QString::fromUtf8("HtmlDisplayOutputProviderUI"));
        HtmlDisplayOutputProviderUI->resize(481, 353);
        verticalLayout = new QVBoxLayout(HtmlDisplayOutputProviderUI);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editOut = new QTextEdit(HtmlDisplayOutputProviderUI);
        editOut->setObjectName(QString::fromUtf8("editOut"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editOut->sizePolicy().hasHeightForWidth());
        editOut->setSizePolicy(sizePolicy);
        editOut->setReadOnly(false);

        verticalLayout->addWidget(editOut);


        retranslateUi(HtmlDisplayOutputProviderUI);

        QMetaObject::connectSlotsByName(HtmlDisplayOutputProviderUI);
    } // setupUi

    void retranslateUi(QWidget *HtmlDisplayOutputProviderUI)
    {
        HtmlDisplayOutputProviderUI->setWindowTitle(QApplication::translate("HtmlDisplayOutputProviderUI", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HtmlDisplayOutputProviderUI: public Ui_HtmlDisplayOutputProviderUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HTMLDISPLAYOUTPUTPROVIDER_H
