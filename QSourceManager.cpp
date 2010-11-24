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
#include "SourceProviderFactory.h"


QSourceManager::QSourceManager(
		QComboBox*   cmbSourceSelect,
		QAction*     actShowHelp,
		QAction*     actShowConf,
		QComboBox*   cmbAddressEdit,
		QAction*     actRun
		):
		currentProvider(NULL),
		cmbSourceSelect(cmbSourceSelect),
		actShowHelp(actShowHelp),
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

	ComboItemAddCmd srcEnumerator(cmbSourceSelect);
	SrcFac.EnumProviders( srcEnumerator );
}

void QSourceManager::setProvider(SourceProvider* newProvider)
{
    SourceProvider* tmpProvider = currentProvider;

    currentProvider = newProvider;

    if (tmpProvider) SrcFac.ReleaseProvider(tmpProvider);

    actShowHelp->setEnabled( newProvider->isOnHelpAllowed() );
    actShowConf->setEnabled( newProvider->isOnConfigAllowed() );
    cmbAddressEdit->setEditable( newProvider->isFreeAddrEditAllowed() );
}

void QSourceManager::actShowHelpTriggered()
{
    if (currentProvider) currentProvider->onHelp();
}

void QSourceManager::actShowConfTriggered()
{
    if (currentProvider) currentProvider->onConfig();
    cmbAddressEdit->showPopup();

}

void QSourceManager::cmbSourceSelectActivated(int index)
{
}

void QSourceManager::cmbAddressEditActivated(int index)
{
}

/*
bool QSourceManager::SourcesEnumCallback(int itemID, const QString& name, const QIcon *icon, QVariant *cbParam)
{
    if ( !name.isEmpty() )
    {
        if (icon)
            cmbSourceSelect->addItem( *icon, name, itemID);
        else
            cmbSourceSelect->addItem( name, itemID);
    }
    else
    {
        cmbSourceSelect->insertSeparator(65535);
    }

    return true;
}
*/

/*
QSourceManager::~QSourceManager()
{
	// TODO Auto-generated destructor stub
}
*/


void QSourceManager::actRunTriggered()
{
    QMessageBox msgBox;
    msgBox.setText("actShowConfTriggered!!!");
    msgBox.exec();
}


void QSourceManager::connectShowHelp()
{
    Q_ASSERT( QObject::connect( actShowHelp, SIGNAL( triggered() ),
            this,   SLOT( actShowHelpTriggered() ) ) );
}

void QSourceManager::connectAddressEdit()
{
    Q_ASSERT( QObject::connect( cmbAddressEdit, SIGNAL( activated(int) ),
            this,   SLOT( cmbAddressEditActivated(int) ) ) );
}

void QSourceManager::connectSourceSelect()
{
    Q_ASSERT( QObject::connect( cmbSourceSelect, SIGNAL( activated(int) ),
            this,   SLOT( cmbSourceSelectActivated(int) ) ) );
}

void QSourceManager::connectShowConf()
{
    Q_ASSERT( QObject::connect( actShowConf, SIGNAL( triggered() ),
            this,   SLOT( actShowConfTriggered() ) ) );
}

void QSourceManager::connectRunAction()
{
    Q_ASSERT( QObject::connect( actRun, SIGNAL( triggered() ),
            this,   SLOT( actRunTriggered() ) ) );
}
