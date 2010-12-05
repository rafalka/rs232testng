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

DataChunk::DataChunk(const QString& fromString, ChunkDataType asType )
{
    type    = asType;
    objType = OBJ_QSTRING;
    strObj  = new QString( fromString );
}

DataChunk::DataChunk(const QByteArray& fromByteArray, ChunkDataType asType )
{
    type    = asType;
    objType = OBJ_QBYTEARRAY;
    rawObj  = new QByteArray( fromByteArray );
}


DataChunk::DataChunk(const unsigned char* data, size_t size, ChunkDataType asType )
{
    type    = asType;
    objType = OBJ_QBYTEARRAY;
    rawObj  = new QByteArray( reinterpret_cast<const char*>(data), size );
}

DataChunk::DataChunk(const char* text, ChunkDataType asType )
{
    type    = asType;
    objType = OBJ_QBYTEARRAY;
    rawObj  = new QByteArray( text, strlen(text) );
}

QString DataChunk::toString()
{
    if ( objType == OBJ_QSTRING )
    {
        return *strObj;
    }
    else if ( objType == OBJ_QBYTEARRAY )
    {
        /*
        switch(type)
        {
        case DT_RAW:
        case DT_ASCII: return QString::fromAscii(rawObj->constData,rawObj->size() );
        case DT_STRING:
        case DT_HTML:  return OBJ_QSTRING;
        }
        */
        return QString( *rawObj );
    }

    return QString();
}

QByteArray DataChunk::toByteArray()
{
    if ( objType == OBJ_QSTRING )
    {
        return strObj->toAscii();
    }
    else if ( objType == OBJ_QBYTEARRAY )
    {
        return QByteArray();
    }

    return QByteArray();
}

void DataChunk::clearData()
{
    if(objPtr)
    {
        switch(objType)
        {
        case OBJ_QBYTEARRAY: delete rawObj; break;
        case OBJ_QSTRING:    delete strObj; break;
        default: ;
        }
        objPtr = NULL;
    }



#if 0
    if ( (bufSize>embeddSize) && bufPtr)
    {
        free(bufPtr);
        bufPtr = NULL;
    }
    bufSize = 0;
#endif
}

#if 0
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
#endif
