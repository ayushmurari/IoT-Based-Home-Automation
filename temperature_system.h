#ifndef TEMPERATURE_SYSTEM_H
#define TEMPERATURE_SYSTEM_H

#define HEATER                5  // virtual pin V2
#define COOLER                4  // Virtual pin V0


#define TEMPERATURE_SENSOR    A0   // virtual pin V1


float read_temperature(void);
void init_temperature_system(void);
void cooler_control(bool control);
void heater_control(bool control);
#endif
