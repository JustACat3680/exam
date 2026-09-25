#include <sum.h>
#include <gtest/gtest.h>
TEST(sum,Sum)
{
    EXPECT_EQ(sum(2,3), 5);
}