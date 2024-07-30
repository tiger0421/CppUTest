#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTestExt/MockSupport_c.h"
#include "mock.h"

TEST_GROUP(TestGroup1)
{
    TEST_SETUP() {
    }
    TEST_TEARDOWN() {
        mock_c()->clear();
    }
};

/* want to test */
//TEST(TestGroup1, Test1)
//{
//    const int port = 0;
//    const int bit  = 1;
//    int ret;
//    ret = read_sw(port, bit);
//    CHECK_EQUAL(1, ret);
//}

/* using mock */
TEST(TestGroup1, Test1)
{
    const int port = 0;
    const int bit  = 1;
    int ret;
    mock_c()
        ->expectOneCall("read_sw")
        ->withIntParameters("port", 0)
        ->withIntParameters("bit", 1)
        ->andReturnIntValue(1);
    ret = is_sw_push();

    CHECK_EQUAL(1, ret);
}

int read_sw(const int port, const int bit)
{
  return mock_c()
      ->actualCall("read_sw")
      ->withIntParameters("port", port)
      ->withIntParameters("bit", bit)
      ->returnValue().value.intValue;
}

int main(int argc, char** argv)
{
    return CommandLineTestRunner::RunAllTests(argc, argv);
}
