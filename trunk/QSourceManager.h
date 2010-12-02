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

#include "SourceProvider.h"
/*
 *
 */
class QSourceManager: public QObject
{
	Q_OBJECT
private:
	SourceProvider* currentProvider;

	QComboBox*   cmbSourceSelect;
	QAction*     actShowHelp;
	QAction*     actShowConf;
	QComboBox*   cmbAddressEdit;
	QAction*     actRun;

	int          lastGoodSourceSelectIdx;
	void         connectSourceSelect();
	void         connectShowHelp();
	void         connectShowConf();
	void         connectAddressEdit();
	void         connectRunAction();

	void         setProvider(SourceProvider* newProvider);

	bool         SourcesEnumCallback(int itemID,
                    const QString& name,
                    const QIcon*   icon,
                    QVariant*      cbParam );
public slots:
	void         actShowHelpTriggered();
    void         actShowConfTriggered();
	void         actRunTriggered();
	void         cmbSourceSelectActivated( int index );
    void         cmbAddressEditActivated( int index );

signals:
    void         providerChanged(SourceProvider* newProvider);

public:
	QSourceManager(
					QComboBox*   cmbSourceSelect,
					QAction*     aactShowHelp,
					QAction*     actShowConf,
					QComboBox*   cmbAddressEdit,
					QAction*     actRun
					);

	SourceProvider* getCurrentProvider() { return currentProvider; }

	//virtual ~QSourceManager();
};

#endif /* QSOURCEMANAGER_H_ */
