#include "pch.h"
#include "../Project12/Account.cpp"
#include <vector>
using namespace std;


#if 0
class AccountFixture : public testing::Test {
public:
	Account accout{ 10000 };
};

TEST_F(AccountFixture, CreateAccountInit10000won) {
	EXPECT_EQ(accout.getBalance(), 10000);
}

TEST_F(AccountFixture, Deposit) {
	accout.deposit(500);
	EXPECT_EQ(accout.getBalance(), 10500);
}

TEST_F(AccountFixture, Withdraw1) {
	accout.withdraw(600);
	EXPECT_EQ(accout.getBalance(), 9400);
}

TEST_F(AccountFixture, Withdraw2) {
	accout.withdraw(10500);
	EXPECT_EQ(accout.getBalance(), 0);
}

TEST_F(AccountFixture, IncreaseInterest1) {
	accout.increaseInterest();
	EXPECT_EQ(accout.getBalance(), 10500);
}

TEST_F(AccountFixture, IncreaseInterest2) {
	accout.increaseInterest();
	accout.increaseInterest();
	EXPECT_EQ(accout.getBalance(), 11025);
}

TEST_F(AccountFixture, SetRate) {
	accout.setRate(7);
	accout.increaseInterest();
	EXPECT_EQ(accout.getBalance(), 10700);
}

TEST_F(AccountFixture, getBalanceAfterNyear) {
	accout.setRate(7);
	EXPECT_EQ(accout.getBalanceAfterNyear(3), 12250);
}
#endif