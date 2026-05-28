#include<iostream>
using namespace std;
int main()
{
	int num,denom,output;
	cout<<"Enter nos:";
	cin>>num>>denom;
	try
	{
		if(denom==0)
		{
			throw denom;
		}
		else
		{
			output=num/denom;
		}
	   	catch(int denom)
		{
			cout<<"Denominator can not be zero";
		}
		cout<<"The output after division is:"<<output;
	}
		return 0;
}