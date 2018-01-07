/**
*  \file types.h
*
*  \author Michael J. Hohmann 
*          Michael Kunkelmann 
*
*  This header provide types that indicate size and signedness. This types have to be used in place of
*  the basic data types.
*
*/

#ifndef TYPES_H_INCLUDED
#define TYPES_H_INCLUDED

#include "stm32f4xx.h"  // reference <stdint.h>

/*================================================[ public includes  ]================================================*/

//#if   defined ( __CC_ARM )
//#define __ASM            __asm                                      /*!< asm keyword for ARM Compiler          */
//#define __INLINE         __inline                                   /*!< inline keyword for ARM Compiler       */
//#define __STATIC_INLINE  static __inline
/*================================================[ public datatypes ]================================================*/
typedef int32_t            S32;
typedef int16_t            S16;
typedef int8_t             S8;

typedef uint64_t           U64;                     
typedef uint32_t           U32;
typedef uint16_t           U16;
typedef uint8_t            U8;

typedef __IO uint32_t      vu32;
typedef __IO uint16_t      vu16;
typedef __IO uint8_t       vu8;

typedef enum { FALSE = 0, TRUE  = !FALSE } bool; 

typedef bool BO;

typedef void VO;

typedef enum
{
   RC_SUCCESS                    =  0,  /**< Function was successfully completed.                                    */
   RC_ERROR                      = -1,  /**< Non specific error.                                                     */
   RC_ERROR_NULL                 = -2,  /**< A pointer was NULL when a non-NULL pointer was expected.                */
   RC_ERROR_ZERO                 = -3,  /**< A value was zero when no zero can be accepted.                          */
   RC_ERROR_MEMORY               = -4,  /**< Out of memory.                                                          */
   RC_ERROR_RANGE                = -5,  /**< A value was out of Range.                                               */
   RC_ERROR_OVERRUN              = -6,  /**< A value was too big.                                                    */
   RC_ERROR_UNDERRUN             = -7,  /**< A value was too small                                                   */
   RC_ERROR_BUFFER_FULL          = -8,  /**< A buffer was full.                                                      */
   RC_ERROR_BUFFER_EMTPY         = -9,  /**< A buffer was empty.                                                     */
   RC_ERROR_BUSY                 = -10, /**< A resource was busy.                                                    */
   RC_ERROR_TIME_OUT             = -11, /**< Something take too much time.                                           */
   RC_ERROR_OPEN                 = -12, /**< A device can't be opened.                                               */
   RC_ERROR_CHECKSUM             = -13, /**< Wrong checksum.                                                         */
   RC_ERROR_INVALID_TYPE         = -14, /**< Invalid type of DTC access.                                             */
   RC_ERROR_READ_ONLY            = -15, /**< Object is read only.                                                    */
   RC_ERROR_WRITE_ONLY           = -16, /**< Object is write only.                                                   */
   RC_ERROR_INVALID              = -17, /**< Object is invalid.                                                      */
   RC_ERROR_READ_FAILS           = -18, /**< Could not read from object.                                             */
   RC_ERROR_WRITE_FAILS          = -19, /**< Could not write to the object.                                          */
   RC_ERROR_NOT_MATCH            = -20, /**< Something does not match.                                               */
   RC_ERROR_FILE_ACCESS          = -21, /**< Access to the file device fails.                                        */
   RC_ERROR_FILE_SIZE_UNDERRUN   = -22, /**< File device minimum data size not reached.                              */
   RC_ERROR_VERIFY               = -23, /**< Verification failed.                                                    */
   RC_ERROR_NOT_FOUND            = -24, /**< Object was not found.                                                   */
   RC_ERROR_WRITE_INVALID_LENGTH = -25  /**< Incoming Object has invalid length.                                     */
}RC;

/*====================================================================================================================*/

#endif
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
