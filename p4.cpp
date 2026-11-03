/*
    File: p4.cpp
    Topic: Practice exercise 4 covering basic programming concepts in C++.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
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
