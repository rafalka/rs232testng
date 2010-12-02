/******************************************************************************
 * @file     SerialSourceProvider.h
 * 
 * @brief    
 * 
 * @date     18-11-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#ifndef SERIALSOURCEPROVIDER_H_
#define SERIALSOURCEPROVIDER_H_

/*
 *
 */
#include "StreamItem.h"
#include "SourceProvider.h"

class SerialSourceProvider: public SourceProvider
{
protected:
    void       m_onConfig();
    void       m_onHelp();
public:
    static const char*   myName        ;
    static const QString myDisplayName ;

    StreamItem* getDefaultStream() { /* TODO SerialSourceProvider::getDefaultStream() */ return NULL; }
    SerialSourceProvider();
    virtual ~SerialSourceProvider();
};

#endif /* SERIALSOURCEPROVIDER_H_ */
