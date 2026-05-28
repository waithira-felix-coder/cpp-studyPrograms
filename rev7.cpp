#include<iostream>
using namespace std;
class Felix
{
	public:
		Felix(int a,int b)
		{
		cout<<"Value called."<<endl;	
		}
	double Sum()
	{
		return a+b;
		}	
		int add(Felix felix)
		{
			return this->Sum()>felix.Sum();
		}
		private:
			int a;
			int b;
};

int main()
{
	int a,b;
	Felix fel1(2,3);
	Felix fel2(4,6);

	cout<<fel1=:<<Felix.fel1<endl;

	cout<<fel2=:<<Felix.fel2<endl;
	return 0;
}