#include<iostream>
using namespace std;
inline int Max(int x,int y)
{
	return(x>y)?x:y;
}
int main()
{
	cout<<Max(20,10);
	cout<<Max(0,200);
	cout<<Max(100,1010);
	return 0;
}