#include "avr/ArduinoAvr.h"

ArduinoAvr::ArduinoAvr(/* args */)
{
}

ArduinoAvr::~ArduinoAvr()
{
}

void ArduinoAvr::setPinMode(uint8_t pin, uint8_t mode)
{
  pinMode(pin, mode);
}

void ArduinoAvr::analogWrite(uint8_t pin, int value)
{
  analogWrite(pin, value);
}

int ArduinoAvr::analogRead(uint8_t pin)
{
  return analogRead(pin);
}

void ArduinoAvr::analogReference(uint8_t mode)
{
  analogReference(mode);
}

void ArduinoAvr::digitalWrite(uint8_t pin, uint8_t val)
{
  digitalWrite(pin, val);
}

int ArduinoAvr::digitalRead(uint8_t pin)
{
  return digitalRead(pin);
}

void ArduinoAvr::turnOffPWM(uint8_t timer)
{
  turnOffPWM(timer);
}