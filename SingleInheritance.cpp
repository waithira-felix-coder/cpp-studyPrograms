#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
		public:
			void set_A()
			{
				cout<<"Enter value of A=";
				cin>>a;
			}
};
class B:public A
{
	int b,p;
	public:
		void set_B()
		{
			set_A();
			cout<<"\nEnter the value of B=";
			cin>>b;
		}
		void disp_B()
		{
			disp_B();
			cout<<"Value of B="<<b;
		}
		void cal_product()
		{
			p=a*b;
			cout<<p;
		}
};
int main()
{
	B bb;
	 bb.set_B();
	 bb.disp_B();
	 bb.cal_product();
	 return 0;
}