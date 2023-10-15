/* 
 Updated for GIT testing 210/23
 File name: LedsAndPB.h FOR EXERCISE 21
  Version: 1.1   int main()
{

    ;
}Date: 6/4/17  Author: JEC
*/

#ifndef LedsAndPB_H
#define LedsAndPB_H

#include "main.h"
#include "stm32f4xx_hal.h"


#define ToggleRedLed (HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_14))
#define ToggleBlueLed (HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_15))
#define ToggleGreenLed (HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12))
#define ToggleOrangeLed (HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_13))

#define TurnRedLedOn  (HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_SET))
#define TurnBlueLedOn  (HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_SET))
#define TurnGreenLedOn  (HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_SET))
#define TurnOrangeLedOn  (HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_SET))

#define TurnRedLedOff  (HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14, GPIO_PIN_RESET))
#define TurnBlueLedOff  (HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15, GPIO_PIN_RESET))
#define TurnGreenLedOff  (HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12, GPIO_PIN_RESET))
#define TurnOrangeLedOff  (HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13, GPIO_PIN_RESET))

/*
GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
    GPIO_PinState bitstatus;
*/

//#define GPIO_PinState UserPushButtonState; // This is a bitstatus type
#define ButtonIsReleased (GPIO_PIN_RESET)
#define ButtonIsPressed (GPIO_PIN_SET)

#define UserPBstatus (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0))


#define SensorInAlarm 1
#define SensorNotInAlarm 2
#define RedInAlarm 3
#define RedNotInAlarm 4

#endif


