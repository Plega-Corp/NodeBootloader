/*
             LUFA Library
     Copyright (C) Dean Camera, 2018.

  dean [at] fourwalledcubicle [dot] com
           www.lufa-lib.org
*/

/*
  Copyright 2018  Dean Camera (dean [at] fourwalledcubicle [dot] com)

  Permission to use, copy, modify, distribute, and sell this
  software and its documentation for any purpose is hereby granted
  without fee, provided that the above copyright notice appear in
  all copies and that both that the copyright notice and this
  permission notice and warranty disclaimer appear in supporting
  documentation, and that the name of the author not be used in
  advertising or publicity pertaining to distribution of the
  software without specific, written prior permission.

  The author disclaims all warranties with regard to this
  software, including all implied warranties of merchantability
  and fitness.  In no event shall the author be liable for any
  special, indirect or consequential damages or any damages
  whatsoever resulting from loss of use, data or profits, whether
  in an action of contract, negligence or other tortious action,
  arising out of or in connection with the use or performance of
  this software.
*/

/** \file
 *  \brief LUFA Custom Board Hardware Information Driver (Template)
 *
 *  This is a stub driver header file, for implementing custom board
 *  layout hardware with compatible LUFA board specific drivers. If
 *  the library is configured to use the BOARD_USER board mode, this
 *  driver file should be completed and copied into the "/Board/" folder
 *  inside the application's folder.
 *
 *  This stub is for the board-specific component of the LUFA Board Hardware
 *  information driver.
 */

#ifndef __BOARD_NODE_H__
#define __BOARD_NODE_H__
//#warning "Should Include Board"
	/* Includes: */
		// TODO: Add any required includes here
	/* Enable C linkage for C++ Compilers: */
		#if defined(__cplusplus)
			extern "C" {
		#endif

	/* Preprocessor Checks: */
		#if !defined(__INCLUDE_FROM_BOARD_H)
			#error Do not include this file directly. Include LUFA/Drivers/Board/Board.h instead.
		#endif


	/* Public Interface - May be used in end-application: */

		/* Macros: */
			/** Indicates the board has hardware LEDs mounted if defined. */
			#define BOARD_HAS_LEDS
			/** Pin that can reset the main MCU. */
			#define AVR_RESET_LINE_PORT PORTC
			#define AVR_RESET_LINE_DDR DDRC
			#define AVR_RESET_LINE_MASK (1 << 7)

			#define AVR_ERASE_LINE_PORT PORTC
			#define AVR_ERASE_LINE_DDR DDRC
			#define AVR_ERASE_LINE_MASK (1 << 6)
	/* Disable C linkage for C++ Compilers: */
		#if defined(__cplusplus)
			}
		#endif

#endif

/** @} */
