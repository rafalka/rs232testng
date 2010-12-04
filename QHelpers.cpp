/******************************************************************************
 * @file     QHelpers.cpp
 * 
 * @brief    
 * 
 * @date     04-12-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#include "QHelpers.h"

QStandardItem* genStandardItem(const QString& Title, const char* IconResPath, int ID)
{
    QStandardItem *item = new QStandardItem(Title);
    if (IconResPath)
    {
        QIcon* icon = new QIcon(IconResPath);

        if (icon)
        {
            item->setIcon(*icon);
        }
    }

    item->setData(ID,Qt::UserRole);

    return item;
}


QStandardItem* genStandardItemSeparator()
{
    QStandardItem *item = new QStandardItem();
    item->setData( QString::fromLatin1("separator"), Qt::AccessibleDescriptionRole );
    item->setFlags(item->flags() & ~(Qt::ItemIsSelectable|Qt::ItemIsEnabled) );

    return item;
}
