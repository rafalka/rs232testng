/******************************************************************************
 * @file     GuiItemCmd.h
 * 
 * @brief    
 * 
 * @date     22-11-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#ifndef GUIITEMCMD_H_
#define GUIITEMCMD_H_

#include <stdexcept>

#include <QIcon>
#include <QString>
#include <QtGui/QComboBox>
/*
 *
 */
class GuiItemCmd
{
public:
    const static QString  ItemSeparator;
    const static QIcon    NoIcon;
    const static QVariant NoParam;

    virtual void doWith(const QString&    itemName  = ItemSeparator,
                        const QIcon&      itemIcon  = NoIcon,
                        const QVariant&   userParam = NoParam)=0;
};

#endif /* GUIITEMCMD_H_ */

class ComboItemAddCmd: public GuiItemCmd
{
private:
    QComboBox*   obj;
    ComboItemAddCmd(){};
public:
    ComboItemAddCmd(QComboBox* dest):obj(dest) { if (!dest) throw std::runtime_error("ComboItemAddCmd: NULL object passed"); };
    virtual void doWith(const QString& itemName, const QIcon& itemIcon, const QVariant& userParam );

};
