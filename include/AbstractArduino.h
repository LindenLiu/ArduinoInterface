#pragma once

#include <stdint.h>

class AbstractArduino
{
private:
  
public:
  virtual void setPinMode(uint8_t pin, uint8_t mode);
  virtual void analogWrite(uint8_t pin, int value);
  virtual int analogRead(uint8_t pin);
  virtual void analogReference(uint8_t mode);
  virtual void digitalWrite(uint8_t pin, uint8_t val);
  virtual int digitalRead(uint8_t pin);
  virtual void turnOffPWM(uint8_t timer);
};

