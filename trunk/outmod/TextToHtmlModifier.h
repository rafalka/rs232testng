/******************************************************************************
 * @file     TextToHtmlModifier.h
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

#ifndef TEXTTOHTMLMODIFIER_H_
#define TEXTTOHTMLMODIFIER_H_

/*
 *
 */
#include "DataProvider.h"
#include "StreamItem.h"

class TextToHtmlModStreamItem: public StreamItem
{
public:
    void  In(DataChunk* data);
};

class TextToHtmlModifier: public DataProvider
{
private:
    TextToHtmlModStreamItem stream;
public:
    static const QString myDisplayName ;

    StreamItem* getDefaultStream() {return &stream; };

    void        SetupUI(QWidget *parent) {};

    TextToHtmlModifier();
};





#endif /* TEXTTOHTMLMODIFIER_H_ */
