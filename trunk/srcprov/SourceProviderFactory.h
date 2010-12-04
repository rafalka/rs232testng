/******************************************************************************
 * @file     SourceProviderFactory.h
 * 
 * @brief    This file contains definition of class SourceProviderFactory
 *           intended for creating instances of SourceProvider
 * 
 * @date     12-11-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#ifndef SOURCEPROVIDERFACTORY_H_
#define SOURCEPROVIDERFACTORY_H_

#include <QObject>
#include <QIcon>
#include <QString>
#include <QVariant>
#include <QAbstractItemModel>
#include <QStandardItemModel>

#include "DataProvider.h"
#include "SerialSourceProvider.h"
#include "GuiItemCmd.h"

/*
typedef bool (QObject::*SourceProviderEnumCallback)(int            itemID,
                                                   const QString& name,
                                                   const QIcon*   icon,
                                                   QVariant*      cbParam );
*/
#define SrcFac SourceProviderFactory::instance()


/*
 *
 */
class SourceProviderFactory
{
private:
    static SourceProviderFactory s;

    QStandardItemModel*          itemsInfoList;

    void           genItemsInfoList();

public:
    /*
    int  EnumProviders(QObject& obj, SourceProviderEnumCallback cb, QVariant* cbParam  = NULL );
    */
    void EnumProviders(GuiItemCmd& callbackCmd);
    QAbstractItemModel* getItemsModel() { if (!itemsInfoList) genItemsInfoList(); return itemsInfoList; }

    void ReleaseProvider(DataProvider* provider) { if (provider) delete provider; }
    DataProvider* GetProviderFromIndex(int idx);

    static SourceProviderFactory& instance() { return SourceProviderFactory::s; }
	SourceProviderFactory();
	virtual ~SourceProviderFactory();
};

#endif /* SOURCEPROVIDERFACTORY_H_ */
