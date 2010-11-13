/******************************************************************************
 * @file     InputProviderFactory.h
 * 
 * @brief    This file contains definition of class InputProviderFactory
 *           intended for creating instances of InputProvider
 * 
 * @date     12-11-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#ifndef INPUTPROVIDERFACTORY_H_
#define INPUTPROVIDERFACTORY_H_

#include "InputProvider.h"

/*
 *
 */
class InputProviderFactory
{
public:
	InputProviderFactory();
	virtual ~InputProviderFactory();
};

#endif /* INPUTPROVIDERFACTORY_H_ */
