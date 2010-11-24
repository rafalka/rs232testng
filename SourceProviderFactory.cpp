/******************************************************************************
 * @file     SourceProviderFactory.cpp
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

#include "SourceProviderFactory.h"
#include "SerialSourceProvider.h"
// Instancing
SourceProviderFactory SourceProviderFactory::s;



enum providers {
    PR_SERIAL,
    PR_INTCONFIG
};

void SourceProviderFactory::EnumProviders(GuiItemCmd& callbackCmd)
{
    callbackCmd.doWith( SerialSourceProvider::myDisplayName ,GuiItemCmd::NoIcon, PR_SERIAL );
    callbackCmd.doWith( GuiItemCmd::ItemSeparator);
    callbackCmd.doWith( QObject::tr("Config"),GuiItemCmd::NoIcon,PR_INTCONFIG);

}

SourceProviderFactory::SourceProviderFactory()
{
	// TODO Auto-generated constructor stub

}

SourceProviderFactory::~SourceProviderFactory()
{
	// TODO Auto-generated destructor stub
}
