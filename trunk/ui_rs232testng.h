/********************************************************************************
** Form generated from reading UI file 'rs232testng.ui'
**
** Created: Mon 8. Nov 20:19:08 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RS232TESTNG_H
#define UI_RS232TESTNG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rs232testngClass
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *rs232testngClass)
    {
        if (rs232testngClass->objectName().isEmpty())
            rs232testngClass->setObjectName(QString::fromUtf8("rs232testngClass"));
        rs232testngClass->resize(800, 600);
        centralwidget = new QWidget(rs232testngClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        rs232testngClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(rs232testngClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        rs232testngClass->setMenuBar(menubar);
        statusbar = new QStatusBar(rs232testngClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        rs232testngClass->setStatusBar(statusbar);

        retranslateUi(rs232testngClass);

        QMetaObject::connectSlotsByName(rs232testngClass);
    } // setupUi

    void retranslateUi(QMainWindow *rs232testngClass)
    {
        rs232testngClass->setWindowTitle(QApplication::translate("rs232testngClass", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rs232testngClass: public Ui_rs232testngClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RS232TESTNG_H
