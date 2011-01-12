/******************************************************************************
 * @file     InputProviderFactory.cpp
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
#include "InputProviderFactory.h"

#include <QIcon>
#include <SourceProviderFactory.h>
#include <SerialSourceProvider.h>


#include "QHelpers.h"
// Instancing
InputProviderFactory InputProviderFactory::s;

/*
typedef bool (QObject::*InputProviderEnumCallback)(int            itemID,
                                                   const QString& name,
                                                   const QIcon*   icon,
                                                   QVariant*      cbParam );

int InputProviderFactory::EnumProviders(QObject& obj, InputProviderEnumCallback cb, QVariant* cbParam)
{
    if (!cb) return -1;

    (obj.*cb)(1,"Co",NULL,cbParam);
    (obj.*cb)(2,"Za",NULL,cbParam);
    (obj.*cb)(3,"Kupa!!!",NULL,cbParam);

    return 3;
}
*/

enum providers {
    PR_BADVAL,
    PR_RAWTEXT,
    PR_HEX,
    PR_INTCONFIG,
    PR_LASTVAL
};

DataProvider* InputProviderFactory::GetProviderFromIndex(int idx)
{
    const QStandardItem *item = itemsInfoList->item(idx);
    if (!item ) return NULL;

    DataProvider* provider;
    switch( item->data(Qt::UserRole).toInt() )
    {
/*
    case PR_RAWTEXT:
        provider = new TextToHtmlModifier();
        break;
    case PR_HEX:
        provider = new HexToHtmlModifier();
        break;
*/
    /*case PR_INTCONFIG:
        break;*/

    default:
        provider = NULL;
    }

    return provider;
}

QStandardItemModel* InputProviderFactory::genItemsInfoList()
{
    QStandardItemModel*  itemsInfoList =  new QStandardItemModel(0,1);

  //  itemsInfoList->appendRow( genStandardItem( TextToHtmlModifier::myDisplayName , "", PR_RAWTEXT) );
 //   itemsInfoList->appendRow( genStandardItem( HexToHtmlModifier::myDisplayName , "", PR_HEX) );

    itemsInfoList->appendRow( genStandardItem( "DUPA" , "", PR_RAWTEXT) );
// For Further use...
    itemsInfoList->appendRow( genStandardItemSeparator() );
    itemsInfoList->appendRow( genStandardItem( QObject::tr("Configure External filters...") , ":/buttons/16/res/16/configure.png", PR_INTCONFIG) );

    return itemsInfoList;
}

