#include "gtest/gtest.h"
#include "Solution299.h"
#include <iostream>

TEST(Solution299Suit, TestNorepeat) {
    Solution299 solution299;
    auto res = solution299.getHint("1807", "7810");
    EXPECT_EQ("1A3B", res);
}


TEST(Solution299Suit, TestAllRepeat) {
    Solution299 solution299;
    auto res = solution299.getHint("1122", "2211");
    EXPECT_EQ("0A4B", res);
}