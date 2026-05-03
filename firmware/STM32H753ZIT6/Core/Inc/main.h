/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32h7xx_hal.h"

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
#define USR_SW_Pin GPIO_PIN_5
#define USR_SW_GPIO_Port GPIOE
#define ADC_CURRENT_SENSE_Pin GPIO_PIN_3
#define ADC_CURRENT_SENSE_GPIO_Port GPIOF
#define ADC_24V_SENSE_Pin GPIO_PIN_4
#define ADC_24V_SENSE_GPIO_Port GPIOF
#define ADC_5V_SENSE_Pin GPIO_PIN_5
#define ADC_5V_SENSE_GPIO_Port GPIOF
#define QSPI_IO3_Pin GPIO_PIN_6
#define QSPI_IO3_GPIO_Port GPIOF
#define QSPI_IO2_Pin GPIO_PIN_7
#define QSPI_IO2_GPIO_Port GPIOF
#define QSPI_IO0_Pin GPIO_PIN_8
#define QSPI_IO0_GPIO_Port GPIOF
#define QSPI_IO1_Pin GPIO_PIN_9
#define QSPI_IO1_GPIO_Port GPIOF
#define QSPI_CLK_Pin GPIO_PIN_10
#define QSPI_CLK_GPIO_Port GPIOF
#define HSE_IN_Pin GPIO_PIN_0
#define HSE_IN_GPIO_Port GPIOH
#define HSE_OUT_Pin GPIO_PIN_1
#define HSE_OUT_GPIO_Port GPIOH
#define FRAM_CS_Pin GPIO_PIN_0
#define FRAM_CS_GPIO_Port GPIOC
#define FRAM_MOSI_Pin GPIO_PIN_1
#define FRAM_MOSI_GPIO_Port GPIOC
#define FRAM_MISO_Pin GPIO_PIN_2
#define FRAM_MISO_GPIO_Port GPIOC
#define UI_RST_Pin GPIO_PIN_15
#define UI_RST_GPIO_Port GPIOF
#define B_LED_Pin GPIO_PIN_7
#define B_LED_GPIO_Port GPIOE
#define G_LED_Pin GPIO_PIN_8
#define G_LED_GPIO_Port GPIOE
#define R_LED_Pin GPIO_PIN_9
#define R_LED_GPIO_Port GPIOE
#define USART3_TX_Pin GPIO_PIN_10
#define USART3_TX_GPIO_Port GPIOB
#define USART3_RX_Pin GPIO_PIN_11
#define USART3_RX_GPIO_Port GPIOB
#define DRV_CS_Pin GPIO_PIN_12
#define DRV_CS_GPIO_Port GPIOB
#define RS485_DE_Pin GPIO_PIN_14
#define RS485_DE_GPIO_Port GPIOB
#define MTR_nSLEEP_Pin GPIO_PIN_15
#define MTR_nSLEEP_GPIO_Port GPIOB
#define DIR_Pin GPIO_PIN_8
#define DIR_GPIO_Port GPIOD
#define STEP_Pin GPIO_PIN_9
#define STEP_GPIO_Port GPIOD
#define nFAULT_Pin GPIO_PIN_10
#define nFAULT_GPIO_Port GPIOD
#define ENABLE_Pin GPIO_PIN_11
#define ENABLE_GPIO_Port GPIOD
#define CRASH_FLAG_Pin GPIO_PIN_12
#define CRASH_FLAG_GPIO_Port GPIOD
#define CRASH_FLAG_EXTI_IRQn EXTI15_10_IRQn
#define HOME_FLAG_Pin GPIO_PIN_13
#define HOME_FLAG_GPIO_Port GPIOD
#define HOME_FLAG_EXTI_IRQn EXTI15_10_IRQn
#define JOG_FWD_Pin GPIO_PIN_2
#define JOG_FWD_GPIO_Port GPIOG
#define JOG_REV_Pin GPIO_PIN_3
#define JOG_REV_GPIO_Port GPIOG
#define QSPI_CS_Pin GPIO_PIN_6
#define QSPI_CS_GPIO_Port GPIOG
#define USART6_TX_Pin GPIO_PIN_6
#define USART6_TX_GPIO_Port GPIOC
#define USART6_RX_Pin GPIO_PIN_7
#define USART6_RX_GPIO_Port GPIOC
#define SD_D0_MCU_Pin GPIO_PIN_8
#define SD_D0_MCU_GPIO_Port GPIOC
#define SD_D1_MCU_Pin GPIO_PIN_9
#define SD_D1_MCU_GPIO_Port GPIOC
#define VBUS_Pin GPIO_PIN_9
#define VBUS_GPIO_Port GPIOA
#define USB_D__Pin GPIO_PIN_11
#define USB_D__GPIO_Port GPIOA
#define USB_D_A12_Pin GPIO_PIN_12
#define USB_D_A12_GPIO_Port GPIOA
#define DBG_SWDIO_Pin GPIO_PIN_13
#define DBG_SWDIO_GPIO_Port GPIOA
#define DBG_SWCLK_Pin GPIO_PIN_14
#define DBG_SWCLK_GPIO_Port GPIOA
#define SD_D2_Pin GPIO_PIN_10
#define SD_D2_GPIO_Port GPIOC
#define SD_D3_Pin GPIO_PIN_11
#define SD_D3_GPIO_Port GPIOC
#define SD_CLK_Pin GPIO_PIN_12
#define SD_CLK_GPIO_Port GPIOC
#define SD_CD_Pin GPIO_PIN_1
#define SD_CD_GPIO_Port GPIOD
#define SD_CMD_Pin GPIO_PIN_2
#define SD_CMD_GPIO_Port GPIOD
#define SPI_SCK_Pin GPIO_PIN_3
#define SPI_SCK_GPIO_Port GPIOD
#define DBG_SWO_Pin GPIO_PIN_3
#define DBG_SWO_GPIO_Port GPIOB
#define CAN2_RX_Pin GPIO_PIN_5
#define CAN2_RX_GPIO_Port GPIOB
#define CAN2_TX_Pin GPIO_PIN_6
#define CAN2_TX_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
