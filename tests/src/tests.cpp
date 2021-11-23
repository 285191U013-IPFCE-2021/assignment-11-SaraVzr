#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumtail(1,0)==1); //sum (n=1)=1
    REQUIRE(sumtail(3,0)==6); //sum (n=3)= 1+2+3=6
    REQUIRE(sumtail(5,0)==15); //sum (5)=15
    REQUIRE(sumtail(14,0)==105);//sum(14)=105
}

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumwhile(1)==1);
    REQUIRE(sumwhile(3)==6);
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(fib(0,0,1)==0); //when n is 0, we get p'value which is 0
    REQUIRE(fib(5,0,1)==5); //n=5, it returns pp's value which is 5
    REQUIRE(fib(2,0,1)==1); //n=2, it returns pp's value which is 1
    REQUIRE(fib(7,0,1)==13); //n=7, it returns pp's value which is 13
    REQUIRE(fib(9,0,1)==34); //n=9, it returns pp's value which is 34
}


