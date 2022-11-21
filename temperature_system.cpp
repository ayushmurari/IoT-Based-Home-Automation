#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"


void init_temperature_system()
{
    pinMode(COOLER,OUTPUT);
    digitalWrite(COOLER,LOW);
    
    pinMode(HEATER,OUTPUT);
    digitalWrite(HEATER,LOW);
    
}

float read_temperature(void)
{
  //reading the analog output voltage fromtemperature sensor and converting it to deg cel (10mv-> 1deg cel)
  float temperature =  (((analogRead(A0) *(float)5/ 1023)) /(float) 0.01);
  return temperature;

}

void cooler_control(bool control)
{
   digitalWrite(COOLER,control);
}

void heater_control(bool control)
{
    digitalWrite(HEATER,control);
}
