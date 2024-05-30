#include "pch.h"
#include "../Project12/primeFactor.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactors, of1)
{
	PrimeFactor primeFactor;
	vector<int> expected = {};
	EXPECT_EQ(expected, primeFactor.of(1));
} 