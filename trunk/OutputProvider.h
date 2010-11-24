/******************************************************************************
 * @file     OutputProvider.h
 * 
 * @brief    
 * 
 * @date     12-11-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#ifndef OUTPUTPROVIDER_H_
#define OUTPUTPROVIDER_H_

/*
 *
 */
class OutputProvider
{
    bool         m_onConfigActive;
    bool         m_onHelpAllowed;
    virtual void m_onConfig() = 0;
    virtual void m_onHelp() = 0;
public:
    void onConfig() {if (m_onConfigActive ) m_onConfig(); }
    void onHelp()   {if (m_onHelpAllowed) m_onHelp(); }
	OutputProvider():m_onConfigActive(false),m_onHelpAllowed(false){};
	//virtual ~OutpuProvider(){};
};

#endif /* OUTPUTPROVIDER_H_ */
