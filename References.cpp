#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int&ref=x;
	cout<<ref;
	ref=23;
	cout<<ref;
	return 0;
}