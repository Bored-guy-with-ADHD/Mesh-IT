// ════════════════════════════════════════════════════════════════
//  variant.h
//  Board  : XIAO ESP32-S3 + Wio-SX1262 Kit
//  Display: 2.8" SPI TFT 240x320 (ST7789)
//  GPS    : Quectel L89 GNSS
//  Keyboard: TCA8418RTWR I2C matrix scanner (5 rows x 7 cols)
//  I/O    : I/O expander for joystick
//  Firmware: Meshtastic v2.7.15
//
//  Pin mapping derived from schematic: haiku.pdf
//  Author : Kavya
// ════════════════════════════════════════════════════════════════

// ─── GPS — Quectel L89 ───────────────────────────────────────
// Default baud rate: 9600 (matches Meshtastic default, no override needed)
// L89 TX  →  ESP32-S3 RX (D7)
// L89 RX  ←  ESP32-S3 TX (D6)
#define HAS_GPS 1
#define GPS_RX_PIN  44    // D7 / RX
#define GPS_TX_PIN  43    // D6 / TX

// ─── 2.8" SPI TFT Display — ST7789 — 240x320 ────────────────
// Shares SPI bus with LoRa (different CS pins keep them separate)
#define ST7789_SDA    10   // D10 / MOSI
#define ST7789_SCK    8    // D8  / SCK
#define ST7789_CS     3    // D2  / CS
#define ST7789_RS     1    // D0  / DC (Data or Command select)
#define ST7789_RESET  4    // D3  / RST
#define ST7789_BL     5    // D4  / Backlight
#define ST7789_MISO  -1    // Not needed (display is write-only)
#define ST7789_BUSY  -1

#define ST7789_SPI_HOST     SPI2_HOST
#define TFT_BL              5
#define SPI_FREQUENCY       40000000    // 40 MHz
#define SPI_READ_FREQUENCY  16000000
#define TFT_HEIGHT          320
#define TFT_WIDTH           240
#define TFT_OFFSET_X        0
#define TFT_OFFSET_Y        0
#define TFT_OFFSET_ROTATION 0
#define SCREEN_ROTATE
#define SCREEN_TRANSITION_FRAMERATE 5

// ─── SX1262 LoRa — Wio-SX1262 Kit ───────────────────────────
// SPI bus shared with TFT display (CS pins are different)
// TODO: Confirm RST, DIO1, BUSY pins from Wio-SX1262 kit pinout sheet
#define USE_SX1262

#undef  LORA_SCK
#define LORA_SCK   8     // D8  / SCK  (shared with TFT)
#undef  LORA_MISO
#define LORA_MISO  9     // D9  / MISO
#undef  LORA_MOSI
#define LORA_MOSI  10    // D10 / MOSI (shared with TFT)
#undef  LORA_CS
#define LORA_CS    7     // D6  / CS   (separate from TFT CS)

// ⚠️  CONFIRM THESE PINS FROM WIO-SX1262 KIT DATASHEET:
#define LORA_RESET  6    // RST  — verify against kit pinout
#define LORA_DIO1   2    // DIO1 / IRQ — verify against kit pinout
#define LORA_DIO2   3    // BUSY — verify against kit pinout

#define SX126X_CS       LORA_CS
#define SX126X_DIO1     LORA_DIO1
#define SX126X_BUSY     LORA_DIO2
#define SX126X_RESET    LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH      // DIO2 controls RF switch on this module
#define SX126X_DIO3_TCXO_VOLTAGE 1.8  // Module has TCXO (remove if crystal)

// ─── I2C Bus — shared by TCA8418 keyboard + I/O expander ─────
#define I2C_SDA  5    // D4 / GPIO5
#define I2C_SCL  6    // D5 / GPIO6

// ─── TCA8418 Keyboard Matrix Scanner (I2C) ───────────────────
// 5 rows x 7 cols = 35 keys (matches schematic page 2)
// TCA8418 sits on I2C bus above — no extra GPIO pins needed
#define INPUTBROKER_MATRIX_TYPE 1
#define CANNED_MESSAGE_MODULE_ENABLE 1

// ─── Joystick — via I/O expander on I2C bus ──────────────────
// JOY_UP, JOY_DOWN, JOY_LEFT, JOY_RIGHT, JOY_PRESS
// Handled by I/O expander — no direct GPIO defines needed here

// ─── Neopixel LED (onboard XIAO ESP32-S3) ────────────────────
#define HAS_NEOPIXEL
#define NEOPIXEL_COUNT 1
#define NEOPIXEL_DATA  38
#define NEOPIXEL_TYPE  (NEO_GRB + NEO_KHZ800)

// ─── User button — BOOT button ───────────────────────────────
#define BUTTON_PIN 0
#define BUTTON_NEED_PULLUP

// ─── Buzzer ──────────────────────────────────────────────────
// Driven by SS8050 transistor via GPIO
#define PIN_BUZZER 2    // verify against schematic BZ1 connection

// ─── Power / Battery ─────────────────────────────────────────
// Charger IC with power path — ADC reads battery voltage
#define BATTERY_PIN    1
#define ADC_CHANNEL    ADC1_GPIO1_CHANNEL
#define ADC_MULTIPLIER 2.0    // adjust based on your resistor divider ratio
