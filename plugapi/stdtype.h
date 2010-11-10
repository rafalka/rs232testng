/******************************************************************************
 * @file     stdtype.h
 * 
 * @brief    Standard types definition
 * 
 * @date     10-11-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *        This file is a part of rs232testng project and is released 
 *         under the terms of the license contained in the file LICENSE
 * NOTE:
 *   Based on code from POSH (http://www.poshlib.org)
 *   POSH Copyright (c) 2004, Brian Hook. All rights reserved.
 ******************************************************************************
 */

#ifndef STDTYPE_H_
#define STDTYPE_H_

#ifdef	__cplusplus
extern "C" {
#endif

/*
** ----------------------------------------------------------------------------
** Cross-platform compile time assertion macro
** ----------------------------------------------------------------------------
*/
#define _COMPILE_TIME_ASSERT(name, x) typedef int _compiletime_assert_ ## name[(x) ? 1 : -1 ]

#if defined ( __LP64__ ) || defined ( __powerpc64__ ) || defined CPU_SPARC64

#  define USE_64BIT_INT 1
typedef long i64_t;
typedef unsigned long u64_t;
#  define I64( x ) ((i64_t)x)
#  define U64( x ) ((u64_t)x)
#  define I64_PRINTF_PREFIX "l"

#elif defined (_MSC_VER ) || defined ( __BORLANDC__ ) || defined ( __WATCOMC__ ) || ( defined ( __alpha )&& defined ( __DECC  ) )

#  define USE_64BIT_INT 1
typedef __int64 i64_t;
typedef unsigned __int64 u64_t;
#  define I64( x ) ((i64_t)x)
#  define U64( x ) ((u64_t)x)
#  define I64_PRINTF_PREFIX "I64"

#elif defined ( __GNUC__ ) || defined ( __MWERKS__ ) || defined ( __SUNPRO_C ) || defined ( __SUNPRO_CC ) || defined ( __APPLE_CC__ ) || defined ( _LONG_LONG ) || defined ( _CRAYC )

#  define USE_64BIT_INT 1
typedef long long i64_t;
typedef unsigned long long u64_t;
#  define U64( x ) ((u64_t)(x##LL))
#  define I64( x ) ((i64_t)(x##LL))
#  define I64_PRINTF_PREFIX "ll"

#endif

/* hack */
#ifdef __MINGW32__
#  undef I64
#  undef U64
#  undef I64_PRINTF_PREFIX
#  define I64( x ) ((i64_t)x)
#  define U64( x ) ((u64_t)x)
#  define I64_PRINTF_PREFIX "I64"
#endif


#ifdef USE_64BIT_INT
/** Minimum value for a 64-bit signed integer */
#define I64_MIN  I64(0x8000000000000000)
/** Maximum value for a 64-bit signed integer */
#define I64_MAX  I64(0x7FFFFFFFFFFFFFFF)
/** Minimum value for a 64-bit unsigned integer */
#define U64_MIN  U64(0)
/** Maximum value for a 64-bit unsigned integer */
#define U64_MAX  U64(0xFFFFFFFFFFFFFFFF)
#endif

/* ----------------------------------------------------------------------------
** Basic Sized Types
**
** These types are expected to be EXACTLY sized so you can use them for
** serialization.
** ----------------------------------------------------------------------------
*/
#ifndef FALSE
# define FALSE 0
#endif

#ifndef TRUE
# define TRUE  1
#endif

typedef int            bool_t;
typedef unsigned char  byte_t;

/* NOTE: These assume that CHAR_BIT is 8!! */
typedef unsigned char  u8_t;
typedef signed char    i8_t;
typedef unsigned short u16_t;
typedef short          i16_t;
typedef unsigned long  u32_t;
typedef long           i32_t;

/** Minimum value for a byte */
#define BYTE_MIN    0
/** Maximum value for an 8-bit unsigned value */
#define BYTE_MAX    255
/** Minimum value for a byte */
#define I16_MIN     ( ( i16_t ) 0x8000 )
/** Maximum value for a 16-bit signed value */
#define I16_MAX     ( ( i16_t ) 0x7FFF )
/** Minimum value for a 16-bit unsigned value */
#define U16_MIN     0
/** Maximum value for a 16-bit unsigned value */
#define U16_MAX     ( ( u16_t ) 0xFFFF )
/** Minimum value for a 32-bit signed value */
#define I32_MIN     ( ( i32_t ) 0x80000000 )
/** Maximum value for a 32-bit signed value */
#define I32_MAX     ( ( i32_t ) 0x7FFFFFFF )
/** Minimum value for a 32-bit unsigned value */
#define U32_MIN     0
/** Maximum value for a 32-bit unsigned value */
#define U32_MAX     ( ( u32_t ) 0xFFFFFFFF )

/*
** ----------------------------------------------------------------------------
** Sanity checks on expected sizes
** ----------------------------------------------------------------------------
*/
_COMPILE_TIME_ASSERT(byte_t, sizeof(byte_t) == 1);
_COMPILE_TIME_ASSERT(u8_t, sizeof(u8_t) == 1);
_COMPILE_TIME_ASSERT(i8_t, sizeof(i8_t) == 1);
_COMPILE_TIME_ASSERT(u16_t, sizeof(u16_t) == 2);
_COMPILE_TIME_ASSERT(i16_t, sizeof(i16_t) == 2);
_COMPILE_TIME_ASSERT(u32_t, sizeof(u32_t) == 4);
_COMPILE_TIME_ASSERT(i32_t, sizeof(i32_t) == 4);
_COMPILE_TIME_ASSERT(testfloat_t, sizeof(float)==4 );
_COMPILE_TIME_ASSERT(testdouble_t, sizeof(double)==8);


#if defined USE_64BIT_INT
   _COMPILE_TIME_ASSERT(u64_t, sizeof(u64_t) == 8);
   _COMPILE_TIME_ASSERT(i64_t, sizeof(i64_t) == 8);
#endif



#ifdef	__cplusplus
}
#endif

#endif /* STDTYPE_H_ */
