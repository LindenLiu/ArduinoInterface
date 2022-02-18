#include <ArduinoInterface.h>

#define pin A0

void setup()
{
  arduino->setPinMode(pin, INPUT);
}

void loop() 
{
  int value = arduino->analogRead(pin);
}