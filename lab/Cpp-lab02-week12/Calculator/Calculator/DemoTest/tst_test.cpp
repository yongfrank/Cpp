
#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../dialog.h"
using namespace testing;

TEST(Demo, Test)
{
    EXPECT_EQ(1, 1);
    ASSERT_THAT(0, Eq(0));
}

