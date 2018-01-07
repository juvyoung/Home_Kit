/**---------------------------------------------------------------------------------------------------
 *  \file     Gpio.h
 *
 *     GPIO functions
 
 *  \date     created on: Jan. 6th, 2017
 *  \author   juvyoung 
 ****************************************************
 *  \Log
 *
 * %  [2016-11-08] -->  Created: GPIO definition and initialzation for HomeKit     
 */
#ifndef _GPIO_H
#define _GPIO_H

/*===============================================[ public functions ]================================================*/
#include "stm32f4xx.h"            // Device header

/*===============================================[ public defines   ]================================================*/

/*==================================================
  **********   input Pins  **************
===================================================*/


/*==================================================
  **********   Output Pins  **************
===================================================*/
/*-- LED Light --*/
#define LEDGN_ON   GPIO_ResetBits(GPIOA,GPIO_Pin_6);
#define LEDGN_OFF  GPIO_SetBits(GPIOA,GPIO_Pin_6);

#define LEDRD_ON   GPIO_ResetBits(GPIOA,GPIO_Pin_7);
#define LEDRD_OFF  GPIO_SetBits(GPIOA,GPIO_Pin_7);

/*===============================================[ public functions ]================================================*/
/**------------------------------------------------
*   void Initial_GPIO(void)
*
*   \short    init. zone for all pins
*
*   \date     2016-11-09
*   \author   juvyoung
*/
void Initial_GPIO(void);

#endif
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
