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
    QComboBox*  getCmbSrcSel()  { return ui.cmbSrcSel; }
	QAction*    getActSrcHelp() { return ui.actSrcHelp; }
	QAction*    getActSrcConf() { return ui.actSrcConf; }
	QComboBox*  getCmbSrcAddr() { return ui.editSrcAddress; }
	QAction*    getActSrcConn() { return ui.actSrcConnect; }

    rs232testng(QWidget *parent = 0);
    ~rs232testng();

private:
    QToolBar   *mainToolBar;
    QComboBox  *selCombo;

    Ui::MainWindow ui;
};

#endif // RS232TESTNG_H
