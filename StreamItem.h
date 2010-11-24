/******************************************************************************
 * @file     StreamItem.h
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

#ifndef STREAMITEM_H_
#define STREAMITEM_H_

#include <cstddef>


#include "DataChunk.h"
/*
 *
 */
class StreamItem
{
private:
    StreamItem* next;
public:
    virtual void  In(DataChunk* data) = 0;
    void          Flush(DataChunk* data) { if (next) next->In(data); else delete data; }
    bool          isConnected() { return (next!=NULL); }
    StreamItem*   Connect(StreamItem* nextStreamItem) {StreamItem* tmp=next; next=nextStreamItem; return tmp; }
    StreamItem():next(NULL) {};
    virtual ~StreamItem() {};
};

#endif /* STREAMITEM_H_ */
