/**
  ******************************************************************************
  * @file    App/App_Demo1.c
  * @author  Windy Albert
  * @version V1.0.0
  * @date    2024-01-06
  * @brief   Demo1 application program.
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "App_Demo1.h"

/* Public variables ----------------------------------------------------------*/
/* Public functions ----------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Task program
  * @param  task_name, stack size
  * @retval None
  */
TASK_REG_LEVEL_3(Demo1_task, 0x80)
{
    /* Do some init stuff here. */
    
    for(;;)
    {
        /* Do sth each 100 ms. */
        
        
        OSTimeDly(100);
    }
}

/******************* (C) COPYRIGHT 2023 Windy Albert ********** END OF FILE ***/
