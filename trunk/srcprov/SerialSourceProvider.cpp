/******************************************************************************
 * @file     SerialSourceProvider.cpp
 * 
 * @brief    
 * 
 * @date     18-11-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#include <QString>
#include <QObject>

#include "SerialSourceProvider.h"
#include "ui_SerialSourceProvider.h"

const char*   SerialSourceProvider::myName        = "SerialProvider";
const QString SerialSourceProvider::myDisplayName =  QObject::tr("Serial");

SerialSourceProvider::SerialSourceProvider():
        SerialSourceProviderUI(0),
        ui(0)
{
    m_Name = myName;
    m_DisplayName = myDisplayName;
    m_onConfigAllowed = true;
    m_onHelpAllowed = true;
    m_FreeAddrEditAllowed = true;

}

SerialSourceProvider::~SerialSourceProvider()
{

    if (SerialSourceProviderUI) delete SerialSourceProviderUI;
    if (ui)
    {
        delete ui->horizontalSpacer;
        delete ui->btnSrcConn;
        delete ui->editSrcAddress;
        delete ui->horizontalLayout;
        delete ui;
    }
}

void SerialSourceProvider::SetupUI(QWidget *parent)
{
    /*
    if (!SerialSourceProviderUI)
    {
        SerialSourceProviderUI = new QWidget(0);
        SerialSourceProviderUI->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    }
    */
    if (ui) delete ui;
    ui = 0;
    ui = new Ui::SerialSourceProviderUI();
    ui->setupUi(/*SerialSourceProviderUI*/parent);

    Q_ASSERT( QObject::connect( ui->btnSrcConn, SIGNAL( clicked() ),
            this,   SLOT( onConnect() ) ) );

    /*
    SerialSourceProviderUI->setParent(parent);
    SerialSourceProviderUI->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    SerialSourceProviderUI->show();
    */

}

static void _addPname(QString &s,QObject* w)
{
    s.append(w->objectName());
    s.append(" -> ");
    s.append(w->parent()->objectName());
    s.append("\n");
}
void SerialSourceProvider::onConnect()
{
    QString s;

    _addPname(s,ui->horizontalLayout);
    //_addPname(s,ui->horizontalSpacer);
    _addPname(s,ui->btnSrcConn);
    _addPname(s,ui->editSrcAddress);

    stream.Flush(new DataChunk(s) );

}

