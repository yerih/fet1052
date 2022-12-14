/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#include "dcd.h"

/* Component ID definition, used by tools. */
#ifndef FSL_COMPONENT_ID
#define FSL_COMPONENT_ID "platform.drivers.xip_board"
#endif

#if defined(XIP_BOOT_HEADER_ENABLE) && (XIP_BOOT_HEADER_ENABLE == 1)
#if defined(XIP_BOOT_HEADER_DCD_ENABLE) && (XIP_BOOT_HEADER_DCD_ENABLE == 1)
#if defined(__CC_ARM) || defined(__ARMCC_VERSION) || defined(__GNUC__)
__attribute__((section(".boot_hdr.dcd_data"), used))
#elif defined(__ICCARM__)
#pragma location = ".boot_hdr.dcd_data"
#endif

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: DCDx v3.0
processor: MIMXRT1052xxxxB
package_id: MIMXRT1052CVL5B
mcu_data: ksdk2_0
processor_version: 12.0.1
output_format: c_array
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* COMMENTS BELOW ARE USED AS SETTINGS FOR DCD DATA */
const uint8_t dcd_data[] = {
	/* HEADER */
	/* Tag */
	0xD2,
	/* Image Length */
	0x00, 0x10,
	/* Version */
	0x41,

	/* COMMANDS */

	/* group: 'New empty group 1' */
	/* #1, command: write_set_bits, address: IOMUXC_SW_MUX_CTL_PAD_GPIO_AD_B0_00, value: 0x0, size: 4 */
	0xCC, 0x00, 0x0C, 0x1C, 0x40, 0x1F, 0x80, 0xBC, 0x00, 0x00, 0x00, 0x00
	};
/* BE CAREFUL MODIFYING THIS SETTINGS - IT IS YAML SETTINGS FOR TOOLS */

#else
const uint8_t dcd_data[] = {0x00};
#endif /* XIP_BOOT_HEADER_DCD_ENABLE */
#endif /* XIP_BOOT_HEADER_ENABLE */
