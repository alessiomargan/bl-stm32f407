/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
extern CRC_HandleTypeDef hcrc;
extern SPI_HandleTypeDef hspi3;
extern TIM_HandleTypeDef htim7;
extern UART_HandleTypeDef huart4;
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ecat_spi hspi3
#define printf_uart huart4
#define DBG_1_Pin GPIO_PIN_2
#define DBG_1_GPIO_Port GPIOE
#define DBG_2_Pin GPIO_PIN_3
#define DBG_2_GPIO_Port GPIOE
#define ECAT_CS_Pin GPIO_PIN_8
#define ECAT_CS_GPIO_Port GPIOE
#define ECAT_IRQ_Pin GPIO_PIN_10
#define ECAT_IRQ_GPIO_Port GPIOE
#define ECAT_IRQ_EXTI_IRQn EXTI15_10_IRQn
#define LED_1_Pin GPIO_PIN_12
#define LED_1_GPIO_Port GPIOE
#define LED_2_Pin GPIO_PIN_15
#define LED_2_GPIO_Port GPIOE
#define BTN_1_Pin GPIO_PIN_0
#define BTN_1_GPIO_Port GPIOE
#define BTN_1_EXTI_IRQn EXTI0_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
