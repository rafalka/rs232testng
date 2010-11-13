/******************************************************************************
 * @file     OutputProviderFactory.h
 * 
 * @brief    This file contains definition of class OutputProviderFactory
 *           intended for creating instances of OutputProvider
 * 
 * @date     12-11-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#ifndef OUTPUTPROVIDERFACTORY_H_
#define OUTPUTPROVIDERFACTORY_H_

#include "OutpuProvider.h"

/*
 *
 */
class OutputProviderFactory
{
public:
	OutputProviderFactory();
	virtual ~OutputProviderFactory();
};

#endif /* OUTPUTPROVIDERFACTORY_H_ */
