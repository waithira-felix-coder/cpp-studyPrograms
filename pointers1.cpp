/*
    File: pointers1.cpp
    Topic: Pointer basics exercise showing memory addresses and value access.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include <iostream>
using namespace std;
int main ()
{
int  var1;
char var2[10];
cout << "Address of var1 variable: ";
cout << &var1 << endl;
cout << "Address of var2 variable: ";
cout << &var2 << endl;
return 0;
}

