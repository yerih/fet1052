/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v12.0
processor: MIMXRT1052xxxxB
package_id: MIMXRT1052CVL5B
mcu_data: ksdk2_0
processor_version: 12.0.1
pin_labels:
- {pin_num: K14, pin_signal: GPIO_AD_B0_12, label: TX, identifier: TX}
- {pin_num: L14, pin_signal: GPIO_AD_B0_13, label: RX, identifier: RX}
- {pin_num: F14, pin_signal: GPIO_AD_B0_09, label: LED_F14, identifier: LED_F14}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: K14, peripheral: LPUART1, signal: TX, pin_signal: GPIO_AD_B0_12}
  - {pin_num: L14, peripheral: LPUART1, signal: RX, pin_signal: GPIO_AD_B0_13}
  - {pin_num: J3, peripheral: USDHC1, signal: usdhc_clk, pin_signal: GPIO_SD_B0_01}
  - {pin_num: J4, peripheral: USDHC1, signal: usdhc_cmd, pin_signal: GPIO_SD_B0_00}
  - {pin_num: J1, peripheral: USDHC1, signal: 'usdhc_data, 0', pin_signal: GPIO_SD_B0_02}
  - {pin_num: K1, peripheral: USDHC1, signal: 'usdhc_data, 1', pin_signal: GPIO_SD_B0_03}
  - {pin_num: H2, peripheral: USDHC1, signal: 'usdhc_data, 2', pin_signal: GPIO_SD_B0_04}
  - {pin_num: J2, peripheral: USDHC1, signal: 'usdhc_data, 3', pin_signal: GPIO_SD_B0_05}
  - {pin_num: C2, peripheral: SEMC, signal: 'ADDR, 00', pin_signal: GPIO_EMC_09}
  - {pin_num: G1, peripheral: SEMC, signal: 'ADDR, 01', pin_signal: GPIO_EMC_10}
  - {pin_num: G3, peripheral: SEMC, signal: 'ADDR, 02', pin_signal: GPIO_EMC_11}
  - {pin_num: H1, peripheral: SEMC, signal: 'ADDR, 03', pin_signal: GPIO_EMC_12}
  - {pin_num: A6, peripheral: SEMC, signal: 'ADDR, 04', pin_signal: GPIO_EMC_13}
  - {pin_num: B6, peripheral: SEMC, signal: 'ADDR, 05', pin_signal: GPIO_EMC_14}
  - {pin_num: B1, peripheral: SEMC, signal: 'ADDR, 06', pin_signal: GPIO_EMC_15}
  - {pin_num: A5, peripheral: SEMC, signal: 'ADDR, 07', pin_signal: GPIO_EMC_16}
  - {pin_num: A4, peripheral: SEMC, signal: 'ADDR, 08', pin_signal: GPIO_EMC_17}
  - {pin_num: B2, peripheral: SEMC, signal: 'ADDR, 09', pin_signal: GPIO_EMC_18}
  - {pin_num: G2, peripheral: SEMC, signal: 'ADDR, 10', pin_signal: GPIO_EMC_23}
  - {pin_num: B4, peripheral: SEMC, signal: 'ADDR, 11', pin_signal: GPIO_EMC_19}
  - {pin_num: A3, peripheral: SEMC, signal: 'ADDR, 12', pin_signal: GPIO_EMC_20}
  - {pin_num: C1, peripheral: SEMC, signal: 'BA, 0', pin_signal: GPIO_EMC_21}
  - {pin_num: F1, peripheral: SEMC, signal: 'BA, 1', pin_signal: GPIO_EMC_22}
  - {pin_num: D3, peripheral: SEMC, signal: semc_cas, pin_signal: GPIO_EMC_24}
  - {pin_num: A2, peripheral: SEMC, signal: semc_cke, pin_signal: GPIO_EMC_27}
  - {pin_num: B3, peripheral: SEMC, signal: semc_clk, pin_signal: GPIO_EMC_26}
  - {pin_num: E1, peripheral: SEMC, signal: 'CS, 0', pin_signal: GPIO_EMC_29}
  - {pin_num: C7, peripheral: SEMC, signal: 'CSX, 0', pin_signal: GPIO_EMC_41}
  - {pin_num: E3, peripheral: SEMC, signal: 'DATA, 00', pin_signal: GPIO_EMC_00}
  - {pin_num: F3, peripheral: SEMC, signal: 'DATA, 01', pin_signal: GPIO_EMC_01}
  - {pin_num: F4, peripheral: SEMC, signal: 'DATA, 02', pin_signal: GPIO_EMC_02}
  - {pin_num: G4, peripheral: SEMC, signal: 'DATA, 03', pin_signal: GPIO_EMC_03}
  - {pin_num: F2, peripheral: SEMC, signal: 'DATA, 04', pin_signal: GPIO_EMC_04}
  - {pin_num: G5, peripheral: SEMC, signal: 'DATA, 05', pin_signal: GPIO_EMC_05}
  - {pin_num: H5, peripheral: SEMC, signal: 'DATA, 06', pin_signal: GPIO_EMC_06}
  - {pin_num: H4, peripheral: SEMC, signal: 'DATA, 07', pin_signal: GPIO_EMC_07}
  - {pin_num: C6, peripheral: SEMC, signal: 'DATA, 08', pin_signal: GPIO_EMC_30}
  - {pin_num: C5, peripheral: SEMC, signal: 'DATA, 09', pin_signal: GPIO_EMC_31}
  - {pin_num: D5, peripheral: SEMC, signal: 'DATA, 10', pin_signal: GPIO_EMC_32}
  - {pin_num: C4, peripheral: SEMC, signal: 'DATA, 11', pin_signal: GPIO_EMC_33}
  - {pin_num: D4, peripheral: SEMC, signal: 'DATA, 12', pin_signal: GPIO_EMC_34}
  - {pin_num: E5, peripheral: SEMC, signal: 'DATA, 13', pin_signal: GPIO_EMC_35}
  - {pin_num: C3, peripheral: SEMC, signal: 'DATA, 14', pin_signal: GPIO_EMC_36}
  - {pin_num: E4, peripheral: SEMC, signal: 'DATA, 15', pin_signal: GPIO_EMC_37}
  - {pin_num: H3, peripheral: SEMC, signal: 'DM, 0', pin_signal: GPIO_EMC_08}
  - {pin_num: D6, peripheral: SEMC, signal: 'DM, 1', pin_signal: GPIO_EMC_38}
  - {pin_num: B7, peripheral: SEMC, signal: semc_dqs, pin_signal: GPIO_EMC_39}
  - {pin_num: D2, peripheral: SEMC, signal: semc_ras, pin_signal: GPIO_EMC_25}
  - {pin_num: A7, peripheral: SEMC, signal: semc_rdy, pin_signal: GPIO_EMC_40}
  - {pin_num: D1, peripheral: SEMC, signal: semc_we, pin_signal: GPIO_EMC_28}
  - {pin_num: D13, peripheral: USDHC1, signal: usdhc_cd_b, pin_signal: GPIO_B1_12}
  - {pin_num: F14, peripheral: GPIO1, signal: 'gpio_io, 09', pin_signal: GPIO_AD_B0_09, direction: OUTPUT, slew_rate: Fast}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           

  /* GPIO configuration of LED_F14 on GPIO_AD_B0_09 (pin F14) */
  gpio_pin_config_t LED_F14_config = {
      .direction = kGPIO_DigitalOutput,
      .outputLogic = 0U,
      .interruptMode = kGPIO_NoIntmode
  };
  /* Initialize GPIO functionality on GPIO_AD_B0_09 (pin F14) */
  GPIO_PinInit(GPIO1, 9U, &LED_F14_config);

  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_09_GPIO1_IO09, 0U); 
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_12_LPUART1_TXD, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_12_LPUART1_TX, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_13_LPUART1_RXD, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_13_LPUART1_RX, 0U); 
#endif
  IOMUXC_SetPinMux(IOMUXC_GPIO_B1_12_USDHC1_CD_B, 0U); 
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_00_SEMC_DA00, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_00_SEMC_DATA00, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_01_SEMC_DA01, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_01_SEMC_DATA01, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_02_SEMC_DA02, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_02_SEMC_DATA02, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_03_SEMC_DA03, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_03_SEMC_DATA03, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_04_SEMC_DA04, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_04_SEMC_DATA04, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_05_SEMC_DA05, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_05_SEMC_DATA05, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_06_SEMC_DA06, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_06_SEMC_DATA06, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_07_SEMC_DA07, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_07_SEMC_DATA07, 0U); 
#endif
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_08_SEMC_DM00, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_09_SEMC_ADDR00, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_10_SEMC_ADDR01, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_11_SEMC_ADDR02, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_12_SEMC_ADDR03, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_13_SEMC_ADDR04, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_14_SEMC_ADDR05, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_15_SEMC_ADDR06, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_16_SEMC_ADDR07, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_17_SEMC_ADDR08, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_18_SEMC_ADDR09, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_19_SEMC_ADDR11, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_20_SEMC_ADDR12, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_21_SEMC_BA0, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_22_SEMC_BA1, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_23_SEMC_ADDR10, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_24_SEMC_CAS, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_25_SEMC_RAS, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_26_SEMC_CLK, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_27_SEMC_CKE, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_28_SEMC_WE, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_29_SEMC_CS0, 0U); 
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_30_SEMC_DA08, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_30_SEMC_DATA08, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_31_SEMC_DA09, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_31_SEMC_DATA09, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_32_SEMC_DA10, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_32_SEMC_DATA10, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_33_SEMC_DA11, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_33_SEMC_DATA11, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_34_SEMC_DA12, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_34_SEMC_DATA12, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_35_SEMC_DA13, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_35_SEMC_DATA13, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_36_SEMC_DA14, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_36_SEMC_DATA14, 0U); 
#endif
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_37_SEMC_DA15, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_37_SEMC_DATA15, 0U); 
#endif
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_38_SEMC_DM01, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_39_SEMC_DQS, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_40_SEMC_RDY, 0U); 
#if FSL_IOMUXC_DRIVER_VERSION >= MAKE_VERSION(2, 0, 3)
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_41_SEMC_CSX0, 0U); 
#else
  IOMUXC_SetPinMux(IOMUXC_GPIO_EMC_41_SEMC_CSX00, 0U); 
#endif
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_00_USDHC1_CMD, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_01_USDHC1_CLK, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_02_USDHC1_DATA0, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_03_USDHC1_DATA1, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_04_USDHC1_DATA2, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B0_05_USDHC1_DATA3, 0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_09_GPIO1_IO09, 0x70A1U); 
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
