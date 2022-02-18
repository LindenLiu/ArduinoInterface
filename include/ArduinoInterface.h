#pragma once
#include "AbstractArduino.h"

#if   defined(ARDUINO_ARCH_AVR)
	#include "avr/ArduinoAvr.h"
	AbstractArduino* const arduino = new ArduinoAvr();
#elif defined(ARDUINO_ARCH_ESP32)
	#include "esp32/ArduinoEsp32.h"
	AbstractArduino* const arduino = new ArduinoEsp32();
#else 
	#error "This library only supports boards with an AVR, ESP32"
#endif