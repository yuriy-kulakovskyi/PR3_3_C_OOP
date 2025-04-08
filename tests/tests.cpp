#include <gtest/gtest.h>
#include "../classes/Fraction.h"

TEST(FractionTest, DefaultConstructor) {
    Fraction f;
    EXPECT_EQ(f.getWhole(), 0);
    EXPECT_EQ(f.getFractional(), 0);
}