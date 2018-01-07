/**---------------------------------------------------------------------------------------------------
 *  \file     Gpio.c
 *
 *       GPIO functions
 *
 *  \date     created on: Jan. 6th, 2017
 *  \author   juvyoung 
 ****************************************************
 *  \Log
 *
 * %  [2016-11-08] -->  Created: GPIO definition and initialzation for HomeKit     
 */
 
/*====================[ System includes  ]================================================*/
#include "Gpio.h"

void Initial_GPIO(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
//
	RCC_AHB1PeriphClockCmd( RCC_AHB1Periph_GPIOA | 
	                        RCC_AHB1Periph_GPIOB | 
	                        RCC_AHB1Periph_GPIOC | 
	                        RCC_AHB1Periph_GPIOD |
                       	  RCC_AHB1Periph_GPIOE,  ENABLE);
	
/*************
  	 Port A
	************/
 /* \LEDs 
                 LED Red    @PA_6      
								 LED Yellow @PA_7  */
  GPIO_InitStructure.GPIO_Pin   = GPIO_Pin_6 | GPIO_Pin_7;
  GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_OUT;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100MHz
  GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_UP;
  GPIO_Init(GPIOA, &GPIO_InitStructure);	
	
	
/*************
  	 Port D
	************/
  /*  Nokia5110: SCLK @PD_7
      Nokia5110: SDIN @PD_6
      Nokia5110: DC   @PD_5
			Nokia5110: CE   @PD_4
			Nokia5110: RST	@PD_3 */	
	
}

/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
