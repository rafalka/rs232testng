/******************************************************************************
 * @file     HtmlDisplayOutputProvider.h
 * 
 * @brief    
 * 
 * @date     03-12-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#ifndef HTMLDISPLAYOUTPUTPROVIDER_H_
#define HTMLDISPLAYOUTPUTPROVIDER_H_


#include "QHtmlDisplayStreamItem.h"
#include "ui_HtmlDisplayOutputProvider.h"
/*
 *
 */
#include "OutputProvider.h"

class HtmlDisplayOutputProvider: public OutputProvider
{
protected:
    void       m_onConfig() {};
    void       m_onHelp() {};

private:
    QHtmlDisplayStreamItem*          stream;
    Ui::HtmlDisplayOutputProviderUI* ui;

public:
    StreamItem* getDefaultStream() { return stream; }

    void        SetupUI(QWidget *parent);
    HtmlDisplayOutputProvider();
    virtual ~HtmlDisplayOutputProvider();
};

#endif /* HTMLDISPLAYOUTPUTPROVIDER_H_ */
