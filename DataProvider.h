/******************************************************************************
 * @file     DataProvider.h
 * 
 * @brief    
 * 
 * @date     01-12-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#ifndef DATAPROVIDER_H_
#define DATAPROVIDER_H_

#include <QObject>
#include <QWidget>

class StreamItem;
/*
 *
 */
class DataProvider: public QObject
{
    Q_OBJECT
protected:
    const char*        m_Name;
    QString            m_DisplayName;
    bool               m_onConfigAllowed;
    bool               m_onHelpAllowed;
    bool               m_FreeAddrEditAllowed;
public:
    const char*    getName()           { return m_Name; }
    const QString& getDisplayName()    { return m_DisplayName; }
    bool isOnConfigAllowed()           { return m_onConfigAllowed;  }
    bool isOnHelpAllowed()             { return m_onHelpAllowed;  }
    bool isFreeAddrEditAllowed()       { return m_FreeAddrEditAllowed;  }


    virtual StreamItem* getDefaultStream() = 0;

    virtual void        SetupUI(QWidget *parent) {};

    DataProvider():
        m_Name(NULL),
        m_DisplayName(QString::null),
        m_onConfigAllowed(false),
        m_onHelpAllowed(false){};

signals:
        void streamChanged(StreamItem* newStream);

public:
    virtual ~DataProvider()
    {
        // TODO Auto-generated destructor stub
    }
};

#endif /* DATAPROVIDER_H_ */
