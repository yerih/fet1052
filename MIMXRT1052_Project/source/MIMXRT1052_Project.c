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
 * @file    MIMXRT1052_Project.c
 * @brief   Application entry point.
 */
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MIMXRT1052.h"
#include "fsl_debug_console.h"
#include "ff.h"
#include "FreeRTOS.h"
//#include "FreeRTOSConfig.h"
#include "fsl_sd_disk.h"
//#include "fsl_os_abstraction.h"
#include "sdmmc_config.h"

/* TODO: insert other include files here. */
//extern sd_card_t g_sd; /* sd card descriptor */
extern FATFS FATFS_System_0;
FIL fp;

/* TODO: insert other definitions and declarations here. */
void delay()
{
	for(int i = 0; i < 4000000; i++)
		__asm volatile ("nop");
}
void sd_detectedCallback(bool isInserted, void* userData)
{
	printf("sd is inserted ? %d\r\n", isInserted);
}
void th_start()
{
	printf("thread function invoked\r\n");

	BOARD_SD_Config(&g_sd, sd_detectedCallback, BOARD_SDMMC_SD_HOST_IRQ, NULL);
	int r = SD_HostInit(&g_sd);
	printf("sd_init: %d\r\n", r);
//	r = f_open(&fp, "test.txt", FA_WRITE);
	printf("fmount: %d\r\n", r);
	printf("fopen: %d\r\n", r);

    int i = 0 ;
    while(1) {
        i++ ;
        GPIO_WritePinOutput(BOARD_INITPINS_LED_F14_GPIO, BOARD_INITPINS_LED_F14_GPIO_PIN, 1);
        delay();

        GPIO_WritePinOutput(BOARD_INITPINS_LED_F14_GPIO, BOARD_INITPINS_LED_F14_GPIO_PIN, 0);
        delay();
    }
}

void threadStart()
{
	printf("creating thread\r\n");


	int r = f_mount(&FATFS_System_0, "0:", 1);
	printf("fmount = %d\r\n", r);
	r = f_open(&fp, "test.txt", FA_WRITE);
	printf("fopen = %d\r\n", r);
	xTaskCreate(th_start, "threadStart", configMINIMAL_STACK_SIZE+100, NULL, configMAX_PRIORITIES, NULL);
	printf("thread created \r\n", 555);
	vTaskStartScheduler();
	printf("start scheduler\r\n", 555);
}

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


    PRINTF("Hello World\r\n");


//    FILE* file = fopen("test.txt", "rw");
//    printf("file open. result = %d\r\n", file != NULL);
//    int r = f_mount(&FATFS_System_0, "0:", 1);

//    int r = f_open(&fp, "test.txt", FA_WRITE);
//    printf("file open. result = %d\r\n", r);
//    f_close(&fp);
    threadStart();

    /* Force the counter to be placed into memory. */
    int i = 0 ;
    /* Enter an infinite loop, just incrementing a counter. */
    while(1) {
        i++ ;
//        PRINTF("Hello World\r\n");
        GPIO_WritePinOutput(BOARD_INITPINS_LED_F14_GPIO, BOARD_INITPINS_LED_F14_GPIO_PIN, 1);
        delay();

//        PRINTF("Hello World\r\n");
        GPIO_WritePinOutput(BOARD_INITPINS_LED_F14_GPIO, BOARD_INITPINS_LED_F14_GPIO_PIN, 0);
        delay();
        /* 'Dummy' NOP to allow source level single stepping of
            tight while() loop */
        __asm volatile ("nop");
    }
    return 0 ;
}
