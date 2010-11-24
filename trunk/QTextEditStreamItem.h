/******************************************************************************
 * @file     QTextEditStreamItem.h
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

#ifndef QTEXTEDITSTREAMITEM_H_
#define QTEXTEDITSTREAMITEM_H_

#include "debug.h"

#include <QObject>
#include <QPlainTextEdit>
/*
 *
 */
#include "StreamItem.h"

class QTextEditStreamItem: public QObject, public StreamItem
{
    Q_OBJECT
private:
    QPlainTextEdit*  source;
public:
    void  In(DataChunk* data) { _ASSERT("In() method on QTextEditStreamItem is not allowed!!!"); if (data) delete data; }
    QTextEditStreamItem(QPlainTextEdit*  associatedSource):source(associatedSource){ };
    //virtual ~QTextEditStreamItem();
public slots:
    void Triggered();
};

#endif /* QTEXTEDITSTREAMITEM_H_ */
