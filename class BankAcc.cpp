/*
    File: class BankAcc.cpp
    Topic: Bank account class sample implementing a simple banking data structure.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
#include<string>
using namespace std;
class BankAccount
	{
		private:
			string account_number;
			string holder_name;
			double balance;
			
			public:
    void Bankaccount(string accNo,string holderName,double initialbalance)
    {
    	account_number=accNo;
    	holder_name=holderName;
    	balance=initialbalance;
	}
	void displaydetails(string accNo,char holder_Name,double initialbalance)
	{
		cout<<"Account_number:" <<accNo;
		cout<<"Account holder_Name:" <<holder_Name;
		cout<<"Balance:" <<initialbalance;
	}
	void deposit(double amount)
	{
		balance+=amount;
	    cout<<"Deposit succcessful! New balance:ksh"<<balance<<endl;	
	}
	
	void withdraw(double amount)
	{	
		if(amount>0&&amount<=balance)
	{
		balance=-amount;
		cout<<"Wthdrawal successful! New balance:ksh"<<balance<<endl;
	}
	else
	if(amount>balance)
	{
		cout<<"Insufficient balance in your account!"<<endl;
	}
};
	
	void displayBalance()
	{
		cout<<"Account Balance:ksh"<<balance<<endl;
	}
};

int main()
{
BankAccount   myBankaccount("3439001", "Waithira Felix", 20000.00);
	myBankaccount.displayBalance();
	myBankaccount.deposit(1000);
	myBankaccount.withdraw(1700);
	myBankaccount.displayBalance();
	return 0;
	}
