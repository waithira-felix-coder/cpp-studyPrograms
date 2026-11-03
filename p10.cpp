/*
    File: p10.cpp
    Topic: Practice exercise 10 covering basic programming concepts in C++.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
class odd
{
	private:
		int x;
		public:
			void get()
			{
				cout<<"Enter an integer:";
				cin>>x;
				if(x%2==0)
				{
					cout<<x<<"is even.";
				}
				else
				{
					cout<<x<<"is odd.";
				}
			}
};
int main()
{
	odd obj;
	obj.get();
	return 0;
}
