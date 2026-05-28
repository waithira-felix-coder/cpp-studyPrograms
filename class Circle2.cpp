#include<iostream>
using namespace std;
class circle
{

	public:
	  circle(double r,double pi)
	  {
	  	radius=r;
	  	pi=3.142;
	  };
	 void area();
	 	float area(float radius)
	 	{
		 	 return pi*radius*radius;	
	    }
	
	void circumference();
	float circumference(float radius)
	{
		return pi*2*radius;
	}
	
	void input()
				{
					float radius;
					cout<<"Enter the radius of the circle:";
					cin>>radius;
					return radius;
				}
	};

int main()
{
	float area;
	float circumference;
	float radius;
	float circlearea=area;
	float circlecircumference=circumference;
	cout<<"\nArea of the circle is:",circlearea;
	cout<<"\nCircumference of the circle is:",circlecircumference;
	return 0;
}
