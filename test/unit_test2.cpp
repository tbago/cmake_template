#include <gtest/gtest.h>
#include <base/add.hpp>

TEST(AddTest, AddTest_One)
{
    int a = 2;
    int b = 2;
    ASSERT_EQ(add(a,b), 4);
}
