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

TEST(FizzBuzzTest, sayBuzz){
  FizzBuzz fizzbuzz;
  EXPECT_EQ("Buzz",fizzbuzz.say(5));
}


TEST(FizzBuzzTest, sayFizzBuzz){
  FizzBuzz fizzbuzz;
  EXPECT_EQ("FizzBuzz",fizzbuzz.say(15));
}