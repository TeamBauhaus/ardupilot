/*
 generated hardware definitions from hwdef.dat - DO NOT EDIT
*/

#pragma once

#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#define MHZ (1000U*1000U)
#define KHZ (1000U)


#define AP_SIGNED_FIRMWARE 0

#define HAL_ENABLE_DFU_BOOT FALSE
#define CHIBIOS_BOARD_NAME "Pixhawk1"
// MCU type (ChibiOS define)
#define STM32F4xx_MCUCONF
#define STM32F427_MCUCONF

#define STM32F427xx

// crystal frequency
#define STM32_HSECLK 24000000U

// UART used for stdout (printf)
// SDIO available, enable POSIX filesystem support
#define USE_POSIX

#define HAL_USE_SDC TRUE
#define STM32_USB_USE_OTG1                  TRUE
#define STM32_OTG2_IS_OTG1                  FALSE
#define HAL_USE_USB TRUE
#define HAL_USE_SERIAL_USB TRUE
#ifndef STM32F4
#define STM32F4 1
#endif
#define HAL_USE_HW_RNG FALSE
#define HAL_PROCESS_STACK_SIZE 0x1C00
#define CONFIG_HAL_BOARD_SUBTYPE HAL_BOARD_SUBTYPE_CHIBIOS_FMUV3
#define STM32_ST_USE_TIMER 5
#define HAL_CHIBIOS_ARCH_FMUV3 1
#define HAL_STORAGE_SIZE 16384
#define HAL_HAVE_SAFETY_SWITCH 1
#define HAL_WITH_RAMTRON 1
#define HAL_HAVE_IMU_HEATER 1
#define HAL_OS_FATFS_IO 1
#define HAL_BATT_VOLT_PIN 2
#define HAL_BATT_CURR_PIN 3
#define HAL_BATT_VOLT_SCALE 10.1
#define HAL_BATT_CURR_SCALE 17.0
#define HAL_I2C_MAX_CLOCK 100000
#define AP_NOTIFY_OREOLED_ENABLED (BOARD_FLASH_SIZE > 1024)
#define HAL_SOLO_GIMBAL_ENABLED (HAL_MOUNT_ENABLED && BOARD_FLASH_SIZE > 1024)
#define AP_BATTERY_SMBUS_SOLO_ENABLED (AP_BATTERY_SMBUS_ENABLED && BOARD_FLASH_SIZE > 1024)
#define HAL_PROBE_EXTERNAL_I2C_COMPASSES
#define BOARD_CHECK_F427_USE_1M "ERROR: 1M flash use Pixhawk1-1M"
#define HAL_WITH_IO_MCU_DSHOT 1
#define HAL_CAN_IFACE1_ENABLE
#define HAL_CAN_IFACE2_ENABLE
#define HAL_CAN_INTERFACE_LIST 0,1
#define HAL_CAN_INTERFACE_REV_LIST 0,1,-1
#define HAL_CAN_BASE_LIST reinterpret_cast<bxcan::CanType*>(uintptr_t(CAN1_BASE)),reinterpret_cast<bxcan::CanType*>(uintptr_t(CAN2_BASE))
#define HAL_NUM_CAN_IFACES 2
#define HAL_CANFD_SUPPORTED 0
#define BOARD_FLASH_SIZE 2048

// location of loaded firmware
#define FLASH_LOAD_ADDRESS 0x08004000
#define EXT_FLASH_SIZE_MB 0
#define EXT_FLASH_RESERVE_START_KB 0
#define EXT_FLASH_RESERVE_END_KB 0
#define CRT0_AREAS_NUMBER 1
#define __EXTFLASHFUNC__
#ifndef AP_CRASHDUMP_ENABLED
#define AP_CRASHDUMP_ENABLED 1
#endif

// memory regions
#define HAL_MEMORY_REGIONS {(void*)0x20000000, 0x00030000, 0x01 }, {(void*)0x10000000, 0x00010000, 0x02 }
#define HAL_CC_MEMORY_REGIONS {0x20000000, 0x20030000, CRASH_CATCHER_BYTE }, {0x10000000, 0x10010000, CRASH_CATCHER_BYTE }
#define HAL_MEMORY_TOTAL_KB 256
#define HAL_RAM0_START 0x20000000

// CPU serial number (12 bytes)
#define UDID_START UID_BASE


// APJ board ID (for bootloaders)
#define APJ_BOARD_ID 9

#ifndef HAL_ENABLE_THREAD_STATISTICS
#define HAL_ENABLE_THREAD_STATISTICS FALSE
#endif
    
#ifndef HAL_HAVE_HARDWARE_DOUBLE
#define HAL_HAVE_HARDWARE_DOUBLE 0
#endif
#define HAL_EXPECTED_SYSCLOCK 168000000
#define STM32_DMA_REQUIRED TRUE


#ifndef HAL_FLASH_PROTECTION
#define HAL_FLASH_PROTECTION 0
#endif
#define HAL_SPI1_CONFIG { &SPID1, 1, STM32_SPI_SPI1_DMA_STREAMS, PAL_LINE(GPIOA,5U) }
#define HAL_SPI2_CONFIG { &SPID2, 2, STM32_SPI_SPI2_DMA_STREAMS, PAL_LINE(GPIOB,13U) }
#define HAL_SPI4_CONFIG { &SPID4, 4, STM32_SPI_SPI4_DMA_STREAMS, PAL_LINE(GPIOE,2U) }
#define HAL_SPI_BUS_LIST HAL_SPI1_CONFIG,HAL_SPI2_CONFIG,HAL_SPI4_CONFIG


// SPI device table
#define HAL_SPI_DEVICE0  SPIDesc("ms5611"         ,  0,  3, PAL_LINE(GPIOD,7U) , SPIDEV_MODE3,  20*MHZ,  20*MHZ)
#define HAL_SPI_DEVICE1  SPIDesc("ms5611_ext"     ,  2,  2, PAL_LINE(GPIOC,14U), SPIDEV_MODE3,  20*MHZ,  20*MHZ)
#define HAL_SPI_DEVICE2  SPIDesc("mpu6000"        ,  0,  4, PAL_LINE(GPIOC,2U) , SPIDEV_MODE3,   2*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE3  SPIDesc("icm20608-am"    ,  0,  2, PAL_LINE(GPIOC,15U), SPIDEV_MODE3,   4*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE4  SPIDesc("mpu9250"        ,  0,  4, PAL_LINE(GPIOC,2U) , SPIDEV_MODE3,   4*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE5  SPIDesc("mpu9250_ext"    ,  2,  1, PAL_LINE(GPIOE,4U) , SPIDEV_MODE3,   4*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE6  SPIDesc("icm20948"       ,  0,  4, PAL_LINE(GPIOC,2U) , SPIDEV_MODE3,   4*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE7  SPIDesc("icm20948_ext"   ,  2,  1, PAL_LINE(GPIOE,4U) , SPIDEV_MODE3,   4*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE8  SPIDesc("hmc5843"        ,  0,  5, PAL_LINE(GPIOC,1U) , SPIDEV_MODE3,  11*MHZ,  11*MHZ)
#define HAL_SPI_DEVICE9  SPIDesc("lsm9ds0_g"      ,  0,  1, PAL_LINE(GPIOC,13U), SPIDEV_MODE3,  11*MHZ,  11*MHZ)
#define HAL_SPI_DEVICE10 SPIDesc("lsm9ds0_am"     ,  0,  2, PAL_LINE(GPIOC,15U), SPIDEV_MODE3,  11*MHZ,  11*MHZ)
#define HAL_SPI_DEVICE11 SPIDesc("lsm9ds0_ext_g"  ,  2,  4, PAL_LINE(GPIOC,13U), SPIDEV_MODE3,  11*MHZ,  11*MHZ)
#define HAL_SPI_DEVICE12 SPIDesc("lsm9ds0_ext_am" ,  2,  3, PAL_LINE(GPIOC,15U), SPIDEV_MODE3,  11*MHZ,  11*MHZ)
#define HAL_SPI_DEVICE13 SPIDesc("icm20602_ext"   ,  2,  4, PAL_LINE(GPIOC,13U), SPIDEV_MODE3,   4*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE14 SPIDesc("ramtron"        ,  1, 10, PAL_LINE(GPIOD,10U), SPIDEV_MODE3,   8*MHZ,   8*MHZ)
#define HAL_SPI_DEVICE15 SPIDesc("external0m0"    ,  2,  5, PAL_LINE(GPIOE,4U) , SPIDEV_MODE0,   2*MHZ,   2*MHZ)
#define HAL_SPI_DEVICE16 SPIDesc("external0m1"    ,  2,  5, PAL_LINE(GPIOE,4U) , SPIDEV_MODE1,   2*MHZ,   2*MHZ)
#define HAL_SPI_DEVICE17 SPIDesc("external0m2"    ,  2,  5, PAL_LINE(GPIOE,4U) , SPIDEV_MODE2,   2*MHZ,   2*MHZ)
#define HAL_SPI_DEVICE18 SPIDesc("external0m3"    ,  2,  5, PAL_LINE(GPIOE,4U) , SPIDEV_MODE3,   2*MHZ,   2*MHZ)
#define HAL_SPI_DEVICE19 SPIDesc("pixartPC15"     ,  2, 13, PAL_LINE(GPIOC,15U), SPIDEV_MODE3,   2*MHZ,   2*MHZ)
#define HAL_SPI_DEVICE_LIST HAL_SPI_DEVICE0,HAL_SPI_DEVICE1,HAL_SPI_DEVICE2,HAL_SPI_DEVICE3,HAL_SPI_DEVICE4,HAL_SPI_DEVICE5,HAL_SPI_DEVICE6,HAL_SPI_DEVICE7,HAL_SPI_DEVICE8,HAL_SPI_DEVICE9,HAL_SPI_DEVICE10,HAL_SPI_DEVICE11,HAL_SPI_DEVICE12,HAL_SPI_DEVICE13,HAL_SPI_DEVICE14,HAL_SPI_DEVICE15,HAL_SPI_DEVICE16,HAL_SPI_DEVICE17,HAL_SPI_DEVICE18,HAL_SPI_DEVICE19

#define HAL_WITH_SPI_MS5611 1
#define HAL_WITH_SPI_MS5611_EXT 1
#define HAL_WITH_SPI_MPU6000 1
#define HAL_WITH_SPI_ICM20608_AM 1
#define HAL_WITH_SPI_MPU9250 1
#define HAL_WITH_SPI_MPU9250_EXT 1
#define HAL_WITH_SPI_ICM20948 1
#define HAL_WITH_SPI_ICM20948_EXT 1
#define HAL_WITH_SPI_HMC5843 1
#define HAL_WITH_SPI_LSM9DS0_G 1
#define HAL_WITH_SPI_LSM9DS0_AM 1
#define HAL_WITH_SPI_LSM9DS0_EXT_G 1
#define HAL_WITH_SPI_LSM9DS0_EXT_AM 1
#define HAL_WITH_SPI_ICM20602_EXT 1
#define HAL_WITH_SPI_RAMTRON 1
#define HAL_WITH_SPI_EXTERNAL0M0 1
#define HAL_WITH_SPI_EXTERNAL0M1 1
#define HAL_WITH_SPI_EXTERNAL0M2 1
#define HAL_WITH_SPI_EXTERNAL0M3 1
#define HAL_WITH_SPI_PIXARTPC15 1

// ADC config
#define ANALOG_VCC_5V_PIN 4
#define HAL_HAVE_BOARD_VOLTAGE 1
#define HAL_ANALOG_PINS \
{  2,  2,    3.30/4096 }, /* PA2 BATT_VOLTAGE_SENS */ \
{  3,  3,    3.30/4096 }, /* PA3 BATT_CURRENT_SENS */ \
{  4,  4,  2*3.30/4096 }, /* PA4 VDD_5V_SENS */ \
{ 13, 13,    3.30/4096 }, /* PC3 AUX_POWER */ \
{ 14, 14,    3.30/4096 }, /* PC4 AUX_ADC2 */ \
{ 15, 15,  2*3.30/4096 }, /* PC5 PRESSURE_SENS */ \


// GPIO config
#define HAL_GPIO_LINE_GPIO0 PAL_LINE(GPIOE,12U)
#define HAL_GPIO_LINE_GPIO1 PAL_LINE(GPIOB,0U)
#define HAL_GPIO_LINE_GPIO2 PAL_LINE(GPIOB,1U)
#define HAL_GPIO_LINE_GPIO50 PAL_LINE(GPIOE,14U)
#define HAL_GPIO_LINE_GPIO51 PAL_LINE(GPIOE,13U)
#define HAL_GPIO_LINE_GPIO52 PAL_LINE(GPIOE,11U)
#define HAL_GPIO_LINE_GPIO53 PAL_LINE(GPIOE,9U)
#define HAL_GPIO_LINE_GPIO54 PAL_LINE(GPIOD,13U)
#define HAL_GPIO_LINE_GPIO55 PAL_LINE(GPIOD,14U)
#define HAL_GPIO_LINE_GPIO77 PAL_LINE(GPIOA,15U)
#define HAL_GPIO_PINS { \
{   0, true,  0, PAL_LINE(GPIOE,12U)}, /* PE12 FMU_LED_AMBER OUTPUT */ \
{   1, true,  0, PAL_LINE(GPIOB,0U)}, /* PB0 EXTERN_GPIO1 OUTPUT */ \
{   2, true,  0, PAL_LINE(GPIOB,1U)}, /* PB1 EXTERN_GPIO2 OUTPUT */ \
{  50, true,  1, PAL_LINE(GPIOE,14U)}, /* PE14 TIM1_CH4 TIM1 AF1 PWM1 */ \
{  51, true,  2, PAL_LINE(GPIOE,13U)}, /* PE13 TIM1_CH3 TIM1 AF1 PWM2 */ \
{  52, true,  3, PAL_LINE(GPIOE,11U)}, /* PE11 TIM1_CH2 TIM1 AF1 PWM3 */ \
{  53, true,  4, PAL_LINE(GPIOE,9U)}, /* PE9 TIM1_CH1 TIM1 AF1 PWM4 */ \
{  54, true,  5, PAL_LINE(GPIOD,13U)}, /* PD13 TIM4_CH2 TIM4 AF2 PWM5 */ \
{  55, true,  6, PAL_LINE(GPIOD,14U)}, /* PD14 TIM4_CH3 TIM4 AF2 PWM6 */ \
{  77, true,  0, PAL_LINE(GPIOA,15U)}, /* PA15 TIM2_CH1 TIM2 AF1 */ \
}

// full pin define list
#define HAL_GPIO_PIN_ACCEL_EXT_CS         PAL_LINE(GPIOC,15U)
#define HAL_GPIO_PIN_AUX_ADC2             PAL_LINE(GPIOC,4U)
#define HAL_GPIO_PIN_AUX_POWER            PAL_LINE(GPIOC,3U)
#define HAL_GPIO_PIN_BARO_CS              PAL_LINE(GPIOD,7U)
#define HAL_GPIO_PIN_BARO_EXT_CS          PAL_LINE(GPIOC,14U)
#define HAL_GPIO_PIN_BATT_CURRENT_SENS    PAL_LINE(GPIOA,3U)
#define HAL_GPIO_PIN_BATT_VOLTAGE_SENS    PAL_LINE(GPIOA,2U)
#define HAL_GPIO_PIN_BOOT1                PAL_LINE(GPIOB,2U)
#define HAL_GPIO_PIN_CAN1_RX              PAL_LINE(GPIOD,0U)
#define HAL_GPIO_PIN_CAN1_TX              PAL_LINE(GPIOD,1U)
#define HAL_GPIO_PIN_CAN2_RX              PAL_LINE(GPIOB,12U)
#define HAL_GPIO_PIN_CAN2_TX              PAL_LINE(GPIOB,6U)
#define HAL_GPIO_PIN_EXTERN_GPIO1         PAL_LINE(GPIOB,0U)
#define HAL_GPIO_PIN_EXTERN_GPIO2         PAL_LINE(GPIOB,1U)
#define HAL_GPIO_PIN_FMU_LED_AMBER        PAL_LINE(GPIOE,12U)
#define HAL_GPIO_PIN_FMU_SW0              PAL_LINE(GPIOB,3U)
#define HAL_GPIO_PIN_FRAM_CS              PAL_LINE(GPIOD,10U)
#define HAL_GPIO_PIN_GYRO_EXT_CS          PAL_LINE(GPIOC,13U)
#define HAL_GPIO_PIN_I2C1_SCL             PAL_LINE(GPIOB,8U)
#define HAL_GPIO_PIN_I2C1_SDA             PAL_LINE(GPIOB,9U)
#define HAL_GPIO_PIN_I2C1_SCL             PAL_LINE(GPIOB,8U)
#define HAL_GPIO_PIN_I2C2_SCL             PAL_LINE(GPIOB,10U)
#define HAL_GPIO_PIN_I2C2_SDA             PAL_LINE(GPIOB,11U)
#define HAL_GPIO_PIN_I2C2_SCL             PAL_LINE(GPIOB,10U)
#define HAL_GPIO_PIN_JTCK_SWCLK           PAL_LINE(GPIOA,14U)
#define HAL_GPIO_PIN_JTMS_SWDIO           PAL_LINE(GPIOA,13U)
#define HAL_GPIO_PIN_MAG_CS               PAL_LINE(GPIOC,1U)
#define HAL_GPIO_PIN_MPU_CS               PAL_LINE(GPIOC,2U)
#define HAL_GPIO_PIN_MPU_DRDY             PAL_LINE(GPIOD,15U)
#define HAL_GPIO_PIN_MPU_EXT_CS           PAL_LINE(GPIOE,4U)
#define HAL_GPIO_PIN_OTG_FS_DM            PAL_LINE(GPIOA,11U)
#define HAL_GPIO_PIN_OTG_FS_DP            PAL_LINE(GPIOA,12U)
#define HAL_GPIO_PIN_PRESSURE_SENS        PAL_LINE(GPIOC,5U)
#define HAL_GPIO_PIN_SDIO_CK              PAL_LINE(GPIOC,12U)
#define HAL_GPIO_PIN_SDIO_CMD             PAL_LINE(GPIOD,2U)
#define HAL_GPIO_PIN_SDIO_D0              PAL_LINE(GPIOC,8U)
#define HAL_GPIO_PIN_SDIO_D1              PAL_LINE(GPIOC,9U)
#define HAL_GPIO_PIN_SDIO_D2              PAL_LINE(GPIOC,10U)
#define HAL_GPIO_PIN_SDIO_D3              PAL_LINE(GPIOC,11U)
#define HAL_GPIO_PIN_SPI1_MISO            PAL_LINE(GPIOA,6U)
#define HAL_GPIO_PIN_SPI1_MOSI            PAL_LINE(GPIOA,7U)
#define HAL_GPIO_PIN_SPI1_SCK             PAL_LINE(GPIOA,5U)
#define HAL_GPIO_PIN_SPI2_MISO            PAL_LINE(GPIOB,14U)
#define HAL_GPIO_PIN_SPI2_MOSI            PAL_LINE(GPIOB,15U)
#define HAL_GPIO_PIN_SPI2_SCK             PAL_LINE(GPIOB,13U)
#define HAL_GPIO_PIN_SPI4_MISO            PAL_LINE(GPIOE,5U)
#define HAL_GPIO_PIN_SPI4_MOSI            PAL_LINE(GPIOE,6U)
#define HAL_GPIO_PIN_SPI4_SCK             PAL_LINE(GPIOE,2U)
#define HAL_GPIO_PIN_TIM1_CH1             PAL_LINE(GPIOE,9U)
#define HAL_GPIO_PIN_TIM1_CH2             PAL_LINE(GPIOE,11U)
#define HAL_GPIO_PIN_TIM1_CH3             PAL_LINE(GPIOE,13U)
#define HAL_GPIO_PIN_TIM1_CH4             PAL_LINE(GPIOE,14U)
#define HAL_GPIO_PIN_TIM2_CH1             PAL_LINE(GPIOA,15U)
#define HAL_GPIO_PIN_TIM4_CH2             PAL_LINE(GPIOD,13U)
#define HAL_GPIO_PIN_TIM4_CH3             PAL_LINE(GPIOD,14U)
#define HAL_GPIO_PIN_UART4_RX             PAL_LINE(GPIOA,1U)
#define HAL_GPIO_PIN_UART4_TX             PAL_LINE(GPIOA,0U)
#define HAL_GPIO_PIN_UART7_RX             PAL_LINE(GPIOE,7U)
#define HAL_GPIO_PIN_UART7_TX             PAL_LINE(GPIOE,8U)
#define HAL_GPIO_PIN_UART8_RX             PAL_LINE(GPIOE,0U)
#define HAL_GPIO_PIN_UART8_TX             PAL_LINE(GPIOE,1U)
#define HAL_GPIO_PIN_USART2_CTS           PAL_LINE(GPIOD,3U)
#define HAL_GPIO_PIN_USART2_RTS           PAL_LINE(GPIOD,4U)
#define HAL_GPIO_PIN_USART2_RX            PAL_LINE(GPIOD,6U)
#define HAL_GPIO_PIN_USART2_TX            PAL_LINE(GPIOD,5U)
#define HAL_GPIO_PIN_USART3_CTS           PAL_LINE(GPIOD,11U)
#define HAL_GPIO_PIN_USART3_RTS           PAL_LINE(GPIOD,12U)
#define HAL_GPIO_PIN_USART3_RX            PAL_LINE(GPIOD,9U)
#define HAL_GPIO_PIN_USART3_TX            PAL_LINE(GPIOD,8U)
#define HAL_GPIO_PIN_USART6_RX            PAL_LINE(GPIOC,7U)
#define HAL_GPIO_PIN_USART6_TX            PAL_LINE(GPIOC,6U)
#define HAL_GPIO_PIN_VBUS                 PAL_LINE(GPIOA,9U)
#define HAL_GPIO_PIN_VBUS_nVALID          PAL_LINE(GPIOC,0U)
#define HAL_GPIO_PIN_VDD_3V3_SENSORS_EN   PAL_LINE(GPIOE,3U)
#define HAL_GPIO_PIN_VDD_5V_HIPOWER_nOC   PAL_LINE(GPIOE,10U)
#define HAL_GPIO_PIN_VDD_5V_PERIPH_nOC    PAL_LINE(GPIOE,15U)
#define HAL_GPIO_PIN_VDD_5V_SENS          PAL_LINE(GPIOA,4U)
#define HAL_GPIO_PIN_VDD_BRICK2_nVALID    PAL_LINE(GPIOB,7U)
#define HAL_GPIO_PIN_VDD_BRICK_nVALID     PAL_LINE(GPIOB,5U)
#define HAL_GPIO_PIN_nVDD_5V_PERIPH_EN    PAL_LINE(GPIOA,8U)

#define HAL_INS_PROBE1  ADD_BACKEND(AP_InertialSensor_Invensense::probe(*this,hal.spi->get_device("mpu6000"),ROTATION_ROLL_180))
#define HAL_INS_PROBE2  ADD_BACKEND(AP_InertialSensor_LSM9DS0::probe(*this,hal.spi->get_device("lsm9ds0_g"),hal.spi->get_device("lsm9ds0_am"),ROTATION_ROLL_180,ROTATION_ROLL_180_YAW_270,ROTATION_PITCH_180))
#define INS_MAX_INSTANCES 2
#define HAL_INS_PROBE_LIST HAL_INS_PROBE1;HAL_INS_PROBE2

#define HAL_MAG_PROBE1  ADD_BACKEND(DRIVER_HMC5843, AP_Compass_HMC5843::probe(hal.spi->get_device("hmc5843"),false,ROTATION_PITCH_180))
#define HAL_MAG_PROBE2  ADD_BACKEND(DRIVER_LSM303D, AP_Compass_LSM303D::probe(hal.spi->get_device("lsm9ds0_am"),ROTATION_NONE))
#define HAL_MAG_PROBE_LIST HAL_MAG_PROBE1;HAL_MAG_PROBE2

#define HAL_BARO_PROBE1  ADD_BACKEND(AP_Baro_MS56XX::probe(*this,hal.spi->get_device("ms5611")))
#define HAL_BARO_PROBE_LIST HAL_BARO_PROBE1

// peripherals enabled
#define STM32_I2C_USE_I2C1                  TRUE
#define STM32_I2C_USE_I2C2                  TRUE
#define STM32_SPI_USE_SPI1                  TRUE
#define STM32_SPI_USE_SPI2                  TRUE
#define STM32_SPI_USE_SPI4                  TRUE
#ifndef STM32_SERIAL_USE_UART4 
#define STM32_SERIAL_USE_UART4  TRUE
#endif
#ifndef STM32_SERIAL_USE_UART7 
#define STM32_SERIAL_USE_UART7  TRUE
#endif
#ifndef STM32_SERIAL_USE_UART8 
#define STM32_SERIAL_USE_UART8  TRUE
#endif
#ifndef STM32_SERIAL_USE_USART2
#define STM32_SERIAL_USE_USART2 TRUE
#endif
#ifndef STM32_SERIAL_USE_USART3
#define STM32_SERIAL_USE_USART3 TRUE
#endif
#ifndef STM32_SERIAL_USE_USART6
#define STM32_SERIAL_USE_USART6 TRUE
#endif


// auto-generated DMA mapping from dma_resolver.py

// Note: The following peripherals can't be resolved for DMA: ['UART8_RX', 'UART7_RX', 'UART7_TX']

#define STM32_ADC_ADC1_DMA_STREAM      STM32_DMA_STREAM_ID(2, 0)
#define STM32_ADC_ADC1_DMA_CHAN        0
#define STM32_I2C_I2C1_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 0) // shared I2C1_RX,UART8_TX
#define STM32_I2C_I2C1_RX_DMA_CHAN     1
#define STM32_I2C_I2C1_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 6) // shared I2C1_TX,USART2_TX,TIM4_UP
#define STM32_I2C_I2C1_TX_DMA_CHAN     1
#define STM32_I2C_I2C2_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 3) // shared SPI2_RX,I2C2_RX
#define STM32_I2C_I2C2_RX_DMA_CHAN     7
#define STM32_I2C_I2C2_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 7)
#define STM32_I2C_I2C2_TX_DMA_CHAN     7
#define STM32_SDC_SDIO_DMA_STREAM      STM32_DMA_STREAM_ID(2, 6)
#define STM32_SDC_SDIO_DMA_CHAN        4
#define STM32_SPI_SPI1_RX_DMA_STREAM   STM32_DMA_STREAM_ID(2, 2)
#define STM32_SPI_SPI1_RX_DMA_CHAN     3
#define STM32_SPI_SPI1_TX_DMA_STREAM   STM32_DMA_STREAM_ID(2, 5) // shared SPI1_TX,TIM1_UP
#define STM32_SPI_SPI1_TX_DMA_CHAN     3
#define STM32_SPI_SPI2_RX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 3) // shared SPI2_RX,I2C2_RX
#define STM32_SPI_SPI2_RX_DMA_CHAN     0
#define STM32_SPI_SPI2_TX_DMA_STREAM   STM32_DMA_STREAM_ID(1, 4) // shared SPI2_TX,UART4_TX,USART3_TX
#define STM32_SPI_SPI2_TX_DMA_CHAN     0
#define STM32_SPI_SPI4_RX_DMA_STREAM   STM32_DMA_STREAM_ID(2, 3)
#define STM32_SPI_SPI4_RX_DMA_CHAN     5
#define STM32_SPI_SPI4_TX_DMA_STREAM   STM32_DMA_STREAM_ID(2, 4)
#define STM32_SPI_SPI4_TX_DMA_CHAN     5
#define STM32_TIM_TIM1_UP_DMA_STREAM   STM32_DMA_STREAM_ID(2, 5) // shared SPI1_TX,TIM1_UP
#define STM32_TIM_TIM1_UP_DMA_CHAN     6
#define STM32_TIM_TIM4_UP_DMA_STREAM   STM32_DMA_STREAM_ID(1, 6) // shared I2C1_TX,USART2_TX,TIM4_UP
#define STM32_TIM_TIM4_UP_DMA_CHAN     2
#define STM32_UART_UART4_RX_DMA_STREAM STM32_DMA_STREAM_ID(1, 2)
#define STM32_UART_UART4_RX_DMA_CHAN   4
#define STM32_UART_UART4_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 4) // shared SPI2_TX,UART4_TX,USART3_TX
#define STM32_UART_UART4_TX_DMA_CHAN   4
#define STM32_UART_UART8_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 0) // shared I2C1_RX,UART8_TX
#define STM32_UART_UART8_TX_DMA_CHAN   5
#define STM32_UART_USART2_RX_DMA_STREAM STM32_DMA_STREAM_ID(1, 5)
#define STM32_UART_USART2_RX_DMA_CHAN  4
#define STM32_UART_USART2_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 6) // shared I2C1_TX,USART2_TX,TIM4_UP
#define STM32_UART_USART2_TX_DMA_CHAN  4
#define STM32_UART_USART3_RX_DMA_STREAM STM32_DMA_STREAM_ID(1, 1)
#define STM32_UART_USART3_RX_DMA_CHAN  4
#define STM32_UART_USART3_TX_DMA_STREAM STM32_DMA_STREAM_ID(1, 4) // shared SPI2_TX,UART4_TX,USART3_TX
#define STM32_UART_USART3_TX_DMA_CHAN  7
#define STM32_UART_USART6_RX_DMA_STREAM STM32_DMA_STREAM_ID(2, 1)
#define STM32_UART_USART6_RX_DMA_CHAN  5
#define STM32_UART_USART6_TX_DMA_STREAM STM32_DMA_STREAM_ID(2, 7)
#define STM32_UART_USART6_TX_DMA_CHAN  5

// Mask of DMA streams which are shared
#define SHARED_DMA_MASK ((1U<<STM32_DMA_STREAM_ID(1,0))|(1U<<STM32_DMA_STREAM_ID(1,3))|(1U<<STM32_DMA_STREAM_ID(1,4))|(1U<<STM32_DMA_STREAM_ID(1,6))|(1U<<STM32_DMA_STREAM_ID(2,5)))


// generated UART DMA configuration lines
#define STM32_USART2_RX_DMA_CONFIG true, STM32_UART_USART2_RX_DMA_STREAM, STM32_UART_USART2_RX_DMA_CHAN
#define STM32_USART2_TX_DMA_CONFIG true, STM32_UART_USART2_TX_DMA_STREAM, STM32_UART_USART2_TX_DMA_CHAN
#define STM32_USART3_RX_DMA_CONFIG true, STM32_UART_USART3_RX_DMA_STREAM, STM32_UART_USART3_RX_DMA_CHAN
#define STM32_USART3_TX_DMA_CONFIG true, STM32_UART_USART3_TX_DMA_STREAM, STM32_UART_USART3_TX_DMA_CHAN
#define STM32_UART4_RX_DMA_CONFIG true, STM32_UART_UART4_RX_DMA_STREAM, STM32_UART_UART4_RX_DMA_CHAN
#define STM32_UART4_TX_DMA_CONFIG true, STM32_UART_UART4_TX_DMA_STREAM, STM32_UART_UART4_TX_DMA_CHAN
#define STM32_USART6_RX_DMA_CONFIG true, STM32_UART_USART6_RX_DMA_STREAM, STM32_UART_USART6_RX_DMA_CHAN
#define STM32_USART6_TX_DMA_CONFIG true, STM32_UART_USART6_TX_DMA_STREAM, STM32_UART_USART6_TX_DMA_CHAN
#define STM32_UART7_RX_DMA_CONFIG false, 0, 0
#define STM32_UART7_TX_DMA_CONFIG false, 0, 0
#define STM32_UART8_RX_DMA_CONFIG false, 0, 0
#define STM32_UART8_TX_DMA_CONFIG true, STM32_UART_UART8_TX_DMA_STREAM, STM32_UART_UART8_TX_DMA_CHAN


// generated SPI DMA configuration lines
#define STM32_SPI_SPI1_DMA_STREAMS STM32_SPI_SPI1_TX_DMA_STREAM, STM32_SPI_SPI1_RX_DMA_STREAM
#define STM32_SPI_SPI2_DMA_STREAMS STM32_SPI_SPI2_TX_DMA_STREAM, STM32_SPI_SPI2_RX_DMA_STREAM
#define STM32_SPI_SPI4_DMA_STREAMS STM32_SPI_SPI4_TX_DMA_STREAM, STM32_SPI_SPI4_RX_DMA_STREAM
#define HAL_PWM_COUNT 6

// Alarm PWM output config
#define STM32_PWM_USE_TIM2 TRUE
#define STM32_TIM2_SUPPRESS_ISR
#define HAL_PWM_ALARM \
        { /* pwmGroup */ \
          0,  /* Timer channel */ \
          { /* PWMConfig */ \
            1000000,    /* PWM clock frequency. */ \
            1000,    /* Initial PWM period 20ms. */ \
            NULL,  /* no callback */ \
            { /* Channel Config */ \
             {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
             {PWM_OUTPUT_DISABLED, NULL}, \
             {PWM_OUTPUT_DISABLED, NULL}, \
             {PWM_OUTPUT_DISABLED, NULL}  \
            }, \
            0, 0 \
          }, \
          &PWMD2 /* PWMDriver* */ \
        }

// PWM timer config
#define STM32_PWM_USE_TIM4 TRUE
#define STM32_TIM4_SUPPRESS_ISR
#define STM32_PWM_USE_TIM1 TRUE
#define STM32_TIM1_SUPPRESS_ISR

// PWM output config
#if defined(STM32_TIM_TIM4_UP_DMA_STREAM) && defined(STM32_TIM_TIM4_UP_DMA_CHAN)
# define HAL_PWM4_DMA_CONFIG true, STM32_TIM_TIM4_UP_DMA_STREAM, STM32_TIM_TIM4_UP_DMA_CHAN
#else
# define HAL_PWM4_DMA_CONFIG false, 0, 0
#endif
#define HAL_PWM_GROUP1 { false, \
        {255, 4, 5, 255}, \
        /* Group Initial Config */ \
        { \
          1000000,  /* PWM clock frequency. */ \
          20000,   /* Initial PWM period 20ms. */ \
          NULL,     /* no callback */ \
          { \
           /* Channel Config */ \
           {PWM_OUTPUT_DISABLED, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_DISABLED, NULL}  \
          }, 0, 0}, &PWMD4, 4, \
          HAL_PWM4_DMA_CONFIG, \
          { 0, 2, 2, 0 }, \
          { 0, PAL_LINE(GPIOD,13U), PAL_LINE(GPIOD,14U), 0 }}
#if defined(STM32_TIM_TIM1_UP_DMA_STREAM) && defined(STM32_TIM_TIM1_UP_DMA_CHAN)
# define HAL_PWM1_DMA_CONFIG true, STM32_TIM_TIM1_UP_DMA_STREAM, STM32_TIM_TIM1_UP_DMA_CHAN
#else
# define HAL_PWM1_DMA_CONFIG false, 0, 0
#endif
#define HAL_PWM_GROUP2 { true, \
        {3, 2, 1, 0}, \
        /* Group Initial Config */ \
        { \
          1000000,  /* PWM clock frequency. */ \
          20000,   /* Initial PWM period 20ms. */ \
          NULL,     /* no callback */ \
          { \
           /* Channel Config */ \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}, \
           {PWM_OUTPUT_ACTIVE_HIGH, NULL}  \
          }, 0, 0}, &PWMD1, 1, \
          HAL_PWM1_DMA_CONFIG, \
          { 1, 1, 1, 1 }, \
          { PAL_LINE(GPIOE,9U), PAL_LINE(GPIOE,11U), PAL_LINE(GPIOE,13U), PAL_LINE(GPIOE,14U) }}
#define HAL_PWM_GROUPS HAL_PWM_GROUP1,HAL_PWM_GROUP2

#define STM32_PWM_USE_ADVANCED TRUE
// I2C configuration

#if defined(STM32_I2C_I2C2_RX_DMA_STREAM) && defined(STM32_I2C_I2C2_TX_DMA_STREAM)
#define HAL_I2C2_CONFIG { &I2CD2, 2, STM32_I2C_I2C2_RX_DMA_STREAM, STM32_I2C_I2C2_TX_DMA_STREAM, PAL_LINE(GPIOB,10U), PAL_LINE(GPIOB,11U) }
#else
#define HAL_I2C2_CONFIG { &I2CD2, 2, SHARED_DMA_NONE, SHARED_DMA_NONE, PAL_LINE(GPIOB,10U), PAL_LINE(GPIOB,11U) }
#endif

#if defined(STM32_I2C_I2C1_RX_DMA_STREAM) && defined(STM32_I2C_I2C1_TX_DMA_STREAM)
#define HAL_I2C1_CONFIG { &I2CD1, 1, STM32_I2C_I2C1_RX_DMA_STREAM, STM32_I2C_I2C1_TX_DMA_STREAM, PAL_LINE(GPIOB,8U), PAL_LINE(GPIOB,9U) }
#else
#define HAL_I2C1_CONFIG { &I2CD1, 1, SHARED_DMA_NONE, SHARED_DMA_NONE, PAL_LINE(GPIOB,8U), PAL_LINE(GPIOB,9U) }
#endif

#define HAL_I2C_DEVICE_LIST HAL_I2C2_CONFIG,HAL_I2C1_CONFIG


// UART configuration
#define HAL_HAVE_SERIAL0 1
#define HAL_HAVE_SERIAL1 1
#define HAL_HAVE_SERIAL2 1
#define HAL_HAVE_SERIAL3 1
#define HAL_HAVE_SERIAL4 1
#define HAL_HAVE_SERIAL5 1
#define HAL_NUM_SERIAL_PORTS 6
#define HAL_UARTA_DRIVER ChibiOS::UARTDriver uartADriver(0)
#define HAL_UARTB_DRIVER ChibiOS::UARTDriver uartBDriver(1)
#define HAL_UARTC_DRIVER ChibiOS::UARTDriver uartCDriver(2)
#define HAL_UARTD_DRIVER ChibiOS::UARTDriver uartDDriver(3)
#define HAL_UARTE_DRIVER ChibiOS::UARTDriver uartEDriver(4)
#define HAL_UARTF_DRIVER ChibiOS::UARTDriver uartFDriver(5)
#define HAL_UARTG_DRIVER Empty::UARTDriver uartGDriver
#define HAL_UARTH_DRIVER Empty::UARTDriver uartHDriver
#define HAL_UARTI_DRIVER Empty::UARTDriver uartIDriver
#define HAL_UARTJ_DRIVER Empty::UARTDriver uartJDriver
#define HAL_WITH_IO_MCU 1
#define HAL_UART_IOMCU_IDX 6
#define HAL_UART_IO_DRIVER ChibiOS::UARTDriver uart_io(HAL_UART_IOMCU_IDX)
#define HAL_HAVE_SERVO_VOLTAGE 1
#define AP_FEATURE_SBUS_OUT 1

#define HAL_CRASH_SERIAL_PORT USART2
#define IRQ_DISABLE_HAL_CRASH_SERIAL_PORT() nvicDisableVector(STM32_USART2_NUMBER)
#define RCC_RESET_HAL_CRASH_SERIAL_PORT() rccResetUSART2(); rccEnableUSART2(true)
#define HAL_CRASH_SERIAL_PORT_CLOCK STM32_USART2CLK
#define HAL_OTG1_CONFIG {(BaseSequentialStream*) &SDU1, 1, true, false, 0, 0, false, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define HAL_UART4_CONFIG { (BaseSequentialStream*) &SD4, 4, false, STM32_UART4_RX_DMA_CONFIG, STM32_UART4_TX_DMA_CONFIG, PAL_LINE(GPIOA,0U), PAL_LINE(GPIOA,1U), 0, 0, -1, 0, -1, 0, 0}
#define HAL_HAVE_RTSCTS_SERIAL1
#define HAL_USART2_CONFIG { (BaseSequentialStream*) &SD2, 2, false, STM32_USART2_RX_DMA_CONFIG, STM32_USART2_TX_DMA_CONFIG, PAL_LINE(GPIOD,5U), PAL_LINE(GPIOD,6U), PAL_LINE(GPIOD,4U), PAL_LINE(GPIOD,3U), -1, 0, -1, 0, 0}
#define HAL_HAVE_RTSCTS_SERIAL2
#define HAL_USART3_CONFIG { (BaseSequentialStream*) &SD3, 3, false, STM32_USART3_RX_DMA_CONFIG, STM32_USART3_TX_DMA_CONFIG, PAL_LINE(GPIOD,8U), PAL_LINE(GPIOD,9U), PAL_LINE(GPIOD,12U), PAL_LINE(GPIOD,11U), -1, 0, -1, 0, 0}
#define HAL_UART8_CONFIG { (BaseSequentialStream*) &SD8, 8, false, STM32_UART8_RX_DMA_CONFIG, STM32_UART8_TX_DMA_CONFIG, PAL_LINE(GPIOE,1U), PAL_LINE(GPIOE,0U), 0, 0, -1, 0, -1, 0, 0}
#define HAL_UART7_CONFIG { (BaseSequentialStream*) &SD7, 7, false, STM32_UART7_RX_DMA_CONFIG, STM32_UART7_TX_DMA_CONFIG, PAL_LINE(GPIOE,8U), PAL_LINE(GPIOE,7U), 0, 0, -1, 0, -1, 0, 0}
#define HAL_USART6_CONFIG { (BaseSequentialStream*) &SD6, 6, false, STM32_USART6_RX_DMA_CONFIG, STM32_USART6_TX_DMA_CONFIG, PAL_LINE(GPIOC,6U), PAL_LINE(GPIOC,7U), 0, 0, -1, 0, -1, 0, 0}
#define AP_FEATURE_RTSCTS 1
#define HAL_UART_DEVICE_LIST HAL_OTG1_CONFIG,HAL_UART4_CONFIG,HAL_USART2_CONFIG,HAL_USART3_CONFIG,HAL_UART8_CONFIG,HAL_UART7_CONFIG,HAL_USART6_CONFIG

#define HAL_UART_NUM_SERIAL_PORTS 6
// USB configuration
#define HAL_USB_VENDOR_ID 0x1209
#define HAL_USB_PRODUCT_ID 0x5741
#define HAL_USB_STRING_MANUFACTURER "ArduPilot"
#define HAL_USB_STRING_PRODUCT "%BOARD%"
#define HAL_USB_STRING_SERIAL "%SERIAL%"


#define AP_BOOTLOADER_FLASHING_ENABLED 1
#define HAL_HAVE_AP_ROMFS_EMBEDDED_H 1

/*
* I/O ports initial setup, this configuration is established soon after reset
* in the initialization code.
* Please refer to the STM32 Reference Manual for details.
*/
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/* PORTA:
 PA0 UART4_TX UART4 AF8
 PA1 UART4_RX UART4 AF8
 PA2 BATT_VOLTAGE_SENS ADC1 ADC1_IN2
 PA3 BATT_CURRENT_SENS ADC1 ADC1_IN3
 PA4 VDD_5V_SENS ADC1 ADC1_IN4
 PA5 SPI1_SCK SPI1 AF5
 PA6 SPI1_MISO SPI1 AF5
 PA7 SPI1_MOSI SPI1 AF5
 PA8 nVDD_5V_PERIPH_EN OUTPUT
 PA9 VBUS INPUT
 PA11 OTG_FS_DM OTG1 AF10
 PA12 OTG_FS_DP OTG1 AF10
 PA13 JTMS-SWDIO SWD AF0
 PA14 JTCK-SWCLK SWD AF0
 PA15 TIM2_CH1 TIM2 AF1
*/

#define VAL_GPIOA_MODER   (PIN_MODE_ALTERNATE(0U) | \
                           PIN_MODE_ALTERNATE(1U) | \
                           PIN_MODE_ANALOG(2U) | \
                           PIN_MODE_ANALOG(3U) | \
                           PIN_MODE_ANALOG(4U) | \
                           PIN_MODE_ALTERNATE(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_ALTERNATE(7U) | \
                           PIN_MODE_OUTPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_ALTERNATE(12U) | \
                           PIN_MODE_ALTERNATE(13U) | \
                           PIN_MODE_ALTERNATE(14U) | \
                           PIN_MODE_ALTERNATE(15U))

#define VAL_GPIOA_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_OPENDRAIN(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOA_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOA_PUPDR   (PIN_PUPDR_PULLUP(0U) | \
                           PIN_PUPDR_PULLUP(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_PULLUP(13U) | \
                           PIN_PUPDR_PULLDOWN(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOA_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_LOW(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOA_AFRL    (PIN_AFIO_AF(0U, 8U) | \
                           PIN_AFIO_AF(1U, 8U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 5U) | \
                           PIN_AFIO_AF(6U, 5U) | \
                           PIN_AFIO_AF(7U, 5U))

#define VAL_GPIOA_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 10U) | \
                           PIN_AFIO_AF(12U, 10U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 1U))

/* PORTB:
 PB0 EXTERN_GPIO1 OUTPUT
 PB1 EXTERN_GPIO2 OUTPUT
 PB2 BOOT1 INPUT
 PB3 FMU_SW0 INPUT
 PB5 VDD_BRICK_nVALID INPUT
 PB6 CAN2_TX CAN2 AF9
 PB7 VDD_BRICK2_nVALID INPUT
 PB8 I2C1_SCL I2C1 AF4
 PB9 I2C1_SDA I2C1 AF4
 PB10 I2C2_SCL I2C2 AF4
 PB11 I2C2_SDA I2C2 AF4
 PB12 CAN2_RX CAN2 AF9
 PB13 SPI2_SCK SPI2 AF5
 PB14 SPI2_MISO SPI2 AF5
 PB15 SPI2_MOSI SPI2 AF5
*/

#define VAL_GPIOB_MODER   (PIN_MODE_OUTPUT(0U) | \
                           PIN_MODE_OUTPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_ALTERNATE(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_ALTERNATE(12U) | \
                           PIN_MODE_ALTERNATE(13U) | \
                           PIN_MODE_ALTERNATE(14U) | \
                           PIN_MODE_ALTERNATE(15U))

#define VAL_GPIOB_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_OPENDRAIN(8U) | \
                           PIN_OTYPE_OPENDRAIN(9U) | \
                           PIN_OTYPE_OPENDRAIN(10U) | \
                           PIN_OTYPE_OPENDRAIN(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOB_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOB_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_PULLUP(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_PULLUP(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOB_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOB_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 9U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOB_AFRH    (PIN_AFIO_AF(8U, 4U) | \
                           PIN_AFIO_AF(9U, 4U) | \
                           PIN_AFIO_AF(10U, 4U) | \
                           PIN_AFIO_AF(11U, 4U) | \
                           PIN_AFIO_AF(12U, 9U) | \
                           PIN_AFIO_AF(13U, 5U) | \
                           PIN_AFIO_AF(14U, 5U) | \
                           PIN_AFIO_AF(15U, 5U))

/* PORTC:
 PC0 VBUS_nVALID INPUT
 PC1 MAG_CS CS
 PC2 MPU_CS CS
 PC3 AUX_POWER ADC1 ADC1_IN13
 PC4 AUX_ADC2 ADC1 ADC1_IN14
 PC5 PRESSURE_SENS ADC1 ADC1_IN15
 PC6 USART6_TX USART6 AF8
 PC7 USART6_RX USART6 AF8
 PC8 SDIO_D0 SDIO AF12
 PC9 SDIO_D1 SDIO AF12
 PC10 SDIO_D2 SDIO AF12
 PC11 SDIO_D3 SDIO AF12
 PC12 SDIO_CK SDIO AF12
 PC13 GYRO_EXT_CS CS
 PC14 BARO_EXT_CS CS
 PC15 ACCEL_EXT_CS CS
*/

#define VAL_GPIOC_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_OUTPUT(1U) | \
                           PIN_MODE_OUTPUT(2U) | \
                           PIN_MODE_ANALOG(3U) | \
                           PIN_MODE_ANALOG(4U) | \
                           PIN_MODE_ANALOG(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_ALTERNATE(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_ALTERNATE(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_ALTERNATE(12U) | \
                           PIN_MODE_OUTPUT(13U) | \
                           PIN_MODE_OUTPUT(14U) | \
                           PIN_MODE_OUTPUT(15U))

#define VAL_GPIOC_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOC_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOC_PUPDR   (PIN_PUPDR_PULLUP(0U) | \
                           PIN_PUPDR_PULLUP(1U) | \
                           PIN_PUPDR_PULLUP(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_PULLUP(6U) | \
                           PIN_PUPDR_PULLUP(7U) | \
                           PIN_PUPDR_PULLUP(8U) | \
                           PIN_PUPDR_PULLUP(9U) | \
                           PIN_PUPDR_PULLUP(10U) | \
                           PIN_PUPDR_PULLUP(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_PULLUP(13U) | \
                           PIN_PUPDR_PULLUP(14U) | \
                           PIN_PUPDR_PULLUP(15U))

#define VAL_GPIOC_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOC_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 8U) | \
                           PIN_AFIO_AF(7U, 8U))

#define VAL_GPIOC_AFRH    (PIN_AFIO_AF(8U, 12U) | \
                           PIN_AFIO_AF(9U, 12U) | \
                           PIN_AFIO_AF(10U, 12U) | \
                           PIN_AFIO_AF(11U, 12U) | \
                           PIN_AFIO_AF(12U, 12U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTD:
 PD0 CAN1_RX CAN1 AF9
 PD1 CAN1_TX CAN1 AF9
 PD2 SDIO_CMD SDIO AF12
 PD3 USART2_CTS USART2 AF7
 PD4 USART2_RTS USART2
 PD5 USART2_TX USART2 AF7
 PD6 USART2_RX USART2 AF7
 PD7 BARO_CS CS
 PD8 USART3_TX USART3 AF7
 PD9 USART3_RX USART3 AF7
 PD10 FRAM_CS CS
 PD11 USART3_CTS USART3 AF7
 PD12 USART3_RTS USART3
 PD13 TIM4_CH2 TIM4 AF2 PWM5
 PD14 TIM4_CH3 TIM4 AF2 PWM6
 PD15 MPU_DRDY INPUT
*/

#define VAL_GPIOD_MODER   (PIN_MODE_ALTERNATE(0U) | \
                           PIN_MODE_ALTERNATE(1U) | \
                           PIN_MODE_ALTERNATE(2U) | \
                           PIN_MODE_ALTERNATE(3U) | \
                           PIN_MODE_OUTPUT(4U) | \
                           PIN_MODE_ALTERNATE(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_OUTPUT(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_OUTPUT(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_OUTPUT(12U) | \
                           PIN_MODE_ALTERNATE(13U) | \
                           PIN_MODE_ALTERNATE(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOD_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOD_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_VERYLOW(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOD_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_PULLUP(2U) | \
                           PIN_PUPDR_PULLUP(3U) | \
                           PIN_PUPDR_PULLDOWN(4U) | \
                           PIN_PUPDR_PULLUP(5U) | \
                           PIN_PUPDR_PULLUP(6U) | \
                           PIN_PUPDR_PULLUP(7U) | \
                           PIN_PUPDR_PULLUP(8U) | \
                           PIN_PUPDR_PULLUP(9U) | \
                           PIN_PUPDR_PULLUP(10U) | \
                           PIN_PUPDR_PULLUP(11U) | \
                           PIN_PUPDR_PULLDOWN(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOD_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOD_AFRL    (PIN_AFIO_AF(0U, 9U) | \
                           PIN_AFIO_AF(1U, 9U) | \
                           PIN_AFIO_AF(2U, 12U) | \
                           PIN_AFIO_AF(3U, 7U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 7U) | \
                           PIN_AFIO_AF(6U, 7U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOD_AFRH    (PIN_AFIO_AF(8U, 7U) | \
                           PIN_AFIO_AF(9U, 7U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 7U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 2U) | \
                           PIN_AFIO_AF(14U, 2U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTE:
 PE0 UART8_RX UART8 AF8
 PE1 UART8_TX UART8 AF8
 PE2 SPI4_SCK SPI4 AF5
 PE3 VDD_3V3_SENSORS_EN OUTPUT
 PE4 MPU_EXT_CS CS
 PE5 SPI4_MISO SPI4 AF5
 PE6 SPI4_MOSI SPI4 AF5
 PE7 UART7_RX UART7 AF8
 PE8 UART7_TX UART7 AF8
 PE9 TIM1_CH1 TIM1 AF1 PWM4
 PE10 VDD_5V_HIPOWER_nOC INPUT
 PE11 TIM1_CH2 TIM1 AF1 PWM3
 PE12 FMU_LED_AMBER OUTPUT
 PE13 TIM1_CH3 TIM1 AF1 PWM2
 PE14 TIM1_CH4 TIM1 AF1 PWM1
 PE15 VDD_5V_PERIPH_nOC INPUT
*/

#define VAL_GPIOE_MODER   (PIN_MODE_ALTERNATE(0U) | \
                           PIN_MODE_ALTERNATE(1U) | \
                           PIN_MODE_ALTERNATE(2U) | \
                           PIN_MODE_OUTPUT(3U) | \
                           PIN_MODE_OUTPUT(4U) | \
                           PIN_MODE_ALTERNATE(5U) | \
                           PIN_MODE_ALTERNATE(6U) | \
                           PIN_MODE_ALTERNATE(7U) | \
                           PIN_MODE_ALTERNATE(8U) | \
                           PIN_MODE_ALTERNATE(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_ALTERNATE(11U) | \
                           PIN_MODE_OUTPUT(12U) | \
                           PIN_MODE_ALTERNATE(13U) | \
                           PIN_MODE_ALTERNATE(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOE_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_OPENDRAIN(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOE_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOE_PUPDR   (PIN_PUPDR_PULLUP(0U) | \
                           PIN_PUPDR_PULLUP(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_PULLUP(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_PULLUP(7U) | \
                           PIN_PUPDR_PULLUP(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_PULLUP(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_PULLUP(15U))

#define VAL_GPIOE_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOE_AFRL    (PIN_AFIO_AF(0U, 8U) | \
                           PIN_AFIO_AF(1U, 8U) | \
                           PIN_AFIO_AF(2U, 5U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 5U) | \
                           PIN_AFIO_AF(6U, 5U) | \
                           PIN_AFIO_AF(7U, 8U))

#define VAL_GPIOE_AFRH    (PIN_AFIO_AF(8U, 8U) | \
                           PIN_AFIO_AF(9U, 1U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 1U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 1U) | \
                           PIN_AFIO_AF(14U, 1U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTF:
*/

#define VAL_GPIOF_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_INPUT(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOF_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOF_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOF_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOF_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOF_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOF_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTG:
*/

#define VAL_GPIOG_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U) | \
                           PIN_MODE_INPUT(2U) | \
                           PIN_MODE_INPUT(3U) | \
                           PIN_MODE_INPUT(4U) | \
                           PIN_MODE_INPUT(5U) | \
                           PIN_MODE_INPUT(6U) | \
                           PIN_MODE_INPUT(7U) | \
                           PIN_MODE_INPUT(8U) | \
                           PIN_MODE_INPUT(9U) | \
                           PIN_MODE_INPUT(10U) | \
                           PIN_MODE_INPUT(11U) | \
                           PIN_MODE_INPUT(12U) | \
                           PIN_MODE_INPUT(13U) | \
                           PIN_MODE_INPUT(14U) | \
                           PIN_MODE_INPUT(15U))

#define VAL_GPIOG_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U) | \
                           PIN_OTYPE_PUSHPULL(2U) | \
                           PIN_OTYPE_PUSHPULL(3U) | \
                           PIN_OTYPE_PUSHPULL(4U) | \
                           PIN_OTYPE_PUSHPULL(5U) | \
                           PIN_OTYPE_PUSHPULL(6U) | \
                           PIN_OTYPE_PUSHPULL(7U) | \
                           PIN_OTYPE_PUSHPULL(8U) | \
                           PIN_OTYPE_PUSHPULL(9U) | \
                           PIN_OTYPE_PUSHPULL(10U) | \
                           PIN_OTYPE_PUSHPULL(11U) | \
                           PIN_OTYPE_PUSHPULL(12U) | \
                           PIN_OTYPE_PUSHPULL(13U) | \
                           PIN_OTYPE_PUSHPULL(14U) | \
                           PIN_OTYPE_PUSHPULL(15U))

#define VAL_GPIOG_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U) | \
                           PIN_OSPEED_MEDIUM(2U) | \
                           PIN_OSPEED_MEDIUM(3U) | \
                           PIN_OSPEED_MEDIUM(4U) | \
                           PIN_OSPEED_MEDIUM(5U) | \
                           PIN_OSPEED_MEDIUM(6U) | \
                           PIN_OSPEED_MEDIUM(7U) | \
                           PIN_OSPEED_MEDIUM(8U) | \
                           PIN_OSPEED_MEDIUM(9U) | \
                           PIN_OSPEED_MEDIUM(10U) | \
                           PIN_OSPEED_MEDIUM(11U) | \
                           PIN_OSPEED_MEDIUM(12U) | \
                           PIN_OSPEED_MEDIUM(13U) | \
                           PIN_OSPEED_MEDIUM(14U) | \
                           PIN_OSPEED_MEDIUM(15U))

#define VAL_GPIOG_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U) | \
                           PIN_PUPDR_FLOATING(2U) | \
                           PIN_PUPDR_FLOATING(3U) | \
                           PIN_PUPDR_FLOATING(4U) | \
                           PIN_PUPDR_FLOATING(5U) | \
                           PIN_PUPDR_FLOATING(6U) | \
                           PIN_PUPDR_FLOATING(7U) | \
                           PIN_PUPDR_FLOATING(8U) | \
                           PIN_PUPDR_FLOATING(9U) | \
                           PIN_PUPDR_FLOATING(10U) | \
                           PIN_PUPDR_FLOATING(11U) | \
                           PIN_PUPDR_FLOATING(12U) | \
                           PIN_PUPDR_FLOATING(13U) | \
                           PIN_PUPDR_FLOATING(14U) | \
                           PIN_PUPDR_FLOATING(15U))

#define VAL_GPIOG_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U) | \
                           PIN_ODR_HIGH(2U) | \
                           PIN_ODR_HIGH(3U) | \
                           PIN_ODR_HIGH(4U) | \
                           PIN_ODR_HIGH(5U) | \
                           PIN_ODR_HIGH(6U) | \
                           PIN_ODR_HIGH(7U) | \
                           PIN_ODR_HIGH(8U) | \
                           PIN_ODR_HIGH(9U) | \
                           PIN_ODR_HIGH(10U) | \
                           PIN_ODR_HIGH(11U) | \
                           PIN_ODR_HIGH(12U) | \
                           PIN_ODR_HIGH(13U) | \
                           PIN_ODR_HIGH(14U) | \
                           PIN_ODR_HIGH(15U))

#define VAL_GPIOG_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U) | \
                           PIN_AFIO_AF(2U, 0U) | \
                           PIN_AFIO_AF(3U, 0U) | \
                           PIN_AFIO_AF(4U, 0U) | \
                           PIN_AFIO_AF(5U, 0U) | \
                           PIN_AFIO_AF(6U, 0U) | \
                           PIN_AFIO_AF(7U, 0U))

#define VAL_GPIOG_AFRH    (PIN_AFIO_AF(8U, 0U) | \
                           PIN_AFIO_AF(9U, 0U) | \
                           PIN_AFIO_AF(10U, 0U) | \
                           PIN_AFIO_AF(11U, 0U) | \
                           PIN_AFIO_AF(12U, 0U) | \
                           PIN_AFIO_AF(13U, 0U) | \
                           PIN_AFIO_AF(14U, 0U) | \
                           PIN_AFIO_AF(15U, 0U))

/* PORTH:
*/

#define VAL_GPIOH_MODER   (PIN_MODE_INPUT(0U) | \
                           PIN_MODE_INPUT(1U))

#define VAL_GPIOH_OTYPER  (PIN_OTYPE_PUSHPULL(0U) | \
                           PIN_OTYPE_PUSHPULL(1U))

#define VAL_GPIOH_OSPEEDR (PIN_OSPEED_MEDIUM(0U) | \
                           PIN_OSPEED_MEDIUM(1U))

#define VAL_GPIOH_PUPDR   (PIN_PUPDR_FLOATING(0U) | \
                           PIN_PUPDR_FLOATING(1U))

#define VAL_GPIOH_ODR     (PIN_ODR_HIGH(0U) | \
                           PIN_ODR_HIGH(1U))

#define VAL_GPIOH_AFRL    (PIN_AFIO_AF(0U, 0U) | \
                           PIN_AFIO_AF(1U, 0U))

#define VAL_GPIOH_AFRH    (0)

/* PORTI:
*/

#define VAL_GPIOI_MODER               0x0
#define VAL_GPIOI_OTYPER              0x0
#define VAL_GPIOI_OSPEEDR             0x0
#define VAL_GPIOI_PUPDR               0x0
#define VAL_GPIOI_ODR                 0x0
#define VAL_GPIOI_AFRL                0x0
#define VAL_GPIOI_AFRH                0x0



/* PORTJ:
*/

#define VAL_GPIOJ_MODER               0x0
#define VAL_GPIOJ_OTYPER              0x0
#define VAL_GPIOJ_OSPEEDR             0x0
#define VAL_GPIOJ_PUPDR               0x0
#define VAL_GPIOJ_ODR                 0x0
#define VAL_GPIOJ_AFRL                0x0
#define VAL_GPIOJ_AFRH                0x0



/* PORTK:
*/

#define VAL_GPIOK_MODER               0x0
#define VAL_GPIOK_OTYPER              0x0
#define VAL_GPIOK_OSPEEDR             0x0
#define VAL_GPIOK_PUPDR               0x0
#define VAL_GPIOK_ODR                 0x0
#define VAL_GPIOK_AFRL                0x0
#define VAL_GPIOK_AFRH                0x0




// normal defaults

// this file is inserted (by chibios_hwdef.py) into hwdef.h when
// configuring for "normal" builds - typically vehicle binaries but
// also examples.

#ifndef HAL_DSHOT_ALARM_ENABLED
#define HAL_DSHOT_ALARM_ENABLED (HAL_PWM_COUNT>0)
#endif

#ifndef HAL_BOARD_LOG_DIRECTORY
#define HAL_BOARD_LOG_DIRECTORY "/APM/LOGS"
#endif

#ifndef HAL_BOARD_TERRAIN_DIRECTORY
#define HAL_BOARD_TERRAIN_DIRECTORY "/APM/TERRAIN"
#endif

// enable terrain only if there's an SD card available:
#define AP_TERRAIN_AVAILABLE HAL_OS_FATFS_IO


// end normal defaults
