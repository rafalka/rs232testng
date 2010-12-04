/******************************************************************************
 * @file     HtmlDisplayOutputProvider.cpp
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

#include "HtmlDisplayOutputProvider.h"
#include "ui_HtmlDisplayOutputProvider.h"
#include "HtmlDisplayStreamItem.h"



inline StreamItem* HtmlDisplayOutputProvider::getDefaultStream() { return stream; }

HtmlDisplayOutputProvider::HtmlDisplayOutputProvider():
    stream(0),
    ui(0)
{

}

void HtmlDisplayOutputProvider::SetupUI(QWidget *parent)
{
    if (stream)
    {
        emit streamChanged(0);
        delete stream;
    }

    if (ui) delete ui;
    ui = new Ui::HtmlDisplayOutputProviderUI();
    ui->setupUi(parent);
    stream = new HtmlDisplayStreamItem(ui->editOut);
    emit streamChanged(stream);
}

HtmlDisplayOutputProvider::~HtmlDisplayOutputProvider()
{
    if (ui) delete ui;
}
