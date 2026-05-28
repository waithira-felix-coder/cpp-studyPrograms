#include<iostream>
using namespace std;
class line
{
	public:
		void setl(double len);
		double getl(void);
		line();
		private:
			double length;
};
line::line()
{
	cout<<"Object created";
}
void line::setl(double len)
{
	length=len;
}
double line::getl()
{
	return length;
}
int main()
{
	line linel;
	linel.setl(6.0);
	cout<<"\nLength of line:";
    linel.getl();
	return 0;
}