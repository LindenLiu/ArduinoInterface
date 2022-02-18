#pragma once
#include "../AbstractArduino.h"
#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>


class ArduinoAvr : public AbstractArduino
{
private:
  /* data */
public:
  ArduinoAvr(/* args */);
  ~ArduinoAvr();
  void setPinMode(uint8_t pin, uint8_t mode) override;
  void analogWrite(uint8_t pin, int value) override;
  int analogRead(uint8_t pin) override;
  void analogReference(uint8_t mode) override;
  void digitalWrite(uint8_t pin, uint8_t val) override;
  int digitalRead(uint8_t pin) override;
  void turnOffPWM(uint8_t timer) override;
};