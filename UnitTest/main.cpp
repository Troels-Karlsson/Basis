/*
 * AndromedaExceptions_test.cpp
 *
 *  Created on: 22/09/2015
 *      Author: FroZen
 */

#include "TestHarness.h"

int main()
{
     TestResult tr;
     TestRegistry::runAllTests(tr);
     return 0;
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
