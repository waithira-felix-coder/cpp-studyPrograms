/*
    File: call by value.cpp
    Topic: Pass-by-value example showing how parameters are copied into functions.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include <iostream>  
using namespace std;  
void change(int data);  
int main()  
{  
int data = 3;    
cout << "Value of the data is: " << data<< endl;  
return 0;  
}  
void change(int data)  
{  
data = 5;  
}  

