#include "pch.h"
#include "../Project12/primeFactor.cpp"

#include <vector>
using namespace std;

class PrimeFixutre : public testing::Test {
public:
	PrimeFactor primeFactor;
	vector<int> expected;
};

TEST_F(PrimeFixutre, of1)
{
	expected = {};
	EXPECT_EQ(expected, primeFactor.of(1));
} 

TEST_F(PrimeFixutre, of2)
{
	expected = {2};
	EXPECT_EQ(expected, primeFactor.of(2));
} 