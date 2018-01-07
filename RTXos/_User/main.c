/**---------------------------------------------------------------------------
 *  \file    main.c
 *
 *  \date    created on: Aug. 1st, 2016
 *
 *  \short   main functions
 *
 *  \author  juvyoung
    *******************************************************
 *  \Log
 *
 * %  [2017-01-05] -->  Created: Mini-function test module for HomeKit      
 */
 
/*====================[ System includes  ]================================================*/
#define osObjectsPublic                     // define objects in main module 
#include "osObjects.h"                      // RTOS object definitions
#include "stm32f4xx.h"                      // Device header
#include "types.h"                          // type define for whole project

/*====================[ public includes  ]================================================*/
#include "Led.h"
#include "Gpio.h"

void osTasks_create(void);
/*================================================
    **********  Main function  **************
 =================================================*/
int main (void) 
{
/*-------------------------
     One Time Operation
  -------------------------*/ 
// initialize peripherals/ system 
  Initial_GPIO();
  LED_Init();        	
	
  osKernelInitialize ();             // initialize CMSIS-RTOS	
  osTasks_create();
  osKernelStart ();                  // start thread execution 
	
  while(1);
}

/*====================================================
 ************   Sub-functions  **********************
=====================================================*/
/**------------------------------------------
*   void osTasks_create(void)
*
*     Put all individual OS functions here
*
*   \date      2016-11-09
*   \author    juvyoung
*/
void osTasks_create(void)
{
	Init_BlinkyThread();    
}	

/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
