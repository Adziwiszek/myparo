#include "gtest/gtest.h"
#include "day-of-year.hpp"

struct DayOfYearTestSuite {};

TEST(DayOfYearTestSuite, February29LeapYear)
{
  ASSERT_EQ(dayOfYear(2, 29, 2024), 31 + 29);
}

TEST(DayOfYearTestSuite, January1stIsFitstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2020), 1);
}

TEST(Exception, DayOutOfBoundsException)
{
  EXPECT_THROW({
    try{
      dayOfYear(1, 421, 2020);
    }
    catch(const DayOutOfBoundsException& e) {
      EXPECT_STREQ("Day out of bounds", e.what());
      throw;
    }
  }, DayOutOfBoundsException);
}

TEST(Exception, MonthOutOfBoundsException)
{
  EXPECT_THROW({
    try{
      dayOfYear(420, 1, 2020);
    }
    catch(const MonthOutOfBoundsException& e) {
      EXPECT_STREQ("Month out of bounds", e.what());
      throw;
    }
  }, MonthOutOfBoundsException);
}