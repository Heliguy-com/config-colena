/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32H747

#define BOARD_NAME        COLENA_SBC
#define MANUFACTURER_ID   COLENA

#define USE_ACCGYRO_BMI270
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC
#define USE_ACC_SPI_ICM42688P
// Drivers indicate that BMP388 is compatible with 390. TODO: Might need an additional flag
#define USE_BARO
#define USE_BARO_BMP388
// FIXME: Add drivers for BMM350
// #define USE_MAG
// #define USE_MAG_BMM350

#define USE_FLASH
#define USE_FLASH_MB85RS
#define FLASH_CS_PIN         PF6
#define FLASH_FRAM_HLD_PIN   PD10   // UNUSED BUT REQUIRED - Interrupt serial input output without de-select of SPI
#define FLASH_FRAM_WP_PIN    PD9    // UNUSED BUT REQUIRED - Controls writing of a status register

#define MOTOR1_PIN           PE13
#define MOTOR2_PIN           PB0
#define MOTOR3_PIN           PE14
#define MOTOR4_PIN           PA8

// 5, 8
#define UART5_RX_PIN         PB5
#define UART5_TX_PIN         PB6
#define UART8_RX_PIN         PE0
#define UART8_TX_PIN         PE1

// 1, 2, 4
#define I2C1_SDA_PIN         PB7
#define I2C1_SCL_PIN         PB8
#define I2C2_SDA_PIN         PF0
#define I2C2_SCL_PIN         PF1
#define I2C4_SDA_PIN         PF15
#define I2C4_SCL_PIN         PF14

// 1, 3, 4, 5
#define SPI1_SCK_PIN         PG11
#define SPI1_SDI_PIN         PG9
#define SPI1_SDO_PIN         PD7
#define SPI3_SCK_PIN         PB3
#define SPI3_SDI_PIN         PB4
#define SPI3_SDO_PIN         PD6
#define SPI4_SCK_PIN         PE2
#define SPI4_SDI_PIN         PE5
#define SPI4_SDO_PIN         PE6
#define SPI5_SCK_PIN         PF7
#define SPI5_SDI_PIN         PF8
#define SPI5_SDO_PIN         PF11

// GYRO 1 is BMI270, GYRO 2 is ICM42688P
#define GYRO_1_EXTI_PIN      PB15
#define GYRO_1_CS_PIN        PG10
#define GYRO_2_EXTI_PIN      PB11
#define GYRO_2_CS_PIN        PA15

// TODO: Check which interrupt pins correspond to GYRO and ACC.
// TODO: Where are the interrupt and chip select pins for ACC stored?
// #define ACC_1_EXTI_PIN      PB15
// #define ACC_1_CS_PIN        PG10
// #define ACC_2_EXTI_PIN      PB15
// #define ACC_2_CS_PIN        PA4

#define LED0_PIN             PB0
#define LED1_PIN             PE11

// #define MAG_I2C_INSTANCE     I2CDEV_1?
#define BARO_I2C_INSTANCE    I2CDEV_2
#define GYRO_1_SPI_INSTANCE  SPI1
#define GYRO_2_SPI_INSTANCE  SPI3
#define FLASH_SPI_INSTANCE   SPI5

// TODO: Where is the ACC instance defined.
// #define ACC_1_SPI_INSTANCE SPI1
// #define ACC_2_SPI_INSTANCE SPI3

// TODO: Get the direction of the FCU is in relation to SBC
// #define DEFAULT_ALIGN_BOARD_YAW 135
