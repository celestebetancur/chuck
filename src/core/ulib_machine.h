/*----------------------------------------------------------------------------
  ChucK Concurrent, On-the-fly Audio Programming Language
    Compiler and Virtual Machine

  Copyright (c) 2004 Ge Wang and Perry R. Cook.  All rights reserved.
    http://chuck.stanford.edu/
    http://chuck.cs.princeton.edu/

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  U.S.A.
-----------------------------------------------------------------------------*/

//-----------------------------------------------------------------------------
// file: ulib_machine.h
// desc: class library for 'Machine'
//
// author: Ge Wang (ge@ccrma.stanford.edu | gewang@cs.princeton.edu)
// date: Spring 2004
//-----------------------------------------------------------------------------
#ifndef __ULIB_MACHINE_H__
#define __ULIB_MACHINE_H__

#include "chuck_dl.h"

#ifndef  __DISABLE_OTF_SERVER__
#include "chuck_otf.h"
#endif

// forward reference
struct Chuck_VM;
struct Chuck_Compiler;


// query
DLL_QUERY machine_query( Chuck_DL_Query * QUERY );

#ifndef __DISABLE_OTF_SERVER__
typedef t_CKUINT (* proc_msg_func)( Chuck_VM *, Chuck_Compiler *,
                                    Net_Msg *, t_CKBOOL, void * );
t_CKBOOL machine_init( Chuck_Compiler * compiler, proc_msg_func func );
// 1.4.0.1: TODO: refactor out of ulib machine; not all platforms have OTF
#endif // __DISABLE_OTF_SERVER__

// machine exports
t_CKUINT machine_intsize();


// ckdoc query
DLL_QUERY ckdoc_query( Chuck_DL_Query * QUERY );



#endif
