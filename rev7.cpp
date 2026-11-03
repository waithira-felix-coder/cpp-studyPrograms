/*
    File: rev7.cpp
    Topic: Revision exercise 7 for reinforcing C++ fundamentals.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
class Felix
{
	public:
		Felix(int a,int b)
		{
		cout<<"Value called."<<endl;	
		}
	double Sum()
	{
		return a+b;
		}	
		int add(Felix felix)
		{
			return this->Sum()>felix.Sum();
		}
		private:
			int a;
			int b;
};

int main()
{
	int a,b;
	Felix fel1(2,3);
	Felix fel2(4,6);

	cout<<fel1=:<<Felix.fel1<endl;

	cout<<fel2=:<<Felix.fel2<endl;
	return 0;
}
