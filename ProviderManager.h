/******************************************************************************
 * @file     ProviderManager.h
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

#ifndef PROVIDERMANAGER_H_
#define PROVIDERMANAGER_H_

#include <QObject>

/*
 *
 */

class ProviderFactory;
class QWidget;
class DataProvider;
class StreamItem;

namespace Ui {
    class ProviderManagerUI;
}

class ProviderManager: public QObject
{
    Q_OBJECT
private:
    ProviderFactory&              factory;
    Ui::ProviderManagerUI*        ui;

    DataProvider*                 currentProvider;
    int                           lastGoodProviderIdx;

    void configRead();
    void configStore();
    void setProvider(DataProvider* newProvider);
    void SetupProviderUI();

private slots:
    void cmbSourceSelectActivated( int index );
    void onStreamChanged(StreamItem* newStream);

public:
    void SetupUI(QWidget *parent);


signals:
    void streamChanged(StreamItem* newStream);


public:
    ProviderManager(ProviderFactory& providersFactory);
    virtual ~ProviderManager();
};

#endif /* PROVIDERMANAGER_H_ */
