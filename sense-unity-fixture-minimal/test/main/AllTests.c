//- Copyright (c) 2010 James Grenning and Contributed to Unity Project
/* ==========================================
    Unity Project - A Test Framework for C
    Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
    [Released under MIT License. Please refer to license.txt for details]
========================================== */

#include "unity_fixture.h"

static void runAllTests()
{
    RUN_TEST_GROUP(mygroup);
}

int main(int argc, char* argv[])
{
    return UnityMain(argc, argv, runAllTests);
}

