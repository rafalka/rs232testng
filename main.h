/******************************************************************************
 * @file     main.h
 * 
 * @brief    
 * 
 * @date     01-12-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#ifndef MAIN_H_
#define MAIN_H_

#include "QHtmlDisplayStreamItem.h"
#include "QTextEditStreamItem.h"
#include "SourceProvider.h"

#include <QObject>

class QStreamManager: public QObject
{
    Q_OBJECT
private:
    QTextEditStreamItem     InStream;
    StreamItem*             InModStream;
    StreamItem*             SourceStream;
    StreamItem*             OutModStream;
    QHtmlDisplayStreamItem  OutStream;
private:
    void buildStream()
    {
        StreamItem* endStream = &OutStream;
        if (OutModStream) { OutModStream->Connect(endStream); endStream = OutModStream; }
        if (SourceStream) { SourceStream->Connect(endStream); endStream = SourceStream; }
        if (InModStream)  { InModStream->Connect(endStream);  endStream = InModStream; }

        InStream.Connect( endStream );
    }
public:
    QStreamManager(QPlainTextEdit* in, QTextEdit* out):
        InStream(in),InModStream(NULL),
        SourceStream(NULL),OutModStream(NULL),
        OutStream(out)
    {
        buildStream();
    }

public slots:
    void Triggered() { InStream.Triggered(); }
    void onSourceProviderChanged(SourceProvider* newProvider)
    {
        if (newProvider) {
            SourceStream = newProvider->getDefaultStream();
            buildStream();
        }
    }

};

#endif /* MAIN_H_ */
