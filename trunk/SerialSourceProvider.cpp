/******************************************************************************
 * @file     SerialSourceProvider.cpp
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

#include <QString>
#include <QObject>

#include "SerialSourceProvider.h"

const char*   SerialSourceProvider::myName        = "SerialProvider";
const QString SerialSourceProvider::myDisplayName =  QObject::tr("Serial");

SerialSourceProvider::SerialSourceProvider()
{
    m_Name = myName;
    m_DisplayName = myDisplayName;
    m_onConfigAllowed = true;
    m_onHelpAllowed = true;
    m_FreeAddrEditAllowed = true;

}

SerialSourceProvider::~SerialSourceProvider()
{
    // TODO Auto-generated destructor stub
}

void SerialSourceProvider::m_onConfig()
{
    // TODO  SerialSourceProvider::m_onConfig()
}
void SerialSourceProvider::m_onHelp()
{
    // TODO SerialSourceProvider::m_onHelp()
}
