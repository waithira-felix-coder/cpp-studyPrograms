#include<iostream>
using namespace std;
class EMPLOYEE
{
	public:
		char empName[20];
		int empAge;
		double empSalary;
		int telephoneNo;
		int date;
};
int main()
{
	EMPLOYEE emp;
	
	 cout<<"Enter your name:";
	 cin>>emp.empName;
	 cout<<"Enter your age:";
	 cin>>emp.empAge;
	 cout<<"Enter your salary:";
	 cin>>emp.empSalary;
	 cout<<"Your Telephone number:";
	 cin>>emp.telephoneNo;
	 cout<<"Date:";
	 cin>>emp.date;
     
     cout<<"\nName:"<<emp.empName<<endl;
     cout<<"Age:"<<emp.empAge<<endl;
     cout<<"Salary:"<<emp.empSalary<<endl;
     cout<<"TelephoneNo:"<<emp.telephoneNo<<endl;
     cout<<"Date:"<<emp.date<<endl;
     
	return 0;
}