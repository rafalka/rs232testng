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
private:
    size_t   bufSize;
    static const unsigned embeddSize=32;
    union {
        unsigned char   embeddBuf[embeddSize];
        unsigned char*  bufPtr;
    };
    bool isBufEmbedded() { return (bufSize<=embeddSize); }
    void setData(const unsigned char* data, size_t size);
    void clearData();
public:
    DataChunk():bufSize(0), bufPtr(NULL) {};
    DataChunk(const QString& fromString);

    size_t   getSize() { return bufSize; }
    unsigned char* getBuf() { return (bufSize>0) ? ((bufSize>embeddSize) ? bufPtr : embeddBuf ) : NULL ; }
    QString toString();
    virtual ~DataChunk();
};

#endif /* DATACHUNK_H_ */
