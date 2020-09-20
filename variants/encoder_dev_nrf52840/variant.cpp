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

#include "variant.h"

#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
	
  // Switch Out
  2,	// D0	R_LED_OUT	AIN0
  3,	// D1	G_LED_OUT	AIN1
  20,	// D2	SW2_OUT
  23,	// D3	SW1_OUT
  22,	// D4	TOP_OUT

  // Switch IN
  30,	// D5	R_LED_IN	AIN2
  28,	// D6	G_LED_IN	AIN3
  21,	// D7	SW2_IN
  19,	// D8	SW1_IN
  16,	// D9	TOP_IN
 
  // Encoder 
  17,	// D10	CS
  15,	// D11	MISO
  13,	// D12	MOSI
  14,	// D13	SCK
 
  // DRV2605 
  40,	// D14	TRIG_LRA P1.08
  11,	// D15	SCL
  12,	// D16	SDA
  
  // Misc
  42,	// D17	LED1
  43,	// D18	LED2
  34,	// D19	SWITCH

  // Uart
  25,	// D20	TX
  24	// D21	RX
	
};

void initVariant()
{
  // LED1 & LED2
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);

  pinMode(PIN_LED2, OUTPUT);
  ledOff(PIN_LED2);
}