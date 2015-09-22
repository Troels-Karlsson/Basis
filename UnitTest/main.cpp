/*
 * AndromedaExceptions_test.cpp
 *
 *  Created on: 22/09/2015
 *      Author: FroZen
 */

#include "includes.h"
#include <iostream>
#include "ExceptionBase.h"
using namespace AndromedaSolutions;

int main()
{
	try{
     //TestResult tr;
     //TestRegistry::runAllTests(tr);
throw ExceptionBase("Test");
  //   ExceptionBase e("Hello World!");


    // throw e;
     return 0;
	}catch(std::exception& e)
	{
		std::cout << e.what();
	}
}

TEST(EqualitySuccess, EqualityGroup)
{
     int a = 5;
     CHECK(a == 5);
}
TEST(EqualityFailure, EqualityGroup)
{
     int a = 6;
     CHECK(a == 5);
}
TEST(GreaterSuccess, GreaterGroup)
{
     int a = 50;
     CHECK(a > 30);
}
TEST(GreaterFailure, GreaterGroup)
{
     int a = 50;
     CHECK(a > 100);
}
