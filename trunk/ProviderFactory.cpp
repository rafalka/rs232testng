/******************************************************************************
 * @file     ProviderFactory.cpp
 * 
 * @brief    
 * 
 * @date     12-01-2011
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2011 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#include "ProviderFactory.h"

#include <QAbstractItemModel>
#include <QStandardItemModel>

#include "DataProvider.h"


void ProviderFactory::ReleaseProvider(DataProvider* provider)
{
    if (provider) delete provider;
}



ProviderFactory::~ProviderFactory()
{
    if (itemsInfoList) delete itemsInfoList;
}
