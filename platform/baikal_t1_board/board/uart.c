/*
 * Copyright (c) 2016, prpl Foundation
 * 
 * Permission to use, copy, modify, and/or distribute this software for any purpose with or without 
 * fee is hereby granted, provided that the above copyright notice and this permission notice appear 
 * in all copies.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE 
 * FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM 
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, 
 * ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 * 
 * This code was written by Carlos Moratelli at Embedded System Group (GSE) at PUCRS/Brazil.
 * 
 */

#include <config.h>
#include <types.h>
#include <baikal-t1.h>
#include <uart.h>

/**
 * @file uart.c
 * 
 * @section DESCRIPTION
 * 
 * UART initialization and low level UART functions. 
 * 
 */

/** 
 * @brief Configures UART2 as stdout and UART6 as alternative. 
 * @param baudrate_u2 UART2 baudrate.
 * @param baudrate_u6 UART6 baudrate.
 * @param sysclk System clock. 
 */
void init_uart(uint32_t baudrate_u2, uint32_t baudrate_u6, uint32_t sysclk){

}


/** 
 * @brief Write char to UART2. 
 * @param c Character to be writed. 
 */
void putchar(uint8_t c){   
	while( !(UART_LSR&0x40) );
	UART_THR = c;   
}


/** 
 * @brief Block and wait for a character. 
 * @return Read character. 
 */
uint32_t getchar(void){
	
}

