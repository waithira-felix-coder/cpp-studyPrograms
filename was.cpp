/*
    File: was.cpp
    Topic: General practice program used for learning and testing small C++ logic.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
int main()
{
	int i;
int sum=0;
for(i=2;i<=50;i++)
{
	sum+=i;
}
	cout<<"The sum of all even numbers from 1 to 50 is:"<<sum<<endl;
 return 0;
}
 
