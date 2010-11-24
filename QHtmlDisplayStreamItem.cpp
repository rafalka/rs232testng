/******************************************************************************
 * @file     QHtmlDisplayStreamItem.cpp
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

#include "QHtmlDisplayStreamItem.h"


void  QHtmlDisplayStreamItem::In(DataChunk* data)
{
    if (dest)
    {
        dest->moveCursor(QTextCursor::End);
        dest->insertHtml(data->toString());
    }
    if (data) delete data;

}
