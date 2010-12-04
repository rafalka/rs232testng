/******************************************************************************
 * @file     SourceProviderFactory.cpp
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

#include <QIcon>
#include <SourceProviderFactory.h>
#include <SerialSourceProvider.h>

#include "QHelpers.h"

// Instancing
SourceProviderFactory SourceProviderFactory::s;



enum providers {
    PR_BADVAL,
    PR_SERIAL,
    PR_INTCONFIG,
    PR_LASTVAL
};

void SourceProviderFactory::EnumProviders(GuiItemCmd& callbackCmd)
{
    callbackCmd.doWith( SerialSourceProvider::myDisplayName ,GuiItemCmd::NoIcon, PR_SERIAL );
    callbackCmd.doWith( GuiItemCmd::ItemSeparator);
    callbackCmd.doWith( QObject::tr("Config"),GuiItemCmd::NoIcon,PR_INTCONFIG);

}


DataProvider* SourceProviderFactory::GetProviderFromIndex(int idx)
{
    const QStandardItem *item = itemsInfoList->item(idx);
    if (!item ) return NULL;

    DataProvider* provider;
    switch( item->data(Qt::UserRole).toInt() )
    {
    case PR_SERIAL:
        provider = new SerialSourceProvider();
        break;

    /*case PR_INTCONFIG:
        break;*/

    default:
        provider = NULL;
    }

    return provider;
}

void SourceProviderFactory::genItemsInfoList()
{
    if (! itemsInfoList)  itemsInfoList =  new QStandardItemModel(0,1);

    itemsInfoList->appendRow( genStandardItem( SerialSourceProvider::myDisplayName , "", PR_SERIAL) );

    itemsInfoList->appendRow( genStandardItem( "DUPA" , "", PR_SERIAL) );
// For Further use...
    itemsInfoList->appendRow( genStandardItemSeparator() );
    itemsInfoList->appendRow( genStandardItem( QObject::tr("Configure Data sources...") , ":/buttons/16/res/16/configure.png", PR_INTCONFIG) );
}
SourceProviderFactory::SourceProviderFactory()
{
	// TODO Auto-generated constructor stub

}

SourceProviderFactory::~SourceProviderFactory()
{
    if (itemsInfoList) delete itemsInfoList;
	// TODO Auto-generated destructor stub
}
