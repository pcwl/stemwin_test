/**
  ******************************************************************************
  * @file    ili9341.c
  * @author  MCD Application Team
  * @version V1.0.2
  * @date    02-December-2014
  * @brief   This file includes the LCD driver for ILI9341 LCD.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2014 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/
#include "ili9341.h"

/** @addtogroup BSP
  * @{
  */ 

/** @addtogroup Components
  * @{
  */ 
  
/** @addtogroup ILI9341
  * @brief This file provides a set of functions needed to drive the 
  *        ILI9341 LCD.
  * @{
  */

/** @defgroup ILI9341_Private_TypesDefinitions
  * @{
  */ 
/**
  * @}
  */ 

/** @defgroup ILI9341_Private_Defines
  * @{
  */
/**
  * @}
  */ 
  
/** @defgroup ILI9341_Private_Macros
  * @{
  */
/**
  * @}
  */  

/** @defgroup ILI9341_Private_Variables
  * @{
  */ 

LCD_DrvTypeDef   ili9341_drv = 
{
  ili9341_Init,
  ili9341_ReadID,
  ili9341_DisplayOn,
  ili9341_DisplayOff,
  0,
  0,
  0,
  0,
  0,
  0,
  ili9341_GetLcdPixelWidth,
  ili9341_GetLcdPixelHeight,
  0,
  0,    
};

/**
  * @}
  */ 
  
/** @defgroup ILI9341_Private_FunctionPrototypes
  * @{
  */

/**
  * @}
  */ 
  
/** @defgroup ILI9341_Private_Functions
  * @{
  */   

/**
  * @brief  Power on the LCD.
  * @param  None
  * @retval None
  */
void ili9341_Init(void)
{
	// LCD9431Init();
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, GPIO_PIN_SET);
  HAL_GPIO_WritePin(BL_GPIO_Port, BL_Pin, GPIO_PIN_SET);
	HAL_Delay(200);
  
  ili9341_WriteReg(0xCF);  
	ili9341_WriteData(0x00); 
	ili9341_WriteData(0xc3); 
	ili9341_WriteData(0X30); 

	ili9341_WriteReg(0xED);  
	ili9341_WriteData(0x64); 
	ili9341_WriteData(0x03); 
	ili9341_WriteData(0X12); 
	ili9341_WriteData(0X81); 

	ili9341_WriteReg(0xE8);  
	ili9341_WriteData(0x85); 
	ili9341_WriteData(0x00); 
	ili9341_WriteData(0x78); //7a

	ili9341_WriteReg(0xCB);  
	ili9341_WriteData(0x39); 
	ili9341_WriteData(0x2C); 
	ili9341_WriteData(0x00); 
	ili9341_WriteData(0x34); 
	ili9341_WriteData(0x02); 

	ili9341_WriteReg(0xF7);  
	ili9341_WriteData(0x20); 

	ili9341_WriteReg(0xEA);  
	ili9341_WriteData(0x00); 
	ili9341_WriteData(0x00); 

	ili9341_WriteReg(0xC0);    //Power control 
	ili9341_WriteData(0x1b);   //VRH[5:0]  21

	ili9341_WriteReg(0xC1);    //Power control 
	ili9341_WriteData(0x12);   //SAP[2:0];BT[3:0] 

      ili9341_WriteReg(0xC5);   
	ili9341_WriteData(0x32);   //32
	ili9341_WriteData(0x3C); 

	ili9341_WriteReg(0xC7);    //VCM control2   
	ili9341_WriteData(0x93);  //9e

	ili9341_WriteReg(0x36);    // Memory Access Control 
	ili9341_WriteData(0x08);     // 00 RGB ����

	ili9341_WriteReg(0x3A);   
	ili9341_WriteData(0x55); 

	ili9341_WriteReg(0xB1);   
	ili9341_WriteData(0x00);   
	ili9341_WriteData(0x1b); //16

	ili9341_WriteReg(0xB6);    // Display Function Control 
	ili9341_WriteData(0x0A); 
	ili9341_WriteData(0xA2); 

	ili9341_WriteReg(0xF6);    
	ili9341_WriteData(0x01); 
	ili9341_WriteData(0x30); 

	ili9341_WriteReg(0xF2);    // 3Gamma Function Disable 
	ili9341_WriteData(0x00); 

	ili9341_WriteReg(0x26);    //Gamma curve selected 
	ili9341_WriteData(0x01); 

	ili9341_WriteReg(0xE0);    //Set Gamma 
	ili9341_WriteData(0x0F); 
	ili9341_WriteData(0x1d); 
	ili9341_WriteData(0x1a); 
	ili9341_WriteData(0x0a); 
	ili9341_WriteData(0x0d); 
	ili9341_WriteData(0x07); 
	ili9341_WriteData(0x49); 
	ili9341_WriteData(0X66); 
	ili9341_WriteData(0x3b); 
	ili9341_WriteData(0x07); 
	ili9341_WriteData(0x11); 
	ili9341_WriteData(0x01); 
	ili9341_WriteData(0x09); 
	ili9341_WriteData(0x05); 
	ili9341_WriteData(0x04); //04

	ili9341_WriteReg(0XE1);    //Set Gamma '
	ili9341_WriteData(0x00); 
	ili9341_WriteData(0x18); 
	ili9341_WriteData(0x1d); 
	ili9341_WriteData(0x02); 
	ili9341_WriteData(0x0f); 
	ili9341_WriteData(0x04); 
	ili9341_WriteData(0x36); 
	ili9341_WriteData(0x13); 
	ili9341_WriteData(0x4c); 
	ili9341_WriteData(0x07); 
	ili9341_WriteData(0x13); 
	ili9341_WriteData(0x0f); 
	ili9341_WriteData(0x2E); 
	ili9341_WriteData(0x2f); 
	ili9341_WriteData(0x05);//0F

	ili9341_WriteReg(0x11);    //Exit Sleep 
	HAL_Delay(150); 
	ili9341_WriteReg(0x29);    //Display on 
}

/**
  * @brief  Disables the Display.
  * @param  None
  * @retval LCD Register Value.
  */
uint16_t ili9341_ReadID(void)
{
  LCD_IO_Init();
  return ((uint16_t)ili9341_ReadData(LCD_READ_ID4, LCD_READ_ID4_SIZE));
}

/**
  * @brief  Enables the Display.
  * @param  None
  * @retval None
  */
void ili9341_DisplayOn(void)
{
  /* Display On */
  ili9341_WriteReg(LCD_DISPLAY_ON);
}

/**
  * @brief  Disables the Display.
  * @param  None
  * @retval None
  */
void ili9341_DisplayOff(void)
{
  /* Display Off */
  ili9341_WriteReg(LCD_DISPLAY_OFF);
}

/**
  * @brief  Writes  to the selected LCD register.
  * @param  LCD_Reg: address of the selected register.
  * @retval None
  */
void ili9341_WriteReg(uint8_t LCD_Reg)
{
  LCD_IO_WriteReg(LCD_Reg);
}

/**
  * @brief  Writes data to the selected LCD register.
  * @param  LCD_Reg: address of the selected register.
  * @retval None
  */
void ili9341_WriteData(uint16_t RegValue)
{
  LCD_IO_WriteData(RegValue);
}

/**
  * @brief  Reads the selected LCD Register.
  * @param  RegValue: Address of the register to read
  * @param  ReadSize: Number of bytes to read
  * @retval LCD Register Value.
  */
uint32_t ili9341_ReadData(uint16_t RegValue, uint8_t ReadSize)
{
  /* Read a max of 4 bytes */
  return (LCD_IO_ReadData(RegValue, ReadSize));
}

/**
  * @brief  Get LCD PIXEL WIDTH.
  * @param  None
  * @retval LCD PIXEL WIDTH.
  */
uint16_t ili9341_GetLcdPixelWidth(void)
{
  /* Return LCD PIXEL WIDTH */
  return ILI9341_LCD_PIXEL_WIDTH;
}

/**
  * @brief  Get LCD PIXEL HEIGHT.
  * @param  None
  * @retval LCD PIXEL HEIGHT.
  */
uint16_t ili9341_GetLcdPixelHeight(void)
{
  /* Return LCD PIXEL HEIGHT */
  return ILI9341_LCD_PIXEL_HEIGHT;
}

/**
  * @}
  */ 

/**
  * @}
  */ 
  
/**
  * @}
  */ 

/**
  * @}
  */
  
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
