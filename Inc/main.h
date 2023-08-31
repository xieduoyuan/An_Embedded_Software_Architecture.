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

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define INA_Pin GPIO_PIN_6
#define INA_GPIO_Port GPIOE
#define WHITE_Pin GPIO_PIN_7
#define WHITE_GPIO_Port GPIOF
#define BLUE_Pin GPIO_PIN_8
#define BLUE_GPIO_Port GPIOF
#define GREEN_Pin GPIO_PIN_9
#define GREEN_GPIO_Port GPIOF
#define SCL_Pin GPIO_PIN_10
#define SCL_GPIO_Port GPIOF
#define SDA_Pin GPIO_PIN_11
#define SDA_GPIO_Port GPIOF
#define KEY1_Pin GPIO_PIN_14
#define KEY1_GPIO_Port GPIOE
#define KEY2_Pin GPIO_PIN_15
#define KEY2_GPIO_Port GPIOE
#define INB_Pin GPIO_PIN_6
#define INB_GPIO_Port GPIOC
#define USART1_TX_Pin GPIO_PIN_9
#define USART1_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_10
#define USART_RX_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
