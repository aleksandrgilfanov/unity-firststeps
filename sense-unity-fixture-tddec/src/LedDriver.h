#ifndef __LEDDRIVER_H
#define __LEDDRIVER_H

#include <stdint.h>

void LedDriver_Create(uint16_t* address);
void LedDriver_Destroy(void);
void LedDriver_TurnOn(int ledNumber);
void LedDriver_TurnAllOn(void);
void LedDriver_TurnAllOff(void);
void LedDriver_TurnOff(int ledNumber);

#endif /* __LEDDRIVER_H */