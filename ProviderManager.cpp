/******************************************************************************
 * @file     ProviderManager.cpp
 * 
 * @brief    
 * 
 * @date     12-01-2011
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2011 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#include "ProviderFactory.h"
#include "ProviderManager.h"
#include "ui_ProviderManager.h"

#include "DataProvider.h"
#include "QConfigStorage.h"
#include "StreamItem.h"



ProviderManager::~ProviderManager()
{
    try
    {
        if (ui) delete ui;
        configStore();
    }
    catch(...)
    {

    }
}
ProviderManager::ProviderManager(ProviderFactory& providersFactory):
    factory(providersFactory),
    ui(0),
    currentProvider(0),
    lastGoodProviderIdx(-1)
{

}



void ProviderManager::configRead()
{
    QConfigStorageGroupCreator config_group( metaObject()->className() );
    CONF_READ_VAL( lastGoodProviderIdx, 0 );
}

void ProviderManager::configStore()
{
    QConfigStorageGroupCreator config_group( metaObject()->className() );

    CONF_STORE_VAL( lastGoodProviderIdx );
}

void ProviderManager::SetupProviderUI()
{
    if (currentProvider)
    {
        Q_ASSERT( QObject::connect( currentProvider, SIGNAL( streamChanged(StreamItem*) ),
                this,   SLOT( onStreamChanged(StreamItem*) ) ) );

        if (ui) currentProvider->SetupUI(ui->outCtrlPanel);
    }
}

void ProviderManager::SetupUI(QWidget *parent)
{
    if (ui) delete ui;

    ui = new Ui::ProviderManagerUI();
    ui->setupUi(parent);

    Q_ASSERT( QObject::connect( ui->cmbOutSel, SIGNAL( activated(int) ),
            this,   SLOT( cmbSourceSelectActivated(int) ) ) );

    ui->cmbOutSel->setModel( factory.getItemsModel() );

    if (lastGoodProviderIdx<0)
    {
        configRead();
    }
    ui->cmbOutSel->setCurrentIndex(lastGoodProviderIdx);
    cmbSourceSelectActivated(lastGoodProviderIdx);
}

void ProviderManager::onStreamChanged(StreamItem* newStream)
{
    emit streamChanged( newStream );
}

void ProviderManager::setProvider(DataProvider* newProvider)
{
    DataProvider* tmpProvider = currentProvider;

    currentProvider = newProvider;

    // Emit signal
    //emit providerChanged(newProvider);

    emit streamChanged( (newProvider) ? newProvider->getDefaultStream() : 0 );

    if (tmpProvider) factory.ReleaseProvider(tmpProvider);

    SetupProviderUI();
}

void ProviderManager::cmbSourceSelectActivated( int index )
{
    DataProvider* tmpProvider = factory.GetProviderFromIndex(index);
    if (tmpProvider)
    {
        setProvider(tmpProvider);
        lastGoodProviderIdx = index;
    }
    else
    {
        if (!currentProvider) lastGoodProviderIdx = -1;
        if (ui) ui->cmbOutSel->setCurrentIndex(lastGoodProviderIdx);
    }

}


