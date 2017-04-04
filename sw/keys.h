////////////////////////////////////////////////////////////////////////////////
//
// Filename: 	keys.h
//
// Project:	AutoFPGA, a utility for composing FPGA designs from peripherals
//
// Purpose:	
//
// Creator:	Dan Gisselquist, Ph.D.
//		Gisselquist Technology, LLC
//
////////////////////////////////////////////////////////////////////////////////
//
// Copyright (C) 2017, Gisselquist Technology, LLC
//
// This program is free software (firmware): you can redistribute it and/or
// modify it under the terms of  the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTIBILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program.  (It's in the $(ROOT)/doc directory.  Run make with no
// target there if the PDF file isn't present.)  If not, see
// <http://www.gnu.org/licenses/> for a copy.
//
// License:	GPL, v3, as defined and found on www.gnu.org,
//		http://www.gnu.org/licenses/gpl.html
//
//
////////////////////////////////////////////////////////////////////////////////
//
//
#ifndef	ICD_H
#define	ICD_H

#include <string>
#include "mapdhash.h"

//
extern const	STRING	KYLEGAL;
extern const	STRING	KYCMDLINE;
extern const	STRING	KYSUBD;
extern const	STRING	KYBUS_ADDRESS_WIDTH;
//
extern const	STRING	KYPREFIX;
extern const	STRING	KYACCESS;
extern const	STRING	KYPTYPE;
//
extern const	STRING	KYBASE;
extern const	STRING	KYMASK;
extern const	STRING	KYNADDR;
//
extern const	STRING	KYEXPR;
extern const	STRING	KYVAL;
extern const	STRING	KYFORMAT;
extern const	STRING	KYSTR;
//
extern const	STRING	KYSCOPE;
extern const	STRING	KYMEMORY;
extern const	STRING	KYSINGLE;
extern const	STRING	KYDOUBLE;
//
extern const	STRING	KYNP;
extern const	STRING	KYNPIC;
extern const	STRING	KYNPSINGLE;
extern const	STRING	KYNPDOUBLE;
extern const	STRING	KYNSCOPES;
// Regs definition(s)
extern const	STRING	KYREGS_N;
extern const	STRING	KYREGS_NOTE;
extern const	STRING	KYREGS_INSERT_H;
// Board definitions for C/C++
extern const	STRING	KYBDEF_DEFN;
extern const	STRING	KYBDEF_IOTYPE;
extern const	STRING	KYBDEF_OSDEF;
extern const	STRING	KYBDEF_OSVAL;
// Top definitions
extern const	STRING	KYTOP_PORTLIST;
extern const	STRING	KYTOP_IODECL;
extern const	STRING	KYTOP_DEFNS;
extern const	STRING	KYTOP_MAIN;
extern const	STRING	KYTOP_INSERT;
// Main definitions
extern const	STRING	KYMAIN_PORTLIST;
extern const	STRING	KYMAIN_IODECL;
extern const	STRING	KYMAIN_DEFNS;
extern const	STRING	KYMAIN_INSERT;
extern const	STRING	KYMAIN_ALT;
// PIC definitions
extern	const	STRING	KYPIC, KYPIC_BUS, KYPIC_MAX;
// Interrupt definitions
extern	const	STRING	KY_INT, KY_WIRE, KY_DOTWIRE, KY_ID;
//
extern const	STRING	KYSTHIS;
extern const	STRING	KYTHISDOT;

#endif