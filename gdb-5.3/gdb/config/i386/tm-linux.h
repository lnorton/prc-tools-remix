/* Definitions to target GDB to GNU/Linux on 386.

   Copyright 1992, 1993, 1995, 1996, 1998, 1999, 2000, 2001, 2002 Free
   Software Foundation, Inc.

   This file is part of GDB.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

#ifndef TM_LINUX_H
#define TM_LINUX_H

#define I386_GNULINUX_TARGET

#include "i386/tm-i386.h"
#include "config/tm-linux.h"

/* The following works around a problem with /usr/include/sys/procfs.h  */
#define sys_quotactl 1

/* When we call a function in a shared library, and the PLT sends us
   into the dynamic linker to find the function's real address, we
   need to skip over the dynamic linker call.  This function decides
   when to skip, and where to skip to.  See the comments for
   SKIP_SOLIB_RESOLVER at the top of infrun.c.  */
#define SKIP_SOLIB_RESOLVER i386_linux_skip_solib_resolver
extern CORE_ADDR i386_linux_skip_solib_resolver (CORE_ADDR pc);

/* N_FUN symbols in shared libaries have 0 for their values and need
   to be relocated. */
#define SOFUN_ADDRESS_MAYBE_MISSING

#endif /* #ifndef TM_LINUX_H */
