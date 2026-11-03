/*
    File: p9.cpp
    Topic: Practice exercise 9 covering basic programming concepts in C++.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
class box
{
	public:
		double l;
		double h;
		double b;
		getvolume();
		double cal_volume();
		void setl(double len)
		{
			l=len;
		}
		void setb(double bre)
		{
			b=bre;
		}
		void seth(double hei);
};
box::getvolume()
{
	return l*b*h;
}
void box::seth(double hei)
{
	h=hei;
}
	int main()
{
	box box1;
	box box2;
	double volume=0.0;
    cout<<"Enter the len:";
	cin>>box1.l;
	cout<<"Enter the bre:";
	cin>>box1.b;
	cout<<"Enter the hei:";
	cin>>box1.h;
	cin>>box2.l;
	cout<<"Enter the bre:";
	cin>>box2.b;
	cout<<"Enter the hei:";
	cin>>box2.h;
	volume=box1.getvolume();
	cout<<"Volume of box1="<<box1.cal_volume();
	volume=box2.getvolume();
	cout<<"Volume of box2"<<box2.cal_volume();
	return 0;
}
