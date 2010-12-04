/******************************************************************************
 * @file     SourceProviderManager.h
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

#ifndef SOURCEPROVIDERMANAGER_H_
#define SOURCEPROVIDERMANAGER_H_

#include <QObject>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QComboBox>

#include "DataProvider.h"
#include "ui_SourceProviderManager.h"
/*
 *
 */
class SourceProviderManager: public QObject
{
	Q_OBJECT
private:
    Ui::SourceProviderManagerUI* ui;

private slots:
    void         onStreamChanged(StreamItem* newStream);

private:
    DataProvider* currentProvider;

	int          lastGoodProviderIdx;
	void         connectSourceSelect();
	void         connectShowHelp();
	void         connectShowConf();
	void         connectAddressEdit();
	void         connectRunAction();

	void         SetupProviderUI();
	void         setProvider(DataProvider* newProvider);

	bool         SourcesEnumCallback(int itemID,
                    const QString& name,
                    const QIcon*   icon,
                    QVariant*      cbParam );
public slots:
	void         actShowHelpTriggered();
    void         actShowConfTriggered();
	void         actRunTriggered();
	void         cmbSourceSelectActivated( int index );
    void         cmbAddressEditActivated( int index );

signals:
    void         providerChanged(DataProvider* newProvider);
    void         streamChanged(StreamItem* newStream);

public:
	SourceProviderManager();

    void        SetupUI(QWidget *parent);

    DataProvider* getCurrentProvider() { return currentProvider; }

	~SourceProviderManager();
};

#endif /* SOURCEPROVIDERMANAGER_H_ */
