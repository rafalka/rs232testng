/******************************************************************************
 * @file     QHelpers.h
 * 
 * @brief    
 * 
 * @date     04-12-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#ifndef QHELPERS_H_
#define QHELPERS_H_

#include <QStandardItem>
#include <QString>
/*
 *
 */

QStandardItem* genStandardItem(const QString& Title, const char* IconResPath, int ID);
QStandardItem* genStandardItemSeparator();


#endif /* QHELPERS_H_ */
