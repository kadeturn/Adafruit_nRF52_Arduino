 /*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

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
#define PIN_SWITCH           (19)
#define PIN_DFU              (19)


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


/*
 * Serial interfaces
 */
// Serial
#define PIN_SERIAL_RX       (21)
#define PIN_SERIAL_TX       (20)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

// Used for haptic encoder SPI
#define PIN_SPI_SS		     (10)
#define PIN_SPI_MISO         (11)
#define PIN_SPI_MOSI         (12)
#define PIN_SPI_SCK          (13)

//  Used for Cirque touch SPI
// #define PIN_SPI_SS			(5)
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

#define PIN_WIRE_SDA         (16)
#define PIN_WIRE_SCL         (15)











#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
