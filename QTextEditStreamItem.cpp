/******************************************************************************
 * @file     QTextEditStreamItem.cpp
 * 
 * @brief    
 * 
 * @date     24-11-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#include "QTextEditStreamItem.h"

void QTextEditStreamItem::Triggered()
{
    if ( source && isConnected() )
    {
        Flush( new DataChunk( source->toPlainText() ) );
    }
}
