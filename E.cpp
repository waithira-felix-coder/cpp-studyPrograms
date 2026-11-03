/*
    File: E.cpp
    Topic: General C++ practice exercise used for short programming experiments.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
int main()
{
    float pi=3.142;
	float radius;
		cout<<"Enter the radius of the circle:";
		cin>>radius;
	float area;
	area=pi*radius*radius;
	cout<<area;
	
	float circumference;
	circumference=pi*2*radius;
    cout<<circumference;

	return 0;
}
