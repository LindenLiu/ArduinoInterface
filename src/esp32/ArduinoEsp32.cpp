#include "esp32/ArduinoEsp32.h"

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

void ArduinoEsp32::analogWrite(uint8_t pin, int value)
{
  analogWrite(pin, value);
}

int ArduinoEsp32::analogRead(uint8_t pin)
{
  return analogRead(pin);
}

void ArduinoEsp32::analogReference(uint8_t mode)
{
  analogReference(mode);
}

void ArduinoEsp32::digitalWrite(uint8_t pin, uint8_t val)
{
  digitalWrite(pin, val);
}

int ArduinoEsp32::digitalRead(uint8_t pin)
{
  return digitalRead(pin);
}

void ArduinoEsp32::turnOffPWM(uint8_t timer)
{
  turnOffPWM(timer);
}