#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"
#include "sub.h"

TEST_GROUP(Subtraction)
{
};

TEST(Subtraction, SubTest)
{
    CHECK_EQUAL(2, sub(5, 3));
    CHECK_EQUAL(-6, sub(-3, 3));
    CHECK_EQUAL(1, sub(-2, -3));
}

int main(int argc, char **argv){
      return CommandLineTestRunner::RunAllTests(argc, argv);
}

