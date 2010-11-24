/******************************************************************************
 * @file     debug.h
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
#ifndef _DEBUG_H_
#define _DEBUG_H_

#include <stdarg.h>


#define DBGOUT stderr

/** Debug levels 
*/
#define DBGLVL_QUIET       0 /**< Suppress printing any message */
#define DBGLVL_ERRORS      1 /**< Print serious/fatal errors only */
#define DBGLVL_WARNINGS    2 /**< As above + warnings */
#define DBGLVL_INFOS       5 /**< As above + some additional informations  */
#define DBGLVL_DEBUGS     10 /**< As above + user specified debug messages  */
#define DBGLVL_TRACES    100 /**< As above + execution trace  */
#define DBGLVL_ALL       255 /**< Display all messages  */


/* define it, if you want to include message timestamp in log */
/*
#ifndef OUTDBGMSG_INCLUDE_TIMESTAMP
#define OUTDBGMSG_INCLUDE_TIMESTAMP 1
#endif
*/
/* define it, if you want to include message source in log */
/*
#ifndef OUTDBGMSG_INCLUDE_SOURCE
#define OUTDBGMSG_INCLUDE_SOURCE 1
#endif
*/
/* define it, if you want to include message log level in log */
#ifndef OUTDBGMSG_INCLUDE_LEVEL
#define OUTDBGMSG_INCLUDE_LEVEL 1
#endif


#if __STDC_VERSION__ < 199901L
# if (__GNUC__ >= 2) || (_MSC_VER >= 1300)
#  define __func__ __FUNCTION__
# else
#  define __func__ __FILE__
# endif
#endif




#ifdef __cplusplus
    extern "C" {
#endif

#define outv(fmt, arglist) vfprintf(DBGOUT,fmt,arglist)
// void outv(const char* fmt, va_list arglist);
void outf(const char* fmt, ...);

#define outs(str) fouts(str,DBGOUT)
//void outs(const char* str);

void _outdbgmsgf(int level, const char* source, const char* msg,...);
void _outdbgmsg(int level, const char* source, const char* msg);


extern int   dbglevel;
extern const char* modulename;

void _cust_assert(const char* exp,const char* file, int line);

#ifdef __cplusplus
    }
#endif

/* See config.h for DBGLVL_* definitions */
enum 
{
  DBGMSG_NULL    = DBGLVL_QUIET,
  DBGMSG_ERROR   = DBGLVL_ERRORS,
  DBGMSG_WARNING = DBGLVL_WARNINGS,
  DBGMSG_INFO    = DBGLVL_INFOS,
  DBGMSG_DEBUG   = DBGLVL_DEBUGS,
  DBGMSG_TRACE   = DBGLVL_TRACES
};

#ifndef _DEBUG_LEVEL
# ifdef _DEBUG
#  define _DEBUG_LEVEL DBGLVL_ALL
# else
#  define _DEBUG_LEVEL DBGLVL_ALL
//#  define _DEBUG_LEVEL DBGLVL_DEBUGS
//#  define _DEBUG_LEVEL DBGLVL_INFOS
# endif
#endif

#ifndef _ASSERT
# ifdef _DEBUG
#  define _ASSERT(exp) (void)( (exp) || (_cust_assert(#exp, __FILE__, __LINE__), 0) )
# else
#  define _ASSERT(exp) 
# endif
#endif 

#ifndef __ASSERT 
# define __ASSERT _ASSERT
#endif

#define LENOF(_array_) (sizeof(_array_)/sizeof(_array_[0]))
/* Format:
  TIMESTAMP : SOURCE : LEVEL: MESSAGE
*/
#define IF_DBGLVL(level,operation) { if ( dbglevel>=(level) ) { operation; } }

#define OUTDBGMSG(level,msg)                           { if ( dbglevel>=(level) ) _outdbgmsg(  (level), modulename, (msg) ); }
#define OUTDBGMSG1(level,msg,arg1)                     { if ( dbglevel>=(level) ) _outdbgmsgf( (level), modulename, (msg),(arg1) ); }
#define OUTDBGMSG2(level,msg,arg1,arg2)                { if ( dbglevel>=(level) ) _outdbgmsgf( (level), modulename, (msg),(arg1),(arg2) ); }
#define OUTDBGMSG3(level,msg,arg1,arg2,arg3)           { if ( dbglevel>=(level) ) _outdbgmsgf( (level), modulename, (msg),(arg1),(arg2),(arg3) ); }
#define OUTDBGMSG4(level,msg,arg1,arg2,arg3,arg4)      { if ( dbglevel>=(level) ) _outdbgmsgf( (level), modulename, (msg),(arg1),(arg2),(arg3),(arg4) ); }
#define OUTDBGMSG5(level,msg,arg1,arg2,arg3,arg4,arg5) { if ( dbglevel>=(level) ) _outdbgmsgf( (level), modulename, (msg),(arg1),(arg2),(arg3),(arg4),(arg5) ); }

#if _DEBUG_LEVEL >= DBGLVL_ERRORS
#define IF_DBGLVL_ERRORS(operation)            IF_DBGLVL ( DBGLVL_ERRORS, operation )
#define _ERRMSG(msg)                           OUTDBGMSG ( DBGLVL_ERRORS, (msg) )
#define _ERRMSG1(msg,arg1)                     OUTDBGMSG1( DBGLVL_ERRORS, (msg) ,(arg1) )
#define _ERRMSG2(msg,arg1,arg2)                OUTDBGMSG2( DBGLVL_ERRORS, (msg) ,(arg1),(arg2) )
#define _ERRMSG3(msg,arg1,arg2,arg3)           OUTDBGMSG3( DBGLVL_ERRORS, (msg) ,(arg1),(arg2),(arg3) )
#define _ERRMSG4(msg,arg1,arg2,arg3,arg4)      OUTDBGMSG4( DBGLVL_ERRORS, (msg) ,(arg1),(arg2),(arg3),(arg4) )
#define _ERRMSG5(msg,arg1,arg2,arg3,arg4,arg5) OUTDBGMSG5( DBGLVL_ERRORS, (msg) ,(arg1),(arg2),(arg3),(arg4),(arg5) )
#else
#define IF_DBGLVL_ERRORS(operation)            
#define _ERRMSG(msg)                           
#define _ERRMSG1(msg,arg1)                     
#define _ERRMSG2(msg,arg1,arg2)                
#define _ERRMSG3(msg,arg1,arg2,arg3)           
#define _ERRMSG4(msg,arg1,arg2,arg3,arg4)      
#define _ERRMSG5(msg,arg1,arg2,arg3,arg4,arg5) 
#endif


#if _DEBUG_LEVEL >= DBGLVL_WARNINGS
#define IF_DBGLVL_WARNINGS(operation)           IF_DBGLVL ( DBGLVL_WARNINGS, operation )
#define _WARNMSG(msg)                           OUTDBGMSG ( DBGLVL_WARNINGS, (msg) )
#define _WARNMSG1(msg,arg1)                     OUTDBGMSG1( DBGLVL_WARNINGS, (msg) ,(arg1) )
#define _WARNMSG2(msg,arg1,arg2)                OUTDBGMSG2( DBGLVL_WARNINGS, (msg) ,(arg1),(arg2) )
#define _WARNMSG3(msg,arg1,arg2,arg3)           OUTDBGMSG3( DBGLVL_WARNINGS, (msg) ,(arg1),(arg2),(arg3) )
#define _WARNMSG4(msg,arg1,arg2,arg3,arg4)      OUTDBGMSG4( DBGLVL_WARNINGS, (msg) ,(arg1),(arg2),(arg3),(arg4) )
#define _WARNMSG5(msg,arg1,arg2,arg3,arg4,arg5) OUTDBGMSG5( DBGLVL_WARNINGS, (msg) ,(arg1),(arg2),(arg3),(arg4),(arg5) )
#else
#define IF_DBGLVL_WARNINGS(operation)            
#define _WARNMSG(msg)                           
#define _WARNMSG1(msg,arg1)                     
#define _WARNMSG2(msg,arg1,arg2)                
#define _WARNMSG3(msg,arg1,arg2,arg3)           
#define _WARNMSG4(msg,arg1,arg2,arg3,arg4)      
#define _WARNMSG5(msg,arg1,arg2,arg3,arg4,arg5) 
#endif

#if _DEBUG_LEVEL >= DBGLVL_INFOS
#define IF_DBGLVL_INFOS(operation)              IF_DBGLVL ( DBGLVL_INFOS, operation )
#define _INFOMSG(msg)                           OUTDBGMSG ( DBGLVL_INFOS, (msg) )
#define _INFOMSG1(msg,arg1)                     OUTDBGMSG1( DBGLVL_INFOS, (msg) ,(arg1) )
#define _INFOMSG2(msg,arg1,arg2)                OUTDBGMSG2( DBGLVL_INFOS, (msg) ,(arg1),(arg2) )
#define _INFOMSG3(msg,arg1,arg2,arg3)           OUTDBGMSG3( DBGLVL_INFOS, (msg) ,(arg1),(arg2),(arg3) )
#define _INFOMSG4(msg,arg1,arg2,arg3,arg4)      OUTDBGMSG4( DBGLVL_INFOS, (msg) ,(arg1),(arg2),(arg3),(arg4) )
#define _INFOMSG5(msg,arg1,arg2,arg3,arg4,arg5) OUTDBGMSG5( DBGLVL_INFOS, (msg) ,(arg1),(arg2),(arg3),(arg4),(arg5) )
#else
#define IF_DBGLVL_INFOS(operation)            
#define _INFOMSG(msg)                           
#define _INFOMSG1(msg,arg1)                     
#define _INFOMSG2(msg,arg1,arg2)                
#define _INFOMSG3(msg,arg1,arg2,arg3)           
#define _INFOMSG4(msg,arg1,arg2,arg3,arg4)      
#define _INFOMSG5(msg,arg1,arg2,arg3,arg4,arg5) 
#endif

#if _DEBUG_LEVEL >= DBGLVL_INFOS+1
#define IF_DBGLVL_INFO1S(operation)              IF_DBGLVL ( DBGLVL_INFOS+1, operation )
#define _INFO1MSG(msg)                           OUTDBGMSG ( DBGLVL_INFOS+1, (msg) )
#define _INFO1MSG1(msg,arg1)                     OUTDBGMSG1( DBGLVL_INFOS+1, (msg) ,(arg1) )
#define _INFO1MSG2(msg,arg1,arg2)                OUTDBGMSG2( DBGLVL_INFOS+1, (msg) ,(arg1),(arg2) )
#define _INFO1MSG3(msg,arg1,arg2,arg3)           OUTDBGMSG3( DBGLVL_INFOS+1, (msg) ,(arg1),(arg2),(arg3) )
#define _INFO1MSG4(msg,arg1,arg2,arg3,arg4)      OUTDBGMSG4( DBGLVL_INFOS+1, (msg) ,(arg1),(arg2),(arg3),(arg4) )
#define _INFO1MSG5(msg,arg1,arg2,arg3,arg4,arg5) OUTDBGMSG5( DBGLVL_INFOS+1, (msg) ,(arg1),(arg2),(arg3),(arg4),(arg5) )
#else
#define IF_DBGLVL_INFO1S(operation)            
#define _INFO1MSG(msg)                           
#define _INFO1MSG1(msg,arg1)                     
#define _INFO1MSG2(msg,arg1,arg2)                
#define _INFO1MSG3(msg,arg1,arg2,arg3)           
#define _INFO1MSG4(msg,arg1,arg2,arg3,arg4)      
#define _INFO1MSG5(msg,arg1,arg2,arg3,arg4,arg5) 
#endif

#if _DEBUG_LEVEL >= DBGLVL_INFOS+2
#define IF_DBGLVL_INFO2S(operation)              IF_DBGLVL ( DBGLVL_INFOS+2, operation )
#define _INFO2MSG(msg)                           OUTDBGMSG ( DBGLVL_INFOS+2, (msg) )
#define _INFO2MSG1(msg,arg1)                     OUTDBGMSG1( DBGLVL_INFOS+2, (msg) ,(arg1) )
#define _INFO2MSG2(msg,arg1,arg2)                OUTDBGMSG2( DBGLVL_INFOS+2, (msg) ,(arg1),(arg2) )
#define _INFO2MSG3(msg,arg1,arg2,arg3)           OUTDBGMSG3( DBGLVL_INFOS+2, (msg) ,(arg1),(arg2),(arg3) )
#define _INFO2MSG4(msg,arg1,arg2,arg3,arg4)      OUTDBGMSG4( DBGLVL_INFOS+2, (msg) ,(arg1),(arg2),(arg3),(arg4) )
#define _INFO2MSG5(msg,arg1,arg2,arg3,arg4,arg5) OUTDBGMSG5( DBGLVL_INFOS+2, (msg) ,(arg1),(arg2),(arg3),(arg4),(arg5) )
#else
#define IF_DBGLVL_INFO2S(operation)            
#define _INFO2MSG(msg)                           
#define _INFO2MSG1(msg,arg1)                     
#define _INFO2MSG2(msg,arg1,arg2)                
#define _INFO2MSG3(msg,arg1,arg2,arg3)           
#define _INFO2MSG4(msg,arg1,arg2,arg3,arg4)      
#define _INFO2MSG5(msg,arg1,arg2,arg3,arg4,arg5) 
#endif

#if _DEBUG_LEVEL >= DBGLVL_DEBUGS
#define IF_DBGLVL_DEBUGS(operation)              IF_DBGLVL ( DBGLVL_DEBUGS, operation )
#define _DEBUGMSG(msg)                           OUTDBGMSG ( DBGLVL_DEBUGS, (msg) )
#define _DEBUGMSG1(msg,arg1)                     OUTDBGMSG1( DBGLVL_DEBUGS, (msg) ,(arg1) )
#define _DEBUGMSG2(msg,arg1,arg2)                OUTDBGMSG2( DBGLVL_DEBUGS, (msg) ,(arg1),(arg2) )
#define _DEBUGMSG3(msg,arg1,arg2,arg3)           OUTDBGMSG3( DBGLVL_DEBUGS, (msg) ,(arg1),(arg2),(arg3) )
#define _DEBUGMSG4(msg,arg1,arg2,arg3,arg4)      OUTDBGMSG4( DBGLVL_DEBUGS, (msg) ,(arg1),(arg2),(arg3),(arg4) )
#define _DEBUGMSG5(msg,arg1,arg2,arg3,arg4,arg5) OUTDBGMSG5( DBGLVL_DEBUGS, (msg) ,(arg1),(arg2),(arg3),(arg4),(arg5) )
#else
#define IF_DBGLVL_DEBUGS(operation)            
#define _DEBUGMSG(msg)                           
#define _DEBUGMSG1(msg,arg1)                     
#define _DEBUGMSG2(msg,arg1,arg2)                
#define _DEBUGMSG3(msg,arg1,arg2,arg3)           
#define _DEBUGMSG4(msg,arg1,arg2,arg3,arg4)      
#define _DEBUGMSG5(msg,arg1,arg2,arg3,arg4,arg5) 
#endif

#if _DEBUG_LEVEL >= DBGLVL_TRACES
#define IF_DBGLVL_TRACES(operation)              IF_DBGLVL ( DBGLVL_TRACES, operation )
#define _TRACEMSG(msg)                           OUTDBGMSG ( DBGLVL_TRACES, (msg) )
#define _TRACEMSG1(msg,arg1)                     OUTDBGMSG1( DBGLVL_TRACES, (msg) ,(arg1) )
#define _TRACEMSG2(msg,arg1,arg2)                OUTDBGMSG2( DBGLVL_TRACES, (msg) ,(arg1),(arg2) )
#define _TRACEMSG3(msg,arg1,arg2,arg3)           OUTDBGMSG3( DBGLVL_TRACES, (msg) ,(arg1),(arg2),(arg3) )
#define _TRACEMSG4(msg,arg1,arg2,arg3,arg4)      OUTDBGMSG4( DBGLVL_TRACES, (msg) ,(arg1),(arg2),(arg3),(arg4) )
#define _TRACEMSG5(msg,arg1,arg2,arg3,arg4,arg5) OUTDBGMSG5( DBGLVL_TRACES, (msg) ,(arg1),(arg2),(arg3),(arg4),(arg5) )
#else
#define IF_DBGLVL_TRACES(operation)            
#define _TRACEMSG(msg)                           
#define _TRACEMSG1(msg,arg1)                     
#define _TRACEMSG2(msg,arg1,arg2)                
#define _TRACEMSG3(msg,arg1,arg2,arg3)           
#define _TRACEMSG4(msg,arg1,arg2,arg3,arg4)      
#define _TRACEMSG5(msg,arg1,arg2,arg3,arg4,arg5) 
#endif


#if defined(__cplusplus)

class Trace
{
private:
  const char* fname;
public:
  Trace (const char* name)
  {
    fname = name;
    _TRACEMSG1("Entering function: %s\n",name);
  }
  ~Trace()
  {
    _TRACEMSG1("Leaving function: %s\n",fname);
  }

};

#if _DEBUG_LEVEL >= DBGLVL_TRACES
# define _TRACEOBJ Trace __trace(__func__)
#else
# define _TRACEOBJ
#endif


/**************************************************************************************************
****  Raising exceptions
***/

#define THROW(_except_) {\
  _ERRMSG3("Exception thrown from \"%s()\". (%s:%d)\n",__func__, __FILE__,__LINE__); \
  throw (_except_);  \
}
#endif /*defined(__cplusplus)*/


#endif /*_DEBUG_H_*/

