//*****************************************************************************
//
// HAL_MSP-EXP430FR5969_Sharp128x128.h - Prototypes for the Sharp128x128
//                  LCD display driver. There is no output from Sharp128x128 LCD
//
//                   MSP430FR5994                 LCD Sharp128x128
//                -----------------             -----------------
//               |     P5.2/UCB0CLK|---------> |SPI_CLK  EXT_MODE|--GND
//            /|\|                 |           |            	 |
//             | |    P5.0/UCB0SIMO|---------> |SPI_SI   EXTCOMIN|--GND
//             --|RST              |           |              	 |
//               |             P1.3|---------> |SPI_CS           |
//               |             	   |		   |   Sharp128x128_initDisplay();      	     |
//               |             P6.2|---------> |DISP             |
//               |                 |		   |                 |
//               |             P1.2|-----*---> |VDD              |
//               |                 |      `--> |VDDA             |
//               |                 |            -----------------
//                -----------------
//*****************************************************************************


#ifndef __HAL_MSP_EXP430FR5994_SHARPLCD_H__
#define __HAL_MSP_EXP430FR5994_SHARPLCD_H__


//*****************************************************************************
//
// User Configuration for the LCD Driver
//
//*****************************************************************************

// Ports from MSP430 connected to LCD
#define LCD_SPI_SI_PORT                     GPIO_PORT_P5 //
#define LCD_SPI_CLK_PORT                    GPIO_PORT_P5 //
#define LCD_DISP_PORT                       GPIO_PORT_P6 //
#define LCD_POWER_PORT                      GPIO_PORT_P1 //
#define LCD_SPI_CS_PORT	                    GPIO_PORT_P1 //


// Pins from MSP430 connected to LCD
#define LCD_SPI_SI_PIN                      GPIO_PIN0 //
#define LCD_SPI_SI_PIN_FUNCTION             GPIO_PRIMARY_MODULE_FUNCTION
#define LCD_SPI_CLK_PIN                     GPIO_PIN2 //
#define LCD_SPI_CLK_PIN_FUNCTION            GPIO_PRIMARY_MODULE_FUNCTION
#define LCD_DISP_PIN                        GPIO_PIN2//
#define LCD_POWER_PIN                       GPIO_PIN2//
#define LCD_SPI_CS_PIN                      GPIO_PIN3//


// Definition of USCI base address to be used for SPI communication
#define LCD_EUSCI_BASE		      EUSCI_B1_BASE


// Non-volatile Memory used to store DisplayBuffer
#define NON_VOLATILE_MEMORY_BUFFER


//*****************************************************************************
//
// Prototypes for the globals exported by this driver.
//
//*****************************************************************************
extern void HAL_LCD_initDisplay(void);
extern void HAL_LCD_writeCommandOrData(uint16_t command);
extern void HAL_LCD_clearCS(void);
extern void HAL_LCD_setCS(void);
extern void HAL_LCD_prepareMemoryWrite(void);
extern void HAL_LCD_finishMemoryWrite(void);
extern void HAL_LCD_waitUntilLcdWriteFinish(void);
extern void HAL_LCD_disableDisplay(void);
extern void HAL_LCD_enableDisplay(void);


#endif // __HAL_MSP_EXP430FR5994_SHARPLCD_H__
