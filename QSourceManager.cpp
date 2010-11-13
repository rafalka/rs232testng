/******************************************************************************
 * @file     QSourceManager.cpp
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
#include <QtGlobal>
#include <QObject>
#include <QMessageBox>
#include <QStringList>

#include "QSourceManager.h"

QSourceManager::QSourceManager(
		QComboBox*   cmbSourceSelect,
		QAction*     aactShowHelp,
		QAction*     actShowConf,
		QComboBox*   cmbAddressEdit,
		QAction*     actRun
		):
		cmbSourceSelect(cmbSourceSelect),
		actShowHelp(aactShowHelp),
		actShowConf(actShowConf),
		cmbAddressEdit(cmbAddressEdit),
		actRun(actRun)
{
	// TODO Auto-generated constructor stub
	connectSourceSelect();
	connectShowConf();
	connectShowHelp();
	connectAddressEdit();
	connectRunAction();
}

void QSourceManager::connectShowHelp()
{
	// TODO Auto-generated method stub
}

void QSourceManager::connectAddressEdit()
{
	// TODO Auto-generated method stub
}

void QSourceManager::connectSourceSelect()
{
	// TODO Auto-generated method stub
	cmbSourceSelect->addItems( QStringList() << "Ala" << "Ma " << "Kota" );
}

void QSourceManager::connectShowConf()
{
	// TODO Auto-generated method stub
}

void QSourceManager::connectRunAction()
{
	// TODO Auto-generated method stub
	Q_ASSERT( QObject::connect(actShowHelp, SIGNAL( triggered() ),
			this,   SLOT( actRunTriggered() ) )
	 	 );
}
/*
QSourceManager::~QSourceManager()
{
	// TODO Auto-generated destructor stub
}
*/


void QSourceManager::actRunTriggered()
{
	 QMessageBox msgBox;
	 msgBox.setText("actRunTriggered!!!");
	 msgBox.exec();

}
