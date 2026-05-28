#include<iostream>
using namespace std;
int main()
{
	char name[20];
	int age;
	char course[15];
	int mark1;
	int mark2;
	int total;
	int average;
	char grade;
	cout<<"What is your name?";
	cin>>name;
	cout<<"Enter your age:";
	cin>>age;
	cout<<"Enter your course:";
	cin>>course;
	cout<<"Enter mark 1<<endl<<mark 2";
	cin>>mark1;
	cin>>mark2;
	total=mark1+mark2;
	average=total/2;
	cout<<"Your name is:"<<name;
	cout<<"\nYour age is:"<<age;
	cout<<"\ncourse is:"<<course;
	cout<<"\nTotal marks is:"<<total;
	cout<<"\nAverage mark is:"<<average;
	cout<<"\nEnter the average(0-100)";
	cin>>average;
	//Determine student grade using switch-case(based on average range)
	switch(average)
	{
	case 70-99:grade='A';
	break;
	case 60-69:grade='B';
	break;
	case 50-60:grade='C';
	break;
	case 30-50:grade='D';
	break;	
	}
	//Display the grade
	cout<<"\nStudent grade:"<<grade<<endl;
	return 0;
}