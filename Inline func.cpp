/*
    File: Inline func.cpp
    Topic: Inline function example showing function call optimization and simple reuse.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
inline int Max(int x,int y)
{
	return(x>y)?x:y;
}
int main()
{
	cout<<Max(20,10);
	cout<<Max(0,200);
	cout<<Max(100,1010);
	return 0;
}
