# ArduinoInterface
The Object oriented arduino interface which could be used for unit test, adopting new board etc. 

# How to setup platformio.ini to trick vscode.
It's a bit painful that for library project there is no compilable target by platformio. To trick the system, you can copy the platformio.ini from example to the project's root folder and create an main.cpp file in src. like following
```
#include <Arduino.h>

void setup()
{

}

void loop()
{

}
```
This will make the project compilable from the vscode and also will have code completion support. 