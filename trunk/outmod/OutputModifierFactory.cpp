/******************************************************************************
 * @file     OutputModifierFactory.cpp
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

#include "OutputModifierFactory.h"
#include "TextToHtmlModifier.h"
#include "HexToHtmlModifier.h"

#include "QHelpers.h"

OutputModifierFactory OutputModifierFactory::s;

enum providers {
    PR_BADVAL,
    PR_RAWTEXT,
    PR_HEX,
    PR_INTCONFIG,
    PR_LASTVAL
};

DataProvider* OutputModifierFactory::GetProviderFromIndex(int idx)
{
    const QStandardItem *item = itemsInfoList->item(idx);
    if (!item ) return NULL;

    DataProvider* provider;
    switch( item->data(Qt::UserRole).toInt() )
    {
    case PR_RAWTEXT:
        provider = new TextToHtmlModifier();
        break;
    case PR_HEX:
        provider = new HexToHtmlModifier();
        break;

    /*case PR_INTCONFIG:
        break;*/

    default:
        provider = NULL;
    }

    return provider;
}

void OutputModifierFactory::genItemsInfoList()
{
    if (! itemsInfoList)  itemsInfoList =  new QStandardItemModel(0,1);

    itemsInfoList->appendRow( genStandardItem( TextToHtmlModifier::myDisplayName , "", PR_RAWTEXT) );
    itemsInfoList->appendRow( genStandardItem( HexToHtmlModifier::myDisplayName , "", PR_HEX) );

    itemsInfoList->appendRow( genStandardItem( "DUPA" , "", PR_RAWTEXT) );
// For Further use...
    itemsInfoList->appendRow( genStandardItemSeparator() );
    itemsInfoList->appendRow( genStandardItem( QObject::tr("Configure External filters...") , ":/buttons/16/res/16/configure.png", PR_INTCONFIG) );
}


OutputModifierFactory::OutputModifierFactory()
{
	// TODO Auto-generated constructor stub

}
/*
OutputModifierFactory::~OutputModifierFactory()
{
	// TODO Auto-generated destructor stub
}
*/
