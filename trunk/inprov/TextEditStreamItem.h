/******************************************************************************
 * @file     TextEditStreamItem.h
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

#ifndef TEXTEDITSTREAMITEM_H_
#define TEXTEDITSTREAMITEM_H_

#include "debug.h"

#include <QObject>
#include <QPlainTextEdit>
/*
 *
 */
#include "StreamItem.h"

class TextEditStreamItem: public QObject, public StreamItem
{
    Q_OBJECT
private:
    QPlainTextEdit*  source;
public:
    void  In(DataChunk* data) { _ASSERT("In() method on TextEditStreamItem is not allowed!!!"); if (data) delete data; }
    TextEditStreamItem(QPlainTextEdit*  associatedSource):source(associatedSource){ };
    //virtual ~TextEditStreamItem();
public slots:
    void Triggered();
};

#endif /* TEXTEDITSTREAMITEM_H_ */
