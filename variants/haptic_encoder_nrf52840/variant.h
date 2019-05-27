#ifndef _VARIANT_HAPTIC_ENCODER_NRF52840_
#define _VARIANT_HAPTIC_ENCODER_NRF52840_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFXO      // Board uses 32khz crystal for LF
// define USE_LFRC    // Board uses RC for LF


/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (21)
#define NUM_DIGITAL_PINS     (21)
#define NUM_ANALOG_INPUTS    (4)
#define NUM_ANALOG_OUTPUTS   (0)

// LEDs
#define PIN_LED1             (17)
#define PIN_LED2             (18)

#define LED_BUILTIN          PIN_LED2
#define LED_CONN             PIN_LED1

#define LED_GREEN            PIN_LED2
#define LED_BLUE             PIN_LED1

#define LED_STATE_ON         1         // State when LED is litted

// Buttons
#define PIN_SWITCH             (19)

/*
 * Analog pins
 */
#define PIN_A0               (0)
#define PIN_A1               (1)
#define PIN_A2               (5)
#define PIN_A3               (6)

static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
static const uint8_t A3  = PIN_A3 ;
#define ADC_RESOLUTION    14

// Other pins
#define PIN_DFU            (19)

/*
 * Serial interfaces
 */
// Serial
#define PIN_SERIAL_RX       (21) // P0.24
#define PIN_SERIAL_TX       (20) // P0.25

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_SS		    (10) // P0.17
#define PIN_SPI_MISO         (11) // P0.15
#define PIN_SPI_MOSI         (12) // P0.13
#define PIN_SPI_SCK          (13) // P0.14


// #define PIN_SPI_SS			 (5)
// #define PIN_SPI_MISO         (6)
// #define PIN_SPI_MOSI         (7)
// #define PIN_SPI_SCK          (8)

static const uint8_t SS   = PIN_SPI_SS ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (16) // P0.12
#define PIN_WIRE_SCL         (15) // P0.11

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

// QSPI Pins
#define PIN_QSPI_SCK         27
#define PIN_QSPI_CS          28
#define PIN_QSPI_IO0         29
#define PIN_QSPI_IO1         30
#define PIN_QSPI_IO2         31
#define PIN_QSPI_IO3         32


/*
  19,  // D8 is QSPI CLK on P0.19
  20,  // D2 is QSPI CS on P0.20
  17,  // D10 is QSPI Data 0 on P0.17
  22,  // D4 is QSPI Data 1 on P0.22
  23,  // D3 is QSPI Data 2 on P0.23
  21,  // D7 is QSPI Data 3 on P0.21
*/


// On-board QSPI Flash
// If EXTERNAL_FLASH_DEVICES is not defined, all supported devices will be used
#define EXTERNAL_FLASH_DEVICES   GD25Q16C

#define USB_MSC_BLOCK_SIZE    512
#define USB_MSC_BLOCK_COUNT   ((2*1024*1024) / USB_MSC_BLOCK_SIZE)

#ifdef __cplusplus
}
#endif

#endif
