/*
    File: rev2.cpp
    Topic: Revision exercise 2 for reinforcing C++ fundamentals.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	int total,rate=20;
	cout<<"Enter number of days worked:";
	cin>>n;
	total=n*rate;
	cout<<"\n For rate RM20 per day ";
	cout<<"\nFor "<<n<<"Days worked,you have earned: $";
	cout<<total<<endl;
	return 0;
}
