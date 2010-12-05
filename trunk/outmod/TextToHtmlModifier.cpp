/******************************************************************************
 * @file     TextToHtmlModifier.cpp
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
#include <QString>
#include <QObject>

#include <QTextDocumentFragment>

#include "TextToHtmlModifier.h"
#include "QHelpers.h"


const QString TextToHtmlModifier::myDisplayName =  QObject::tr( "Plain text display" );


TextToHtmlModifier::TextToHtmlModifier()
{
    m_DisplayName = myDisplayName;
}



void TextToHtmlModStreamItem::In(DataChunk* data)
{
    if (data)
    {
#if 0
        if ( isConnected() )
        {
            QTextDocumentFragment doc = QTextDocumentFragment::fromPlainText( data->toString() );
            QString s =  doc.toHtml();
            Flush(new DataChunk( s ));
        }
        delete data;
#else
        /*QString s =  TextToHtml( (const char*) data->getBuf(), data->getSize() );
        s.replace('<',"&lt;");
        s.replace(' ',"&nbsp;");
        s.replace("\n","<BR>");
        QTextDocumentFragment doc = QTextDocumentFragment::fromPlainText( s );
        QString s2 =  doc.toHtml();
        Flush( new DataChunk( QString("<code>")+s2+"</code>") );
        */
        Flush( data );
#endif
    }
}
