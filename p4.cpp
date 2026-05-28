#include<iostream>
using namespace std;
int main()
{
	int a;
		for(a=1;a<=100;a++)
		{
	cout<<"Enter a number:";
	cin>>a;

	if(a%5==0&&a%8==0)
	{
		cout<<"Divisible by 5 and 8";
	}
	else if(a%8==0)
	{
		cout<<"Divisible by 8";
	}
	else if(a%5==0)
	{
		cout<<"Divisible by 5";
	}
	else
	{
		cout<<"Divisible by none";
	}
}
return 0;
}