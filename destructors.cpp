#include<iostream>
using namespace std;
class Rect
{
	int width,height;	
	public:
		Rect(int,int);
		~Rect();
		int area()
		{
			return width*height;
		}
};
Rect::Rect(int a,int b)
{
	width=a;
	height=b;
}
    Rect::~Rect()
{
	cout<<"\nObject deleted";
}
int main()
{
	Rect recta(3,4);
	Rect rectb(5,6);
	cout<<recta.area();
	cout<<rectb.area();
	return 0;
}