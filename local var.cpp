/*
    File: local var.cpp
    Topic: Local variable example emphasizing scope within a function.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include <iostream>
using namespace std;
// This is a global variable
char myVar = 'A';
int main()
{
   cout <<"Value of myVar: "<< myVar<<endl;
   myVar='Z';
   cout <<"Value of myVar: "<< myVar;
   return 0;
}

