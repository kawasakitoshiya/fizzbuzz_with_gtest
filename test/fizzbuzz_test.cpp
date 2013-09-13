#include "fizzbuzz.h"
#include "gtest/gtest.h"

TEST(FizzBuzzTest, say1){
  FizzBuzz fizzbuzz;
  EXPECT_EQ("1", fizzbuzz.say(1));
}

TEST(FizzBuzzTest, say2){
  FizzBuzz fizzbuzz;
  EXPECT_EQ("2",fizzbuzz.say(2));
}

TEST(FizzBuzzTest, sayFizz){
  FizzBuzz fizzbuzz;
  EXPECT_EQ("Fizz",fizzbuzz.say(3));
}