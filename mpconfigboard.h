#define CERB40

#define MICROPY_HW_BOARD_NAME       "Cerb40"
#define MICROPY_HW_MCU_NAME         "STM32F405RG"
#define MICROPY_PY_SYS_PLATFORM     "pyboard"

#define MICROPY_HW_HAS_LED          (1)
#define MICROPY_HW_HAS_SWITCH       (0)
#define MICROPY_HW_HAS_SDCARD       (1)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LIS3DSH      (0)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_I2C1      (1)
#define MICROPY_HW_ENABLE_SPI1      (1)
#define MICROPY_HW_ENABLE_SPI2      (0)
#define MICROPY_HW_ENABLE_SPI3      (1)
#define MICROPY_HW_ENABLE_CAN       (1)

// HSE is 8MHz
#define MICROPY_HW_CLK_PLLM (12)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (7)
#define MICROPY_HW_CLK_LAST_FREQ (1)

// UART config
#define MICROPY_HW_UART2_TX     (pin_A2)
#define MICROPY_HW_UART2_RX     (pin_A3)
#define MICROPY_HW_UART2_RTS    (pin_A1)
#define MICROPY_HW_UART2_CTS    (pin_A0)

#define MICROPY_HW_UART3_TX     (pin_B10)
#define MICROPY_HW_UART3_RX     (pin_B11)

// I2C busses
#define MICROPY_HW_I2C1_NAME "X"
#define MICROPY_HW_I2C1_SCL (pin_B6)
#define MICROPY_HW_I2C1_SDA (pin_B7)

// SPI busses
#define MICROPY_HW_SPI1_SCK  (pin_B3)
#define MICROPY_HW_SPI1_MISO (pin_B4)
#define MICROPY_HW_SPI1_MOSI (pin_B5)


// USRSW has no pullup or pulldown, and pressing the switch makes the input go low
//#define MICROPY_HW_USRSW_PIN        (pin_B3)
//#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
//#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
//#define MICROPY_HW_USRSW_PRESSED    (0)

// The CerBot has a single LED (on a gpio pin)
#define MICROPY_HW_LED1             (pin_A14) // red
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))
// SD card detect switch
#define MICROPY_HW_SDCARD_DETECT_PIN        (pin_B15)
#define MICROPY_HW_SDCARD_DETECT_PULL       (GPIO_PULLUP)
#define MICROPY_HW_SDCARD_DETECT_PRESENT    (GPIO_PIN_RESET)

// USB config
//#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
//#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)
