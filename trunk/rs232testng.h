#ifndef RS232TESTNG_H
#define RS232TESTNG_H

#include <QtGui/QMainWindow>
#include <QtGui/QToolBar>
#include <QComboBox>

#include "ui_rs232testng.h"

class rs232testng : public QMainWindow
{
    Q_OBJECT

public:
    rs232testng(QWidget *parent = 0);
    ~rs232testng();

private:
    QToolBar   *mainToolBar;
    QComboBox  *selCombo;

    Ui::MainWindow ui;
};

#endif // RS232TESTNG_H
