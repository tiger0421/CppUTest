#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"
#include "../autoGen/add.h"

TEST_GROUP(Addition)
{
};

TEST(Addition, AddTest)
{
    CHECK_EQUAL(8, add(5, 3));
    CHECK_EQUAL(0, add(-3, 3));
    CHECK_EQUAL(-5, add(-2, -3));
}

int main(int argc, char** argv)
{
    return CommandLineTestRunner::RunAllTests(argc, argv);
}

