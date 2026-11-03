/*
    File: C.constractors.cpp
    Topic: Constructor example showing initialization during object creation.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
class student
{
   public:
   string name;
   student(string n)
   {
   	name=n;
		} 
		student(student &obj)
		{
			name=obj.name;
			}	
};
int main()
{
	student s1("Peter");
	student s2=s1;
	cout<<s2.name;
	return 0;
}
