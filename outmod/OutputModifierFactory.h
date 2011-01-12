/******************************************************************************
 * @file     OutputModifierFactory.h
 * 
 * @brief    This file contains definition of class OutputModifierFactory
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

#ifndef OUTPUTMODIFIERFACTORY_H_
#define OUTPUTMODIFIERFACTORY_H_


#include "ProviderFactory.h"

/*
 *
 */
#define OutModFac OutputModifierFactory::instance()

class OutputModifierFactory: public ProviderFactory
{
private:
    static OutputModifierFactory s;

    OutputModifierFactory();
protected:
    QStandardItemModel*  genItemsInfoList();

public:

    DataProvider* GetProviderFromIndex(int idx);

    static OutputModifierFactory& instance() { return OutputModifierFactory::s; }
    //~OutputModifierFactory();
};

#endif /* OUTPUTMODIFIERFACTORY_H_ */
