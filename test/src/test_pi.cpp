#include <gtest/gtest.h>
#include <pi/pi.h>
#include<math.h>

TEST(PiTest1, calculate)
{
    auto result = GetPi(1);
    ASSERT_TRUE(result == 3);
}

TEST(PiTest2, calculate)
{
    auto result = GetPi(2);
    EXPECT_TRUE(fabs(result-19.0/6) < 0.001) << result;
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}