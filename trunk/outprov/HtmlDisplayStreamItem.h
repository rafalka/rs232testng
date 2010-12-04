/******************************************************************************
 * @file     HtmlDisplayStreamItem.h
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

#ifndef HTMLDISPLAYSTREAMITEM_H_
#define HTMLDISPLAYSTREAMITEM_H_

#include <QTextEdit>
/*
 *
 */
#include "StreamItem.h"

class HtmlDisplayStreamItem: public StreamItem
{
private:
    QTextEdit*     dest;
public:
    void  In(DataChunk* data);
    HtmlDisplayStreamItem(QTextEdit* associatedDest):dest(associatedDest){}
};

#endif /* HTMLDISPLAYSTREAMITEM_H_ */
