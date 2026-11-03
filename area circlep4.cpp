/*
    File: area circlep4.cpp
    Topic: Circle area calculation exercise using a constant value and formula.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
#define PI 3.142
int main()
{
	int RADIUS;
	float area;
	cout<<"Enter radius:";
	cin>>RADIUS;
    area=PI*RADIUS*RADIUS;
    cout<<area;
	return 0;
	}
