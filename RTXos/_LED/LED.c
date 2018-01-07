 /**---------------------------------------------------------------------------
 *  \file    Led.c
 *
 *  \date    2017-01-05
 *
 *  \short   LED functions
 *
 *  \author  juvyoung
    *******************************************************
 *  \Log
 *
 * %  [2017-01-05] -->  Created: Mini-function test module for HomeKit      
 */
/*====================[ System includes  ]================================================*/
#include "osObjects.h"                  // RTOS object definitions
#include "stm32f4xx.h"                  // Device header
#include "types.h"                          // type define for whole project

/*====================[ public includes  ]================================================*/
#include "Gpio.h"
#include "Led.h"

/*====================[ public variables ]================================================*/
BO blink_flag = FALSE;

/*==================================================
  **********   OS-taskList Create  **************
 ===================================================*/
void Init_BlinkyThread(void)
{
  osThreadCreate( osThread(Blink_LED), NULL );  // Thread Create
}

/*====================================================
 ************   Sub-functions  **********************
=====================================================*/
void LED_Init(void)
{
	LEDGN_OFF;
	LEDRD_OFF;
}

void Blink_LED(void const *arg)
{
	while(1)
	{
		if(FALSE == blink_flag)
		{
			LEDGN_OFF;
			LEDRD_OFF;		
		}
		else if (TRUE == blink_flag)
		{
			LEDGN_OFF; 
			LEDRD_ON;
		}
		
		blink_flag = (BO)(1-blink_flag); 
		
    osDelay(100);	
	}
}

/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/

