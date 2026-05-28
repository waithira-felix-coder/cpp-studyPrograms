#include<iostream>
using namespace std;
class box
{
	double width;
	public:
	friend printw(box box1);
	void setwidth(int wid);
};
void box::setwidth(int wid)
{
	width=wid;
}
void setwidth(box box1)
{
	cout<<"Width of box:"<<endl;
}
int main()
{
	box box1;
	box1.setwidth(12);
    cout<<"Width of box:"<<setwidth;
	return 0;
}