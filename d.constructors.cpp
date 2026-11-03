/*
    File: d.constructors.cpp
    Topic: Constructor demonstration covering object initialization and setup.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
class line
{
	public:
		void setl(double len);
		double getl(void);
		line();
		private:
			double length;
};
line::line()
{
	cout<<"Object created";
}
void line::setl(double len)
{
	length=len;
}
double line::getl()
{
	return length;
}
int main()
{
	line linel;
	linel.setl(6.0);
	cout<<"\nLength of line:";
    linel.getl();
	return 0;
}
