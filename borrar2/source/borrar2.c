/*
 * Copyright 2016-2022 NXP
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of NXP Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file    borrar2.c
 * @brief   Application entry point.
 */
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MIMXRT1052.h"
#include "fsl_debug_console.h"
#include <cr_section_macros.h>

/* TODO: insert other include files here. */

#define SDRAM_BASE_ADDR 0x80000000
#define SDRAM_SIZE_BYTES (32 * 1024 * 1024)
#define SIZE_1MG (1024 * 1024)
#define SIZE_2MG (2 * SIZE_1MG)
#define SIZE_4MG (4 * SIZE_1MG)
#define SIZE_8MG (8 * SIZE_1MG)
#define SIZE_16MG (16 * SIZE_1MG)
#define SIZE_32MG (32 * SIZE_1MG)

//__NOINIT(RAM4) int var[SIZE_1MG];
__DATA(RAM4) int var[SIZE_1MG];
//__attribute__ ((section("respective_slot"))) int var[SIZE_1MG];
//__attribute__((section("yerih", RAM4))) int var[SIZE_2MG];
//int var[SIZE_2MG];
//int var[SIZE_2MG] __attribute__((section(".ARM.__at_0x80000000")));


void delay(){
	int i;
	for(i = 0; i < 800000; i++)
		__asm volatile ("nop");

}

void fillRAM()
{
	int i = 0;
	for(i = 0; i < SIZE_1MG; i++)
	{
		var[i] = i;
//		printf("sdram[%d] = %d\r\n", i, var[i]);
	}
}

/* TODO: insert other definitions and declarations here. */

/*
 * @brief   Application entry point.
 */
int main(void) {

    /* Init board hardware. */
    BOARD_ConfigMPU();
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
#endif

    PRINTF("Hello World\n");
    GPIO_WritePinOutput(BOARD_INITPINS_F14_GPIO, BOARD_INITPINS_F14_GPIO_PIN, 0);
    fillRAM();

    int i = 0 ;
    while(1) {

//    		var[i] = i;
            GPIO_WritePinOutput(BOARD_INITPINS_F14_GPIO, BOARD_INITPINS_F14_GPIO_PIN, 0);
            PRINTF("Hello World 2: ram[%d] %d\r\n", i, var[i]);
            delay();

//            var[i] = i++;
            GPIO_WritePinOutput(BOARD_INITPINS_F14_GPIO, BOARD_INITPINS_F14_GPIO_PIN, 1);
            PRINTF("Hello World 2: ram[%d] %d \r\n", i, var[i]);
            delay();
            __asm volatile ("nop");
            i++;
    }
    return 0 ;
}
