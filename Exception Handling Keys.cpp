/*
    File: Exception Handling Keys.cpp
    Topic: Exception handling example using try/catch blocks to manage runtime errors.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
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
