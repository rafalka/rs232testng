/******************************************************************************
 * @file     QCustTextEdit.h
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

#ifndef QCUSTTEXTEDIT_H_
#define QCUSTTEXTEDIT_H_

/*
 *
 */
#include <QTextEdit>
#include <QResizeEvent>

class   QTimer;
class   QResizeEvent;

class QCustTextEdit: public QTextEdit
{
    Q_OBJECT
private:
    static const int UpdateDelayAfterResizing=250;
    QTimer*          deffResizeTimer;
    QResizeEvent     lastResizeEvent;
protected:
    void     resizeEvent( QResizeEvent * event );
private slots:
    void     onDefferedResize();
public slots:
    void     enableUpdating();
    void     disableUpdating();
public:
    QCustTextEdit( QWidget * parent = 0 );
    virtual ~QCustTextEdit();
};

#endif /* QCUSTTEXTEDIT_H_ */
