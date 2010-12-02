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

#include "StreamItem.h"
/*
 *
 */
class DataProvider
{
protected:
    const char*        m_Name;
    QString            m_DisplayName;
    bool               m_onConfigAllowed;
    bool               m_onHelpAllowed;
    bool               m_FreeAddrEditAllowed;
    virtual void       m_onConfig() = 0;
    virtual void       m_onHelp() = 0;
public:
    const char*    getName()           { return m_Name; }
    const QString& getDisplayName()    { return m_DisplayName; }
    bool isOnConfigAllowed()           { return m_onConfigAllowed;  }
    bool isOnHelpAllowed()             { return m_onHelpAllowed;  }
    bool isFreeAddrEditAllowed()       { return m_FreeAddrEditAllowed;  }

    void onConfig() {if (m_onConfigAllowed ) m_onConfig(); }
    void onHelp()   {if (m_onHelpAllowed) m_onHelp(); }

    virtual StreamItem* getDefaultStream() = 0;
    DataProvider():
        m_Name(NULL),
        m_DisplayName(QString::null),
        m_onConfigAllowed(false),
        m_onHelpAllowed(false){};

public:
    virtual ~DataProvider()
    {
        // TODO Auto-generated destructor stub
    }
};

#endif /* DATAPROVIDER_H_ */
