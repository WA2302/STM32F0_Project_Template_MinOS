/**
  ******************************************************************************
  * @file    App/App_Demo3.c
  * @author  Windy Albert
  * @version V1.0.0
  * @date    2024-01-06
  * @brief   Demo1 application program.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "App_Demo3.h"

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
TASK_REG_LEVEL_3(Demo3_task, 0x80)
{
    /* Do some init stuff here. */
    
    for(;;)
    {
        OSWaitTime(test == 1, 300);
        
        /* Do sth each the condition is true or timeout. */
        if(OSisTimeOut())
        {
            //timeout
        }
        else
        {
            //condition is true
        }
    }
}

/******************* (C) COPYRIGHT 2023 Windy Albert ********** END OF FILE ***/
