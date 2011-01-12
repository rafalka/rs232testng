/******************************************************************************
 * @file     SourceProviderManager.cpp
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


#include "QConfigStorage.h"

#include "SourceProviderManager.h"
#include "SourceProviderFactory.h"


SourceProviderManager::SourceProviderManager():
		ui(0),
		currentProvider(NULL),
		lastGoodProviderIdx(0)
{
	//ComboItemAddCmd srcEnumerator(cmbSourceSelect);
	//SrcFac.EnumProviders( srcEnumerator );
    CONF_START_GROUP( SourceProviderManager );
    CONF_READ_VAL( lastGoodProviderIdx, 0 );

}

void SourceProviderManager::SetupProviderUI()
{
    if (currentProvider)
    {
        if (ui) currentProvider->SetupUI(ui->srcCtrlArea);
    }
}

void SourceProviderManager::SetupUI(QWidget *parent)
{
    if (ui) delete ui;

    ui = new Ui::SourceProviderManagerUI();
    ui->setupUi(parent);

    Q_ASSERT( QObject::connect( ui->cmbSrcSel, SIGNAL( activated(int) ),
            this,   SLOT( cmbSourceSelectActivated(int) ) ) );

    ui->cmbSrcSel->setModel( SrcFac.getItemsModel() );

    ui->cmbSrcSel->setCurrentIndex(lastGoodProviderIdx);
    cmbSourceSelectActivated( ui->cmbSrcSel->currentIndex() );

}

void SourceProviderManager::onStreamChanged(StreamItem* newStream)
{
    emit streamChanged( newStream );
}

void SourceProviderManager::setProvider(DataProvider* newProvider)
{
    DataProvider* tmpProvider = currentProvider;

    currentProvider = newProvider;

    //actShowHelp->setEnabled( newProvider->isOnHelpAllowed() );
    //actShowConf->setEnabled( newProvider->isOnConfigAllowed() );
    //cmbAddressEdit->setEditable( newProvider->isFreeAddrEditAllowed() );

    // Emit signal
    emit providerChanged(newProvider);

    emit streamChanged( (newProvider) ? newProvider->getDefaultStream() : 0 );

    //ui->srcCtrlArea->destroy(false,true);
    if (tmpProvider) SrcFac.ReleaseProvider(tmpProvider);

    if (currentProvider)
    {
        Q_ASSERT( QObject::connect( currentProvider, SIGNAL( streamChanged(StreamItem*) ),
                this,   SLOT( onStreamChanged(StreamItem*) ) ) );

        SetupProviderUI();
    }
}


void SourceProviderManager::actShowHelpTriggered()
{
    //if (currentProvider) currentProvider->onHelp();
}

void SourceProviderManager::actShowConfTriggered()
{
    //if (currentProvider) currentProvider->onConfig();
    //cmbAddressEdit->showPopup();

}

void SourceProviderManager::cmbSourceSelectActivated(int index)
{
    if (index>=0)
    {
        DataProvider* tmpProvider = SrcFac.GetProviderFromIndex(index);
        if (tmpProvider)
        {
            setProvider(tmpProvider);
            lastGoodProviderIdx = index;
        }
        else
        {
            if (!currentProvider) lastGoodProviderIdx = -1;
            if (ui) ui->cmbSrcSel->setCurrentIndex(lastGoodProviderIdx);
        }
    }
    else
    {
        // Release current provider if there's no valid selection
        setProvider(0);
        lastGoodProviderIdx = -1;
    }
}

void SourceProviderManager::cmbAddressEditActivated(int index)
{
}

/*
bool SourceProviderManager::SourcesEnumCallback(int itemID, const QString& name, const QIcon *icon, QVariant *cbParam)
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

SourceProviderManager::~SourceProviderManager()
{
    CONF_START_GROUP( SourceProviderManager );
    CONF_STORE_VAL( lastGoodProviderIdx );

    delete ui;
}


void SourceProviderManager::actRunTriggered()
{
    QMessageBox msgBox;
    msgBox.setText("actShowConfTriggered!!!");
    msgBox.exec();
}

#if 0
void SourceProviderManager::connectShowHelp()
{
    Q_ASSERT( QObject::connect( actShowHelp, SIGNAL( triggered() ),
            this,   SLOT( actShowHelpTriggered() ) ) );
}

void SourceProviderManager::connectAddressEdit()
{
    Q_ASSERT( QObject::connect( cmbAddressEdit, SIGNAL( activated(int) ),
            this,   SLOT( cmbAddressEditActivated(int) ) ) );
}

void SourceProviderManager::connectSourceSelect()
{
    Q_ASSERT( QObject::connect( cmbSourceSelect, SIGNAL( activated(int) ),
            this,   SLOT( cmbSourceSelectActivated(int) ) ) );
}

void SourceProviderManager::connectShowConf()
{
    Q_ASSERT( QObject::connect( actShowConf, SIGNAL( triggered() ),
            this,   SLOT( actShowConfTriggered() ) ) );
}

void SourceProviderManager::connectRunAction()
{
    Q_ASSERT( QObject::connect( actRun, SIGNAL( triggered() ),
            this,   SLOT( actRunTriggered() ) ) );
}
#endif
