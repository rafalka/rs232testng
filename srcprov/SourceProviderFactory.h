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

#include "ProviderFactory.h"

/*
 *
 */
#define SrcFac SourceProviderFactory::instance()


/*
 *
 */
class SourceProviderFactory: public ProviderFactory
{
private:
    static SourceProviderFactory s;

protected:
    QStandardItemModel*  genItemsInfoList();

public:
    /*
    int  EnumProviders(QObject& obj, SourceProviderEnumCallback cb, QVariant* cbParam  = NULL );
    void EnumProviders(GuiItemCmd& callbackCmd);
    */

    DataProvider* GetProviderFromIndex(int idx);

    static SourceProviderFactory& instance() { return SourceProviderFactory::s; }
};

#endif /* SOURCEPROVIDERFACTORY_H_ */
