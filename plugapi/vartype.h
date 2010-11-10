/******************************************************************************
 * @file     vartype.h
 * 
 * @brief    Variant record definition
 * 
 * @date     10-11-2010
 * @author   Rafal Kukla
 ******************************************************************************
 *            Copyright (C) 2010 Rafal Kukla  ( rkdevel@gmail.com )
 *          This file is a part of rs232testng project and is released
 *         under the terms of the license contained in the file LICENSE
 ******************************************************************************
 */

#ifndef VARTYPE_H_
#define VARTYPE_H_

#include "stdtype.h"

#ifdef	__cplusplus
extern "C" {
#endif

typedef enum
{
#ifdef USE_64BIT_INT
	vt_i64, /** 64 bit signed int */
	vt_u64, /** 64 bit unsigned int */
#endif
	vt_i32,    /** 32 bit signed int */
	vt_u32,    /** 32 bit unsigned int */
	vt_i16,    /** 16 bit signed int */
	vt_u16,    /** 16 bit unsigned int */
	vt_i8 ,    /**  8 bit signed int */
	vt_u8 ,    /**  8 bit unsigned int */
	vt_ptr,    /** pointer */
	vt_str,    /** string (pointer to char) */
	vt_float,  /** floating point */
	vt_double  /** double precision floating point */
} vartypes_t;

typedef union vartype_u
{
#ifdef USE_64BIT_INT
	i64_t     i64;
	u64_t     u64;
#endif
	i32_t     i32;
	u32_t     u32;
	i16_t     i16;
	u16_t     u16;
	i8_t      i8;
	u8_t      u8;
	void*     ptr;
	char*     str;
	float     f;
	double    d;
	u8_t      _pad[8]; /* to be sure that sizeof is always 8 */
}vartype_t;

_COMPILE_TIME_ASSERT(testvartype_t, sizeof(vartype_t)==8);

#ifdef	__cplusplus
}
#endif

#endif /* VARTYPE_H_ */
