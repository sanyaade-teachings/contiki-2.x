/*
 * Copyright (c) 2010, Mariano Alvira <mar@devl.org> and other contributors
 * to the MC1322x project (http://mc1322x.devl.org)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Institute nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE INSTITUTE AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE INSTITUTE OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * This file is part of libmc1322x: see http://mc1322x.devl.org
 * for details. 
 *
 * $Id: quahogcon.h,v 1.1 2010/06/10 14:48:32 maralvira Exp $
 */

#ifndef BOARD_QUAHOG10_H
#define BOARD_QUAHOG10_H

#define LED_REDBANK_0		(0x1ULL << 2)
#define LED_REDBANK_1		(0x1ULL << 0)
#define LED_REDBANK_2		(0x1ULL << 28)
#define LED_REDBANK_3		(0x1ULL << 25)
#define LED_REDBANK_4		(0x1ULL << 43)

#define LED_CENTERRED		(0x1ULL << 12)
#define LED_CENTERGREEN		(0x1ULL << 13)

#define LED_SIDERED			(0x1ULL << 12)
#define LED_SIDEGREEN		(0x1ULL << 21)
#define LED_SIDEYELLOW		(0x1ULL << 35)

// Buttons in GPIO mode
#define BUTTON1_OUT			(0x1ULL << 23)
#define BUTTON1_IN			(0x1ULL << 27)
#define BUTTON2_OUT			(0x1ULL << 22)
#define BUTTON2_IN			(0x1ULL << 26)

#define LED_RED   12
#define LED_GREEN 21
#define LED_BLUE  35

/* XTAL TUNE parameters */
/* see http://devl.org/pipermail/mc1322x/2009-December/000162.html */
/* for details about how to make this measurment */

/* Econotag also needs an addtional 12pf on board */
/* Coarse tune: add 4pf */
#define CTUNE_4PF 1
/* Coarse tune: add 0-15 pf (CTUNE is 4 bits) */
#define CTUNE 11
/* Fine tune: add FTUNE * 156fF (FTUNE is 5bits) */
#define FTUNE 7

#include <std_conf.h>

#endif
