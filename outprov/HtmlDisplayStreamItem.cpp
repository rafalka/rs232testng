/******************************************************************************
 * @file     HtmlDisplayStreamItem.cpp
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

#include "HtmlDisplayStreamItem.h"


void  HtmlDisplayStreamItem::In(DataChunk* data)
{
    if (dest)
    {
        dest->moveCursor(QTextCursor::End);
        switch( data->Type() )
        {
        case DataChunk::DT_ASCII:
        case DataChunk::DT_RAW:
        case DataChunk::DT_STRING:
            dest->setUpdatesEnabled(false);
            dest->insertPlainText(data->toString());
            dest->setUpdatesEnabled(true);
            break;
        case DataChunk::DT_HTML:
            dest->setUpdatesEnabled(false);
            dest->insertHtml(data->toString());
            dest->setUpdatesEnabled(true);
            break;
        default:
            ;
        }
    }
    if (data) delete data;

}
