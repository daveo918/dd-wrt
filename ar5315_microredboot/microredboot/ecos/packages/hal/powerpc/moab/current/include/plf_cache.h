#ifndef CYGONCE_PLF_CACHE_H
#define CYGONCE_PLF_CACHE_H

//=============================================================================
//
//      plf_cache.h
//
//      Platform HAL cache details
//
//=============================================================================
//####ECOSGPLCOPYRIGHTBEGIN####
// -------------------------------------------
// This file is part of eCos, the Embedded Configurable Operating System.
// Copyright (C) 1998, 1999, 2000, 2001, 2002 Red Hat, Inc.
// Copyright (C) 2003 Gary Thomas
//
// eCos is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 2 or (at your option) any later version.
//
// eCos is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with eCos; if not, write to the Free Software Foundation, Inc.,
// 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
//
// As a special exception, if other files instantiate templates or use macros
// or inline functions from this file, or you compile this file and link it
// with other works to produce a work based on this file, this file does not
// by itself cause the resulting work to be covered by the GNU General Public
// License. However the source code for this file must still be made available
// in accordance with section (3) of the GNU General Public License.
//
// This exception does not invalidate any other reasons why a work based on
// this file might be covered by the GNU General Public License.
//
// Alternative licenses for eCos may be arranged by contacting Red Hat, Inc.
// at http://sources.redhat.com/ecos/ecos-license/
// -------------------------------------------
//####ECOSGPLCOPYRIGHTEND####
//=============================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):   jskov
// Contributors:jskov
// Date:        2000-01-26
// Purpose:     Platform cache control API
// Description: The macros defined here provide the platform specific
//              cache control operations / behavior.
// Usage:       Is included via the architecture cache header:
//              #include <cyg/hal/hal_cache.h>
//
//####DESCRIPTIONEND####
//
//=============================================================================

//---------------------------------------------------------------------------
// Initial cache enabling - controlled by common CDL

//-----------------------------------------------------------------------------
// FIXME: This definition forces the IO flash driver to use a
// known-good procedure for fiddling flash before calling flash device
// driver functions. The procedure breaks on other platform/driver
// combinations though so is depricated. Hence this definition.
//
// If you work on this target, please try to remove this definition
// and verify that the flash driver still works (both from RAM and
// flash). If it does, remove the definition and this comment for good
// [and the old macro definition if this happens to be the last client
// of that code].
#define HAL_FLASH_CACHES_OLD_MACROS

//-----------------------------------------------------------------------------
#endif // ifndef CYGONCE_PLF_CACHE_H
// End of plf_cache.h
