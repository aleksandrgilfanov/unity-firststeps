#include "LedDriver.h"
#include <stdint.h>

static uint16_t * ledsAddress;
static uint16_t ledsImage;

static uint16_t convertLedNumberToBit(int ledNumber)
{
	return (1 << (ledNumber - 1));
}

static void updateHardware(void)
{
	*ledsAddress = ledsImage;
}

void LedDriver_Create(uint16_t* address)
{
	ledsAddress = address;
	ledsImage = ALL_LEDS_OFF;
	updateHardware();
}

void LedDriver_Destroy(void)
{
}

void LedDriver_TurnOn(int ledNumber)
{
	ledsImage |= (convertLedNumberToBit(ledNumber));
	updateHardware();
}

void LedDriver_TurnAllOn(void)
{
	ledsImage = ALL_LEDS_ON;
	updateHardware();
}

void LedDriver_TurnAllOff(void)
{
	ledsImage = ALL_LEDS_OFF;
	updateHardware();
}

void LedDriver_TurnOff(int ledNumber)
{
	ledsImage &= ~(convertLedNumberToBit(ledNumber));
	updateHardware();
}