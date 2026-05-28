#include<iostream>
using namespace std;
class car
{
	private:
		string model;
		int year;
		int speed;
		public:
			void carset(string m,int y,int s)
			{
				model=m;
				year=y;
				speed=s;
			}
			void displaydetails()
			{
				cout<<"\nModel:"<<model;
				cout<<"\nYear:"<<year;
				cout<<"\nSpeed:"<<speed;
			}
			void accelerate(int inc)
			{
				speed+=inc;
				cout<<model<<"\naccelerate to"<<speed<<"km/hr";
			}
			void brake(int decr)
			{
				speed=(speed-decr>=0)?speed-decr:0;
				cout<<model<<"\nslowed down to"<<speed<<"km/hr";
			}
};
int main()
{
car mycar;
mycar.carset("\nMercedes",2024,0);
mycar.displaydetails();
mycar.accelerate(60);
mycar.brake(20);
return 0;
}