#include <iostream>
using namespace std;

class account{
	private: 
	int accountNumber;
	double balance;
	public:
		account(int accountNumber,double balance);
		account()
		{
		accountNumber=23456;
		balance=00.9;
		cout << "constructor2 is running" << endl;
		}
		int getAccountNumber();
		double getBalance();
		void setBalance (double balance);
		void credit(double amount);
		void debit (double amount);
		void print ();
};
account::account(int no,double b):accountNumber(no),balance(b)
{
cout << "constructor1 is running"<<endl;	
}
int account::getAccountNumber()
{return accountNumber;
}
double account::getBalance()
{
return balance;
}
void account::setBalance(double b)
{
	balance=b;
}
void account::credit(double amount)
{
	balance+=amount;
}
void account::debit(double amount)
{
	if(amount <= balance)
	{
		balance-=amount;
	}
	else 
	{
		cout << "amount withdrawn exceeds the current balance" << endl;
	}
	
}
void account::print()
{
	cout << "accountNumber = "<< accountNumber << endl;
	cout << "balance = "<< balance << endl;
}
int main ()
{
	
account a1;
a1.credit(20);
a1.debit(10);
a1.print();
account a2;
a2.print();
a2.setBalance(100);
a2.credit(20);
a2.debit(200);
a2.print();
}