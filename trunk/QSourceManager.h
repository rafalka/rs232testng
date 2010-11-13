/******************************************************************************
 * @file     QSourceManager.h
 * 
 * @brief    
 * 
 * @date     12-11-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#ifndef QSOURCEMANAGER_H_
#define QSOURCEMANAGER_H_

#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QComboBox>
/*
 *
 */
class QSourceManager: public QObject
{
	Q_OBJECT
private:
	QComboBox*   cmbSourceSelect;
	QAction*     actShowHelp;
	QAction*     actShowConf;
	QComboBox*   cmbAddressEdit;
	QAction*     actRun;

	void         connectSourceSelect();
	void         connectShowHelp();
	void         connectShowConf();
	void         connectAddressEdit();
	void         connectRunAction();

public slots:
	void         actRunTriggered();

public:
	QSourceManager(
					QComboBox*   cmbSourceSelect,
					QAction*     aactShowHelp,
					QAction*     actShowConf,
					QComboBox*   cmbAddressEdit,
					QAction*     actRun
					);
	//virtual ~QSourceManager();
};

#endif /* QSOURCEMANAGER_H_ */
