/**
 * MIT License
 *
 * Copyright (c) 2022 Linden Liu
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#pragma once
#include "../AbstractArduino.h"

#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>

class ArduinoEsp32 : public AbstractArduino
{
private:
  /* data */
public:
  ArduinoEsp32(/* args */);
  ~ArduinoEsp32();
  void setPinMode(uint8_t pin, uint8_t mode) override;
  void writeAnalog(uint8_t pin, int value) override;
  int readAnalog(uint8_t pin) override;
  void referenceAnalog(uint8_t mode) override;
  void writeDigital(uint8_t pin, uint8_t val) override;
  int readDigital(uint8_t pin) override;
};

ArduinoEsp32::ArduinoEsp32(/* args */)
{
}

ArduinoEsp32::~ArduinoEsp32()
{
}

void ArduinoEsp32::setPinMode(uint8_t pin, uint8_t mode)
{
  pinMode(pin, mode);
}

void ArduinoEsp32::writeAnalog(uint8_t pin, int value)
{
  assert("Not implemented yet");
}

int ArduinoEsp32::readAnalog(uint8_t pin)
{
  return analogRead(pin);
}

void ArduinoEsp32::referenceAnalog(uint8_t mode)
{
  assert("Not implemented yet");
}

void ArduinoEsp32::writeDigital(uint8_t pin, uint8_t val)
{
  digitalWrite(pin, val);
}

int ArduinoEsp32::readDigital(uint8_t pin)
{
  return digitalRead(pin);
}
