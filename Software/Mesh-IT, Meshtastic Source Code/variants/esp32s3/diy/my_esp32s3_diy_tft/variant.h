// variant.h
// Board: XIAO ESP32-S3 + Wio-SX1262 Kit
// Firmware: Meshtastic v2.7.15

// GPS
#define HAS_GPS 1
#define GPS_RX_PIN  44
#define GPS_TX_PIN  43

// ST7789 TFT display
#define ST7789_SDA    10
#define ST7789_SCK    8
#define ST7789_CS     3
#define ST7789_RS     1
#define ST7789_RESET  4
#define ST7789_BL     5
#define ST7789_MISO  -1
#define ST7789_BUSY  -1

#define ST7789_SPI_HOST     SPI2_HOST
#define TFT_BL              5
#define SPI_FREQUENCY       40000000
#define SPI_READ_FREQUENCY  16000000
#define TFT_HEIGHT          320
#define TFT_WIDTH           240
#define TFT_OFFSET_X        0
#define TFT_OFFSET_Y        0
#define TFT_OFFSET_ROTATION 0
#define SCREEN_ROTATE
#define SCREEN_TRANSITION_FRAMERATE 5

// SX1262 LoRa
#define USE_SX1262

#undef  LORA_SCK
#define LORA_SCK   8
#undef  LORA_MISO
#define LORA_MISO  9
#undef  LORA_MOSI
#define LORA_MOSI  10
#undef  LORA_CS
#define LORA_CS    7

#define LORA_RESET  6
#define LORA_DIO1   2
#define LORA_DIO2   3

#define SX126X_CS       LORA_CS
#define SX126X_DIO1     LORA_DIO1
#define SX126X_BUSY     LORA_DIO2
#define SX126X_RESET    LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

// I2C
#define I2C_SDA  5
#define I2C_SCL  6

// Keyboard
#define INPUTBROKER_MATRIX_TYPE 1
#define CANNED_MESSAGE_MODULE_ENABLE 1

// Neopixel
#define HAS_NEOPIXEL
#define NEOPIXEL_COUNT 1
#define NEOPIXEL_DATA  38
#define NEOPIXEL_TYPE  (NEO_GRB + NEO_KHZ800)

// User button
#define BUTTON_PIN 0
#define BUTTON_NEED_PULLUP

// Buzzer
#define PIN_BUZZER 2

// Power / battery
#define BATTERY_PIN    1
#define ADC_CHANNEL    ADC1_GPIO1_CHANNEL
#define ADC_MULTIPLIER 2.0
