 /**---------------------------------------------------------------------------
 *  \file    Led.h
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
#ifndef _LED_H
#define _LED_H


/*===================[ public functions ]====================================*/
/*==================================================
  **********   OS-taskList create  **************
 ===================================================*/
void Init_BlinkyThread(void);     // init thread

/**------------------------------------------------
*   void LED_Init(void)
*
*     LED status initialzation
*
*   \date      2017-01-06
*   \author    juvyoung
*/
void LED_Init(void);

/**--------------------------------------------
*   void Blink_LED(void const *arg)
*
*     OS task function: [Blinky LED]
    Test Time accuracy of time tick;
*
*   \date:     2017-01-06
*   \author:   juvyoung
*/
void Blink_LED(void const *arg);

#endif
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
