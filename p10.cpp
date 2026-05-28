#include<iostream>
using namespace std;
class odd
{
	private:
		int x;
		public:
			void get()
			{
				cout<<"Enter an integer:";
				cin>>x;
				if(x%2==0)
				{
					cout<<x<<"is even.";
				}
				else
				{
					cout<<x<<"is odd.";
				}
			}
};
int main()
{
	odd obj;
	obj.get();
	return 0;
}