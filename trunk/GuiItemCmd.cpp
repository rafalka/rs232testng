/******************************************************************************
 * @file     GuiItemCmd.cpp
 * 
 * @brief    
 * 
 * @date     22-11-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#include "GuiItemCmd.h"

const QString  GuiItemCmd::ItemSeparator = "-";
const QIcon    GuiItemCmd::NoIcon;
const QVariant GuiItemCmd::NoParam;

void ComboItemAddCmd::doWith(const QString& itemName, const QIcon& itemIcon, const QVariant& userParam )
{
    if ( &itemName ==  &GuiItemCmd::ItemSeparator )
    {
        obj->insertSeparator(65535);
    }
    else
    {
        if ( &itemIcon == &GuiItemCmd::NoIcon )
            obj->addItem( itemIcon, itemName, userParam);
        else
            obj->addItem( itemName, userParam);
    }

}

