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

#include "debug.h"
/*
 *
 */
#include "StreamItem.h"
#include "DataProvider.h"

// Forward declarations
namespace Ui {
    class SerialSourceProviderUI;
}

class SerialStreamItem: public StreamItem
{
public:
    virtual void  In(DataChunk* data) { _ASSERT("In() method on SerialStreamItem is not allowed!!!"); if (data) delete data; };
};

class SerialSourceProvider: public DataProvider
{
    Q_OBJECT
private:
    QWidget*                    SerialSourceProviderUI;
    Ui::SerialSourceProviderUI* ui;

private:
    SerialStreamItem    stream; /* TODO: SerialSourceProvider::stream - temporary for debugging, REMOVEME! */
private slots:
    void   onConnect();
public:
    static const char*   myName        ;
    static const QString myDisplayName ;

    void        SetupUI(QWidget *parent);

    StreamItem* getDefaultStream() { /* TODO SerialSourceProvider::getDefaultStream() */ return &stream /*NULL*/; }
    SerialSourceProvider();
    virtual ~SerialSourceProvider();
};

#endif /* SERIALSOURCEPROVIDER_H_ */
