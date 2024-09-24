/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
typedef enum GEAR_E {
	GEAR_NEUTRAL = 0,
	GEAR_FIRST,
	GEAR_SECOND,
	GEAR_THIRD,
	GEAR_FOURTH,
	GEAR_FIFTH,
	GEAR_SIXTH,

	GEAR_ENUM_SIZE

} GEAR_E;
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
void Display7s(GEAR_E gear);
void Downshift();
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RCC_IN_Pin GPIO_PIN_0
#define RCC_IN_GPIO_Port GPIOD
#define RCC_OUT_Pin GPIO_PIN_1
#define RCC_OUT_GPIO_Port GPIOD
#define DEC_BIT_A_Pin GPIO_PIN_5
#define DEC_BIT_A_GPIO_Port GPIOA
#define DEC_BIT_B_Pin GPIO_PIN_6
#define DEC_BIT_B_GPIO_Port GPIOA
#define DEC_BIT_C_Pin GPIO_PIN_7
#define DEC_BIT_C_GPIO_Port GPIOA
#define DRS_PWM_Pin GPIO_PIN_0
#define DRS_PWM_GPIO_Port GPIOB
#define SOL_DOWN_SIG_Pin GPIO_PIN_1
#define SOL_DOWN_SIG_GPIO_Port GPIOB
#define BOOT1_Pin GPIO_PIN_2
#define BOOT1_GPIO_Port GPIOB
#define LED2_Pin GPIO_PIN_13
#define LED2_GPIO_Port GPIOB
#define nNEUTRAL_SENS_Pin GPIO_PIN_15
#define nNEUTRAL_SENS_GPIO_Port GPIOB
#define nDRS_Pin GPIO_PIN_8
#define nDRS_GPIO_Port GPIOA
#define nDOWN_PADDLE_Pin GPIO_PIN_9
#define nDOWN_PADDLE_GPIO_Port GPIOA
#define nUNLOCK_DOWN_Pin GPIO_PIN_10
#define nUNLOCK_DOWN_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_4
#define LED1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
