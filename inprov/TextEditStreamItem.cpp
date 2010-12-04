/******************************************************************************
 * @file     TextEditStreamItem.cpp
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

#include "TextEditStreamItem.h"

void TextEditStreamItem::Triggered()
{
    if ( source && isConnected() )
    {
        Flush( new DataChunk( source->toPlainText() ) );
    }
}
