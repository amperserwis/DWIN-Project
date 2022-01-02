#ifndef __DWIN_APP_H
#define __DWIN_APP_H

//==============================================================================
//---------------------------------Includes-------------------------------------
//==============================================================================
#ifdef STM32L476xx
#include "stm32l4xx_hal.h"
#endif
#include <stdbool.h>
//==============================================================================
//---------------------------------Defines--------------------------------------
//==============================================================================

//==============================================================================
//--------------------------------Variables-------------------------------------
//==============================================================================

//==============================================================================
//--------------------------------PROTOTYPE-------------------------------------
//==============================================================================


//==============================================================================
//--------------------------------FUNCTIONS-------------------------------------
//==============================================================================
void ledPWM();
void dwinAppInit();
void curveOneProcessDWIN();
void curveProcessDWIN();
void curveProcessX10DWIN();
//==============================================================================
//---------------------------------END FILE-------------------------------------
//==============================================================================
#endif /* __DWIN_APP_H */