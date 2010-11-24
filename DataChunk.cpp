/******************************************************************************
 * @file     DataChunk.cpp
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

#include <cstdlib>
#include <cstring>
#include <stdexcept>
#include <QByteArray>

#include "DataChunk.h"
#include "debug.h"

DataChunk::~DataChunk()
{
    clearData();
}

DataChunk::DataChunk(const QString& fromString):
        bufSize(0),bufPtr(NULL)
{
    QByteArray data = fromString.toAscii();
    setData( reinterpret_cast<const unsigned char*>(data.constData()),
             static_cast<size_t>( data.size() ) );
}

QString DataChunk::toString()
{
    return (bufSize)
            ? QString::fromAscii(reinterpret_cast<const char*>(getBuf()),bufSize)
            : QString() ;
}

void DataChunk::clearData()
{
    if ( (bufSize>embeddSize) && bufPtr)
    {
        free(bufPtr);
        bufPtr = NULL;
    }
    bufSize = 0;
}

void DataChunk::setData(const unsigned char* data, size_t size)
{
    if (size < embeddSize )
    {
        clearData();
        // Just copy into embedded buffer
        if (size) memcpy(embeddBuf, data, size);
    }
    else if ( size <= ( bufSize+32 ) )
    {
        // Don't bother reallocation
        memcpy(bufPtr, data, size);
    }
    else
    {
        clearData();
        bufPtr = (unsigned char*) malloc(size);
        if (!bufPtr) THROW( std::bad_alloc() );
        memcpy(bufPtr, data, size);
    }
    bufSize = size;
}

