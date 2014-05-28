unity fixture

tests are groupped into GROUPS

each GROUP has:
  all tests runners - RUN_TEST_CASE(testname) in xxx_TestRunner.c
  TEST_SETUP() - in xxx_Test.c
  TEST_TEAR_DOWN(UnityFixture) in xxx_Test.c
  all tests - TEST(groupname, testname) - in xxx_Test.c

all GROUPS are run in main\AllTests.c:
  RUN_TEST_GROUP(groupname1);
  RUN_TEST_GROUP(gropuname2);
  etc...

run all tests:
  rake all

delete all stuff:
  rake clobber