#ifndef __LEDDRIVER_H
#define __LEDDRIVER_H

#include <stdint.h>

enum {
	ALL_LEDS_ON = ~0,
	ALL_LEDS_OFF = ~ALL_LEDS_ON
};

void LedDriver_Create(uint16_t* address);
void LedDriver_Destroy(void);
void LedDriver_TurnOn(int ledNumber);
void LedDriver_TurnAllOn(void);
void LedDriver_TurnOff(int ledNumber);

#endif /* __LEDDRIVER_H */