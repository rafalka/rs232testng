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

#include <QObject>
#include <QIcon>
#include <QString>
#include <QVariant>
#include <QAbstractItemModel>
#include <QStandardItemModel>

#include "DataProvider.h"

/*
 *
 */
#define OutModFac OutputModifierFactory::instance()

class OutputModifierFactory
{
private:
    static OutputModifierFactory s;

    QStandardItemModel*          itemsInfoList;

    void           genItemsInfoList();

    OutputModifierFactory();
public:
    QAbstractItemModel* getItemsModel() { if (!itemsInfoList) genItemsInfoList(); return itemsInfoList; }

    void ReleaseProvider(DataProvider* provider) { if (provider) delete provider; }
    DataProvider* GetProviderFromIndex(int idx);

    static OutputModifierFactory& instance() { return OutputModifierFactory::s; }
    //~OutputModifierFactory();
};

#endif /* OUTPUTMODIFIERFACTORY_H_ */
