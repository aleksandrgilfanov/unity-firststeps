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

output by unity-fixture can be changed in rakefile_helper.rb
  UNITY_OUTPUT_CHAR=UnityOutputCharSpy_OutputChar (it is function from is test\unity_output_Spy.c)


I disabled "RepeatCount=2" in rakefile_helper.rb -> "# Execute unit test and generate results file"
  cmd_str = executable + " -v -r"
  -r means Repeat

I copied files from "..\unity\extras\fixture\src" to "..\unity\src"
  and adedd in "rakefile_helper.rb":
    src_files += Dir[HERE+'../unity/src/*.c']
  