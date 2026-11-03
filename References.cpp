/*
    File: References.cpp
    Topic: Reference variables example showing aliasing and parameter passing by reference.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int&ref=x;
	cout<<ref;
	ref=23;
	cout<<ref;
	return 0;
}
