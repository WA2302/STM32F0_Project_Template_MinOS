/**
  ******************************************************************************
  * @file    App/main.c 
  * @author  Windy Albert
  * @version V1.0.0
  * @date    27-January-2023
  * @brief   Main program body
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Public variables ----------------------------------------------------------*/
extern uint32_t Image$$TASK_TBL$$Base;
extern uint32_t Image$$TASK_TBL$$Limit;

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
    RCC_ClocksTypeDef RCC_Clocks;
    task_t *task;
    
	__disable_irq();
    
    /* SysTick end of count event each 1ms */
    RCC_GetClocksFreq(&RCC_Clocks);
    SysTick_Config(RCC_Clocks.HCLK_Frequency / 1000);
    
    for( task = (task_t*)&Image$$TASK_TBL$$Base;                \
         task < (task_t*)&Image$$TASK_TBL$$Limit;               \
         task ++ )
    {
        TaskCreate(task->task_fnc, task->p_Stack);
    }
    __enable_irq();

    OSStart();
}

/******************* (C) COPYRIGHT 2023 Windy Albert ********** END OF FILE ***/
