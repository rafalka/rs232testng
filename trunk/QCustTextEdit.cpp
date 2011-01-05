/******************************************************************************
 * @file     QCustTextEdit.cpp
 * 
 * @brief    
 * 
 * @date     05-01-2011
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2011 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#include "QCustTextEdit.h"

#include <QTimer>


//int QCustTextEdit::UpdateDelayAfterResizing = 500;

void QCustTextEdit::resizeEvent ( QResizeEvent * event )
{
    lastResizeEvent = *event;
    //disableUpdating();
    deffResizeTimer->start(UpdateDelayAfterResizing);
}

void QCustTextEdit::onDefferedResize()
{
    QTextEdit::resizeEvent(&lastResizeEvent);
    //enableUpdating();
    update();
}

void QCustTextEdit::enableUpdating()
{
    setUpdatesEnabled(true);
}

void QCustTextEdit::disableUpdating()
{
    setUpdatesEnabled(false);

}



QCustTextEdit::QCustTextEdit( QWidget * parent):
        QTextEdit(parent),
        deffResizeTimer(new QTimer()),
        lastResizeEvent(QSize(),QSize())
{
    deffResizeTimer->setSingleShot(true);
    Q_ASSERT( QObject::connect( deffResizeTimer, SIGNAL( timeout() ),
            this,   SLOT( onDefferedResize() ) ) );

}

QCustTextEdit::~QCustTextEdit()
{
    if (deffResizeTimer) delete deffResizeTimer;
}
