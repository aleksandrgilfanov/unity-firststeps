//- Copyright (c) 2010 James Grenning and Contributed to Unity Project
/* ==========================================
    Unity Project - A Test Framework for C
    Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
    [Released under MIT License. Please refer to license.txt for details]
========================================== */

#include "unity_fixture.h"

TEST_GROUP_RUNNER(LedDriver)
{
    RUN_TEST_CASE(LedDriver, LedsOffAfterCreate);
    RUN_TEST_CASE(LedDriver, TurnOnLedOne);
    RUN_TEST_CASE(LedDriver, TurnOffLedOne);
    RUN_TEST_CASE(LedDriver, TurnOnMultipleLeds);
    RUN_TEST_CASE(LedDriver, AllOn);
    RUN_TEST_CASE(LedDriver, TurnOffAnyLed);
    RUN_TEST_CASE(LedDriver, AllOff);
    RUN_TEST_CASE(LedDriver, OutOfBoundsProducesRuntimeError);
    RUN_TEST_CASE(LedDriver, OutOfBoundsTurnOnDoesNoHarm);
    RUN_TEST_CASE(LedDriver, LedMemoryIsNotReadable);
    RUN_TEST_CASE(LedDriver, OutOfBoundsTurnOffDoesNoHarm);
}
