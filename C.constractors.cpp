#include<iostream>
using namespace std;
class student
{
   public:
   string name;
   student(string n)
   {
   	name=n;
		} 
		student(student &obj)
		{
			name=obj.name;
			}	
};
int main()
{
	student s1("Peter");
	student s2=s1;
	cout<<s2.name;
	return 0;
}