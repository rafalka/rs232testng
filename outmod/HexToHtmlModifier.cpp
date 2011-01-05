/******************************************************************************
 * @file     HexToHtmlModifier.cpp
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

#include "HexToHtmlModifier.h"
#include "QHelpers.h"


const QString HexToHtmlModifier::myDisplayName =  QObject::tr( "HEX display" );


HexToHtmlModifier::HexToHtmlModifier()
{
    m_DisplayName = myDisplayName;
}


/***************************************************************************************************** _htos_be
 ***/
inline char* _htos_be(register const unsigned char* data, register char* buf, register unsigned hlen)
{
  register unsigned char  c,b;
  while (hlen)
  {
        c = *data++;
        b = c >> 4; c&=0xF;
        *buf++=b+ ((b<10)?'0':'A'-10);
        *buf++=c+ ((c<10)?'0':'A'-10);

    hlen--;
  }

  return buf;
}

/***************************************************************************************************** _htos_le
 ***/
inline char* _htos_le(register const unsigned char* data, register char* buf, register unsigned hlen)
{
  register unsigned char  c,b;
  data+=hlen-1;
  while (hlen)
  {
        c = *data--;
        b = c >> 4; c&=0xF;
        *buf++=b+ ((b<10)?'0':'A'-10);
        *buf++=c+ ((c<10)?'0':'A'-10);

    hlen--;
  }

  return buf;
}

QString HexToHtmlModStreamItem::HexToHtml( unsigned long address, const unsigned char* buf, unsigned long size)
{
  static const QString sep("&nbsp;&nbsp;");
  static const char*   addrfmt = "<TD bgcolor=#ECF2FF><I>%1</I></TD>";
  static const char*   hexfmt  = "<TD bgcolor=#FDFEDE>%1</TD>";
  static const char*   asciifmt= "<TD bgcolor=#DEFEE3>%1</TD>";

  char          hex[OUTB_MAX_REC*3+1];
  char          asc[OUTB_MAX_REC+1];
  unsigned long cnt,r;
  unsigned      typesize = wordSize;
  unsigned      addrw=1,hexw,ascw,recw; /*Width of format str */
  int           sepRequired;

  QString out;

  // Calculate address size
  if (addrType != NO_ADDR)
  {
    addrw = addrWidth;
    if (!addrw)
    {
      if ( addrType == ADDR_DEC )
      {
        addrw=1;
        for (cnt=address+size;cnt;cnt/=10) addrw++;
      }
      else if ( addrType == ADDR_HEX )
      {
        addrw=0;
        for (cnt=address+size;cnt;cnt/=16) addrw++;
        // align to 2, 4, 8, 16, ...
        for (cnt=2; addrw>cnt; cnt<<=1) ;
        addrw = cnt;
      }
    }
  }

  // Calculate record size in bytes
  recw  = recSize;
  if (recw>OUTB_MAX_REC) recw=OUTB_MAX_REC;
  recw /= typesize;
  if (! recw) recw = 1;

  hexw  = recw*(typesize*2+1)-1;
  ascw  = recw;

  //out+="<p style=\"font-family: monospace;\">";
  out+="<code>";
  out+="<table>";

  while (size>=typesize) /* only complete types */
  {
    r = size / typesize;
    if ( r > recw ) r = recw;

    sepRequired = 0;

    out+="<tr>";
    // Print address field
    if ( addrType == ADDR_DEC )
    {
      //fprintf(out,"%*d: ",addrw,address);
        out+=QString(addrfmt).arg(address,addrw,10);
        sepRequired=1;
    }
    else if ( addrType == ADDR_HEX )
    {
      //fprintf(out,"%.*X: ",addrw,address);
      out+=QString(addrfmt).arg(address,addrw,16,QChar('0'));
      sepRequired=1;
    }

    //Print hex field
    if ( showHex )
    {
      char                *hptr = hex;
      const unsigned char *ptr  = buf;

      for (cnt=r;cnt;cnt--)
      {
        if (isBigEndian)
          hptr = _htos_be(ptr,hptr,typesize);
        else
          hptr = _htos_le(ptr,hptr,typesize);

        ptr  += typesize;
        if (cnt>1) *hptr++=' ';
      }

      *hptr=0;
      if (sepRequired) out+=sep;
      //fprintf(out,"%-*s ",hexw,hex);
      out+=QString(hexfmt).arg(hex,-hexw);
      //out+=QString::fromAscii(hex,hexw);

      sepRequired=1;
              //("%1 ").arg(static_cast<unsigned char>(hex),-addrw,16,QChar('0'));
    }

    //Print ascii field
    if ( showAscii )
    {
      if ( typesize == sizeof(char) )
      {
        char                *aptr = asc;
        const unsigned char *ptr  = buf;

        for (cnt=r;cnt;cnt--)
            {
          *aptr++= iscntrl(*ptr) ? '.' : *ptr;
          ptr++;
        }

        *aptr = 0;

        if (sepRequired) out+=sep;
        //fprintf(out,"%-*s ",ascw,asc);
        out+=QString(asciifmt).arg(TextToHtml(asc,aptr-asc),-ascw);
        //out+=doc.toHtml();
        sepRequired=1;
      }
      else if ( typesize == sizeof(wchar_t) )
      {
        wchar_t       *aptr = (wchar_t*) asc;
        const wchar_t *ptr  = (const wchar_t*) buf;

        for (cnt=r;cnt;cnt--)
            {
          *aptr++= iswcntrl(*ptr) ? L'.' : *ptr;
          ptr++;
        }

        *aptr = 0;
        if (sepRequired) out+=sep;
        //fprintf(out,"%-*S ",ascw,asc);
        out+=QString(asciifmt).arg(QString::fromWCharArray((wchar_t*)asc,aptr-((wchar_t*)asc) ), -ascw);
        sepRequired=1;

      }
    }

    //fprintf(out,"\n");
    out+="</tr>\n";

    r *= typesize;
    buf     += r;
    address += r;
    size    -= r;
  }
  out+="</table>";
  out+="</code>";
  return out;
}

void HexToHtmlModStreamItem::In(DataChunk* data)
{
    if (data)
    {
        if ( isConnected() )
        {

#if 0
            Flush(new DataChunk(
                    HexToHtml(0, data->getBuf(), data->getSize() )
            ));
#else
            QByteArray arr = data->toByteArray();
            QString    s   = HexToHtml(0, reinterpret_cast<const unsigned char*>(arr.constData()), arr.size() );
            //QTextDocumentFragment doc = QTextDocumentFragment::fromPlainText( HexToHtml(0, data->getBuf(), data->getSize() ) ) ;
            //QString s =  "<code>\n"+doc.toHtml()+"\n</code>";
            QTextDocumentFragment doc2 = QTextDocumentFragment::fromPlainText( s ) ;
            Flush(new DataChunk( s,  DataChunk::DT_HTML ) );
#endif
        }

        delete data;
    }
}
