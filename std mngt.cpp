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
	float average;
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
	if(average>=70)
	{
		cout<<"\nYour grade=A"<<grade;
		cout<<"\nYou qualify for next semester";
	}
	else if(average>=40&&average<=69)
	{
		cout<<"\nYour grade is=B"<<grade;
		cout<<"\nYou qualify for the next semester";
	}
	else
	{
		cout<<"\nYour grade is F"<<grade;
		cout<<"\nYou do not qualify for next semester!!";
	}
	return 0;
	}
	