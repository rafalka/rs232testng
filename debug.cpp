/******************************************************************************
 * @file     debug.cpp
 *
 * @brief
 *
 * @date     24-11-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */
#include <cstring>
#include <ctime>
#include <cstdio>
#include <cstdarg>

#include "debug.h"

int dbglevel = DBGLVL_ALL;

//#include <Windows.h>

void outf(const char* fmt, ...)
{
  va_list   arglist;

  va_start(arglist,fmt);
  outv(fmt,arglist);
  va_end(arglist);
}


void _outdbgmsgf(int level, const char* source, const char* msg,...)
{
  va_list     arglist;


  char        lvlprn[16];
  const char *lvlname;
  
  //static HANDLE mtx = CreateMutex(NULL,FALSE,NULL);

 // WaitForSingleObject(mtx,INFINITE);

#if defined(OUTDBGMSG_INCLUDE_TIMESTAMP) && (OUTDBGMSG_INCLUDE_TIMESTAMP >0 )
  clock_t   t = clock();
  fprintf(DBGOUT, "%10d: ", t);
#endif

#if defined(OUTDBGMSG_INCLUDE_SOURCE) && (OUTDBGMSG_INCLUDE_SOURCE >0 )
  fprintf(DBGOUT, "%-16.16s: ", source);
#endif
#if defined(OUTDBGMSG_INCLUDE_LEVEL) && (OUTDBGMSG_INCLUDE_LEVEL >0 )
  switch(level)
  {
  case DBGMSG_ERROR   : lvlname = "[ERR]";   break;
  case DBGMSG_WARNING : lvlname = "[WRN]";   break;
  case DBGMSG_INFO    : lvlname = "[INF]";   break;
  case DBGMSG_DEBUG   : lvlname = "[DBG]";   break;
  case DBGMSG_TRACE   : lvlname = "[TRC]";   break;
  default:
    _snprintf(lvlprn,LENOF(lvlprn)-1,"[%d]",level);
    lvlprn[LENOF(lvlprn)-1] = 0;
    lvlname = lvlprn;
  }
  fprintf(DBGOUT, "%-5s: ", lvlname);

#endif

  va_start(arglist,msg);
  vfprintf(DBGOUT,msg,arglist);
  va_end(arglist);

  //ReleaseMutex(mtx);

}


void _outdbgmsg(int level, const char* source, const char* msg)
{
  _outdbgmsgf(level, source, "%s",msg);
}

