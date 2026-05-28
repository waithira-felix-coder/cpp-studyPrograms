#include<iostream>
using namespace std;
class BOX
{
public:
		double length;
		double breadth;
		double height;
	};
	int main()
	{
	BOX box1;
	BOX box2;
  double volume=0.0;
	
   cout<<"Enter the length:";
   cin>>box1.length;
   cout<<"Enter the breadth:";
   cin>>box1.breadth;
   cout<<"Enter the height:";
   cin>>box1.height; 
	
   cout<<"Enter the length";
   cin>>box2.length;
   cout<<"Enter the breadth:";
   cin>>box2.breadth;
   cout<<"Enter the height:";
   cin>>box2.height;
	
	volume=box1.length*box1.breadth*box1.height;
	cout<<"Volume of box1:"<<volume<<endl;
	
	volume=box2.length*box2.breadth*box2.height;
	cout<<"Volume of box2:"<<volume<<endl;
	
	return 0;
	}