#include<iostream>
#include<string>

using namespace std;

class BankAccount 
 {
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
			
	void deposit(double amount)
	{
		if(amount>0)
		{
			balance+=amount;
			cout<<"Deposit successful! New balance:sh"<<balance<<endl;
		}
	}		
	 
	void withdraw(double amount)
	{
		if(amount>0&&amount<=balance)
		{
			balance-=amount;
			cout<<"Withdrawal successful! New balance:sh"<<balance<<endl;
		}
			else if(amount>balance)
			{
				cout<<"Insufficient balance!!"<<endl;
			}
			else
			{
				cout<<"Invalid withdrawal amount!!"<<endl;
			}
	}
	
	void displayBalance()const
	{
		cout<<"Account Balance:sh"<<balance<<endl;
	}	
};

int main()
{
	BankAccount
	myAccount("1234567","Felix Waithira",100.00);
	myAccount.displayBalance();
	myAccount.deposit(50.0);
	myAccount.withdraw(300.0);
	myAccount.displayBalance();
	
	return 0;
}