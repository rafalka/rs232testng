/******************************************************************************
 * @file     ProviderFactory.h
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

#ifndef PROVIDERFACTORY_H_
#define PROVIDERFACTORY_H_


#include <QAbstractItemModel>
#include <QStandardItemModel>
class DataProvider;
/*
 *
 */
class ProviderFactory
{
protected:
    QStandardItemModel*          itemsInfoList;

    virtual QStandardItemModel*  genItemsInfoList() = 0;
public:
    virtual DataProvider* GetProviderFromIndex(int idx) = 0;
    virtual void ReleaseProvider(DataProvider* provider);

    QAbstractItemModel* getItemsModel()
    {
        if (!itemsInfoList) itemsInfoList=genItemsInfoList(); return itemsInfoList;
    }
    ProviderFactory():itemsInfoList(0) {};
    virtual ~ProviderFactory();
};

#endif /* PROVIDERFACTORY_H_ */
