
#if 1
class Account {

public:
	Account(int money)
	{
		this->balance = money;
	}

	int getBalance()
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void withdraw(int money)
	{
		if (balance < money)  balance = 0;
		else balance -= money;
	}

	void setRate(int rate)
	{
		this->rate = rate;
	}

	void increaseInterest()
	{
		balance = getNextMoney(balance);
	}

	int getBalanceAfterNyear(int year)
	{
		int result = balance;
		for (int i = 0; i < year; i++)
		{
			result = getNextMoney(result);
		}

		return   result; // (temp - balance);
	}


private:
	int balance = 0;
	int rate = 5;

	int getNextMoney(int origin)
	{
		origin = origin + ((origin * rate) / 100);
		return origin;
	}
};
#endif

