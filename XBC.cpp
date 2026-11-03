/*
    File: XBC.cpp
    Topic: General C++ coding exercise for basic program logic and experimentation.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
#include<string>

using namespace std;

class BankAccount  {
	private:
		string accountNumber;
		string accountHolderName;
		double balance;
		
		public:
			BankAccount(string accNumber,string accHolderName,double initialBalance){
				accountNumber=accNumber;
				accountHolderName=accHolderName;
				balance=initialBalance;
			}
			
	void deposit(double amount){
		if(amount>0){
			balance+=amount;
			cout<<"Deposit successful! New balance:sh"<<balance<<endl;
		}
	}		
	 
	void withdraw(double amount){
		if(amount>0&&amount<=balance){
			balance-=amount;
			cout<<"Withdrawal successful! New balance:sh"<<balance<<endl;
		}
			else if(amount>balance){
				cout<<"Insufficient balance!!"<<endl;
			}
			else{
				cout<<"Invalid withdrawal amount!!"<<endl;
			}
	}
	
	void displayBalance()const{
		cout<<"Account Balance:sh"<<balance<<endl;
	}	
};

int main()
{
 int ID;
 char name;
 float balance,depositamt,withdrawamt,amount;
 cout<<"Enter your IDno:";
 cin>>ID;
 cout<<"Enter your name:";
 cin>>name;
 cout<<"\nEnter your initial balance:";
 cin>>balance;
 cout<<"\nEnter amount you wish to deposit:";
 cin>>depositamt;
 balance+=amount;
 cout<<balance;
 cout<<"\nEnter amount you wish to withdraw:";
 cin>>withdrawamt;
 balance-=amount;
 cout<<balance;
return 0;
}
