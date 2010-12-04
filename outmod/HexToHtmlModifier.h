/******************************************************************************
 * @file     HexToHtmlModifier.h
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

#ifndef HEXTOHTMLMODIFIER_H_
#define HEXTOHTMLMODIFIER_H_

/*
 *
 */
#include "DataProvider.h"
#include "StreamItem.h"

#if 0

/**
 Option definitions and support macros for hex_dump_ex()
*/
#define OUTB_ADDR_SIZE(_s_) ( ((_s_)<<12) & OUTB_ADDR_SIZE_MASK)
#define OUTB_REC_SIZE(_s_) ( (_s_) & OUTB_REC_MASK)

/* internal use only macros */
#define OUTB_GET_REC_SIZE(_opts_) ( (_opts_) & OUTB_REC_MASK)
#define OUTB_GET_ADDR_SIZE(_opts_) ( ((_opts_) & OUTB_ADDR_SIZE_MASK)>>12)
#define OUTB_GET_TYPE_SIZE(_opts_) ( 1<<(((_opts_) & OUTB_TYPE_MASK)>>8) )
enum OUTB_OPTS
{
  OUTB_1B_REC              =  1,
  OUTB_2B_REC              =  2,
  OUTB_4B_REC              =  4,
  OUTB_8B_REC              =  8,
  OUTB_16B_REC             = 16,
  OUTB_32B_REC             = 32,
  OUTB_MAX_REC             = 64,
  OUTB_REC_MASK            = 0x000000FF,
  OUTB_BYTE                = 0x00000000,
  OUTB_WORD                = 0x00000100,
  OUTB_LONG                = 0x00000200,
  OUTB_LONGLONG            = 0x00000300,
  OUTB_TYPE_MASK           = 0x00000300,
  OUTB_ADDR_SIZE_AUTO      = 0x00000000,   /* size will be calculacted automatically */
  OUTB_ADDR_SIZE_MASK      = 0x0000F000,
  OUTB_SHOW_ADDR_DEC       = 0x00010000,
  OUTB_SHOW_ADDR_HEX       = 0x00030000, /* default */
  OUTB_SHOW_ADDR           = 0x00030000,
  OUTB_SHOW_HEX            = 0x00040000,
  OUTB_SHOW_ASCII          = 0x00080000,
  OUTB_FORCE_BE            = 0x00200000,
  OUTB_FORCE_LE            = 0x00300000,

  OUTB_DEFAULT      = OUTB_16B_REC | OUTB_BYTE | OUTB_SHOW_ADDR_HEX | OUTB_ADDR_SIZE_AUTO | OUTB_SHOW_HEX |
OUTB_SHOW_ASCII
};
#endif

class HexToHtmlModStreamItem: public StreamItem
{
private:
    static const unsigned OUTB_MAX_REC = 256;
public:
    enum  addr_type {
        NO_ADDR,
        ADDR_HEX,
        ADDR_DEC
    } addrType;
    unsigned  addrWidth;
    unsigned  recSize;
    unsigned  wordSize;
    bool  isBigEndian;
    bool  showHex;
    bool  showAscii;

    QString HexToHtml( unsigned long address, const unsigned char* buf, unsigned long size);

    HexToHtmlModStreamItem():addrType(ADDR_HEX),addrWidth(0),recSize(16),wordSize(1),isBigEndian(false),showHex(true),showAscii(true) {};
    void  In(DataChunk* data);
};

class HexToHtmlModifier: public DataProvider
{
private:
    HexToHtmlModStreamItem stream;
public:
    static const QString myDisplayName ;

    StreamItem* getDefaultStream() {return &stream; };

    void        SetupUI(QWidget *parent) {};

    HexToHtmlModifier();
};


#endif /* HEXTOHTMLMODIFIER_H_ */
