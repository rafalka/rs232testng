/******************************************************************************
 * @file     InputProviderFactory.cpp
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

#include "InputProviderFactory.h"

// Instancing
InputProviderFactory InputProviderFactory::s;

int InputProviderFactory::EnumProviders(QObject& obj, InputProviderEnumCallback cb, QVariant* cbParam)
{
    if (!cb) return -1;

    (obj.*cb)(1,"Co",NULL,cbParam);
    (obj.*cb)(2,"Za",NULL,cbParam);
    (obj.*cb)(3,"Kupa!!!",NULL,cbParam);

    return 3;
}


InputProviderFactory::InputProviderFactory()
{
	// TODO Auto-generated constructor stub

}

InputProviderFactory::~InputProviderFactory()
{
	// TODO Auto-generated destructor stub
}
