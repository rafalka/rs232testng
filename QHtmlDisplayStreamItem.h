/******************************************************************************
 * @file     QHtmlDisplayStreamItem.h
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

#ifndef QHTMLDISPLAYSTREAMITEM_H_
#define QHTMLDISPLAYSTREAMITEM_H_

#include <QTextEdit>
/*
 *
 */
#include "StreamItem.h"

class QHtmlDisplayStreamItem: public StreamItem
{
private:
    QTextEdit*     dest;
public:
    void  In(DataChunk* data);
    QHtmlDisplayStreamItem(QTextEdit* associatedDest):dest(associatedDest){}
};

#endif /* QHTMLDISPLAYSTREAMITEM_H_ */
