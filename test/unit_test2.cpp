#include <gtest/gtest.h>
#include <base/add.hpp>

TEST(AddTest, AddTest_One)
{
    int a = 1;
    int b = 2;
    ASSERT_EQ(add(a,b), 4);
}
