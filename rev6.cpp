/*
    File: rev6.cpp
    Topic: Revision exercise 6 for reinforcing C++ fundamentals.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include <iostream>
using namespace std;
int main ()
{
int  var; 
 int  *a;
 int  **b;
var = 3000;
// take the address of var
 a = &var;
// take the address of ptr using address of operator &
b = &a;
// take the value using pptr
cout << "Value of var :" << var << endl;
cout << "Value available at *a:" << *a << endl;
cout << "Value available at **b :" << **b << endl;
return 0;
}

