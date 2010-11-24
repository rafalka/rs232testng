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

#include <QObject>
#include <QIcon>
#include <QString>
#include <QVariant>

#include "InputProvider.h"

typedef bool (QObject::*InputProviderEnumCallback)(int            itemID,
                                                   const QString& name,
		                                           const QIcon*   icon,
	   	                                           QVariant*      cbParam );
/*
 *
 */
#define InFac InputProviderFactory::instance()

//class InputProviderFactory;

class InputProviderFactory: public QObject
{
    Q_OBJECT
private:
    static InputProviderFactory s;
	InputProviderFactory();
	virtual ~InputProviderFactory();
public:
	int EnumProviders(QObject& obj, InputProviderEnumCallback cb, QVariant* cbParam  = NULL );

	static InputProviderFactory& instance() { return InputProviderFactory::s; }
};

#endif /* INPUTPROVIDERFACTORY_H_ */
