/**
  ******************************************************************************
  * @file    App/App_Demo2.c
  * @author  Windy Albert
  * @version V1.0.0
  * @date    2024-01-06
  * @brief   Demo1 application program.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "App_Demo2.h"

/* Public variables ----------------------------------------------------------*/
/* Public functions ----------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
static uint8_t test = 0;
/**
  * @brief  Task program
  * @param  task_name, stack size
  * @retval None
  */
TASK_REG_LEVEL_3(Demo2_task, 0x80)
{
    /* Do some init stuff here. */
    
    for(;;)
    {
        OSWait(test == 1);
        
        /* Do sth each the condition is true. */
        
    }
}

/******************* (C) COPYRIGHT 2023 Windy Albert ********** END OF FILE ***/
