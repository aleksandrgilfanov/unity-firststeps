//- Copyright (c) 2010 James Grenning and Contributed to Unity Project
/* ==========================================
    Unity Project - A Test Framework for C
    Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
    [Released under MIT License. Please refer to license.txt for details]
========================================== */

#include "unity_fixture.h"
#include "MyModule.h"

static int data = -1;

TEST_GROUP(mygroup);

TEST_SETUP(mygroup)
{
    data = 0;
}

TEST_TEAR_DOWN(mygroup)
{
    data = -1;
}

TEST(mygroup, test1)
{
    TEST_ASSERT_EQUAL_INT( 0, MyModule_Value() );
}

TEST(mygroup, test2)
{
    MyModule_Create();
    TEST_ASSERT_EQUAL_INT( 1, MyModule_Value() );
}

TEST(mygroup, test3)
{
    TEST_ASSERT_EQUAL_INT(0, data);
}
