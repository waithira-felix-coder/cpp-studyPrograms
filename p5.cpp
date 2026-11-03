/*
    File: p5.cpp
    Topic: Practice exercise 5 covering basic programming concepts in C++.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
#include<iostream>
using namespace std;
int main()
{
	float amt,creditamt,debitamt;
	float newamt;
	char ch;
	cout<<"Enter initial amount\n";
	cin>>amt;
	for(int i=1;i<=amt;i++)
    cout<<"Enter \nc for credit,\nd for debit,\nb for balance\n";
     cin>>ch;
	switch(ch)
	{
		case 'c':
			cout<<"Enter credit amount\n";
			cin>>creditamt;
			newamt=amt+creditamt;
			cout<<"New amount=:";
			break;
		case 'd':
		cout<<"Enter debit amount\n";
			cin>>debitamt;
			if(amt>=debitamt)
			{
				newamt=amt-debitamt;
				cout<<"New amount=:";
			}
			else
			{
			cout<<"Insufficient Amount";	
			}
			break;
		case 'b':
				cout<<"Your account balance=%f",amt;
				break;
	}
	return 0;
}
