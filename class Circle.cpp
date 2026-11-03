/*
    File: class Circle.cpp
    Topic: Circle class example demonstrating attributes and methods.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
class circle
{
	public:
	int	radius;
	float pi;
	circle(double r,double pi)
	  {
	  	radius=r;
	  	pi=3.142;
	  }
	 void area();
	 	float area(float radius)
	 	{
	   	 return pi*radius*radius;	
        }
	
	void circumference();
	float circumference(float radius)
	{
		return pi*2*radius;
	}
	
	double circledetails()
				{
					cout<<"Enter the radius of the circle:";
					cin>>radius;
				return radius;
				}
	};

int main()
{
    float pi=3.142;
	float radius;
		cout<<"Enter the radius of the circle:";
		cin>>radius;
	float area;
	area=pi*radius*radius;
	cout<<area<<endl;
	
	float circumference;
	circumference=pi*2*radius;
    cout<<circumference<<endl;

	return 0;
}

