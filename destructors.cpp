/*
    File: destructors.cpp
    Topic: Destructor example showing cleanup when an object goes out of scope.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
class Rect
{
	int width,height;	
	public:
		Rect(int,int);
		~Rect();
		int area()
		{
			return width*height;
		}
};
Rect::Rect(int a,int b)
{
	width=a;
	height=b;
}
    Rect::~Rect()
{
	cout<<"\nObject deleted";
}
int main()
{
	Rect recta(3,4);
	Rect rectb(5,6);
	cout<<recta.area();
	cout<<rectb.area();
	return 0;
}
