/******************************************************************************
 * @file     DataChunk.h
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

#ifndef DATACHUNK_H_
#define DATACHUNK_H_

#include <cstddef>

#include <QString>
/*
 *
 */
class DataChunk
{
public:
    enum ChunkDataType
    {
        DT_NONE,
        DT_RAW,       /* as QByteArray */
        DT_ASCII,     /* as QByteArray */
        DT_STRING,    /* as QString */
        DT_HTML       /* as QString */
    };
private:
    enum obj_type {
        OBJ_NONE,
        OBJ_QBYTEARRAY,
        OBJ_QSTRING
    };
    obj_type DataDataToObjType( ChunkDataType t)
    {
        switch(t)
        {
        case DT_RAW:
        case DT_ASCII: return OBJ_QBYTEARRAY;
        case DT_STRING:
        case DT_HTML:  return OBJ_QSTRING;
        default:
            ;
        }
        return OBJ_NONE;
    };

    ChunkDataType      type;
    obj_type           objType;
    union {
        void*          objPtr;
        QByteArray*    rawObj;
        QString*       strObj;
    };

#if 0
    size_t   bufSize;
    static const unsigned embeddSize=32;
    union {
        unsigned char   embeddBuf[embeddSize];
        unsigned char*  bufPtr;
    };
#endif

    //bool isBufEmbedded() { return (bufSize<=embeddSize); }
    //void setData(const unsigned char* data, size_t size);
    void clearData();
public:
    ChunkDataType Type() { return type; };
    DataChunk():type(DT_NONE),objType(OBJ_NONE),objPtr(NULL) {};
    DataChunk(const QString& fromString, ChunkDataType asType = DT_STRING );
    DataChunk(const QByteArray& fromByteArray, ChunkDataType asType=DT_RAW );
    DataChunk(const unsigned char* data, size_t size, ChunkDataType asType=DT_RAW );
    DataChunk(const char* text, ChunkDataType asType=DT_ASCII );

    //size_t   getSize() { return bufSize; }
    //unsigned char* getBuf() { return (bufSize>0) ? ((bufSize>embeddSize) ? bufPtr : embeddBuf ) : NULL ; }
    QString     toString();
    QByteArray  toByteArray();

    virtual ~DataChunk();
};

#endif /* DATACHUNK_H_ */
