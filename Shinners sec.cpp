#include<iostream>
using namespace std;
class SHINNERS
{
	private:
		int id;
		public:
			void get()
			{
			int id;
			cout<<"Enter your RoomID to scan:";
			cin>>id;
	   if(id<=20)
		{
		cout<<"Welcome to Shinners Court.  The home of your choice!!";	
			}	
			else
			{
				cout<<"You are not a tenant here!!";
				cout<<"\nContact the caretaker via:0723456790";
			}
		}
};
int main()
{
	SHINNERS security;
	security.get();
	return 0;
}