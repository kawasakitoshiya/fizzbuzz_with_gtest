#include "fizzbuzz.h"
#include "gtest/gtest.h"

TEST(FizzBuzzTest, say1){
  FizzBuzz fizzbuzz;
  EXPECT_EQ("1", fizzbuzz.say(1));
}

