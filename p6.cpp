#include<iostream>
using namespace std;
class room
{
	public:
		double length;
		double breadth;
		double height;
		double calc_area()
		{
			return length*breadth;
		}

double calc_vol()
{
	return length*breadth*height;
}
};
int main()
{
	room z;
    cout<<"Enter the length:";
    cin>>z.length;
    cout<<"Enter the breadth:";
	cin>>z.breadth;
	cout<<"Enter the height:";
	cin>>z.height;
	cout<<"\nArea of room="<<z.calc_area();
	cout<<"\nVolume of room="<<z.calc_vol();
	return 0;
}