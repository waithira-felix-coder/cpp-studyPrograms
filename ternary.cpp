/*
    File: ternary.cpp
    Topic: Ternary operator example demonstrating compact conditional expressions.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
int main()
{
	int a=5,b=12;
	(a<3) ? cout<<"a is less than 3" : cout<<"a is greater than 3";
	(b%3==0)?cout<<"\nb is divisible by 3":cout<<"\nb is not divisible by 3";
	return 0;
}
