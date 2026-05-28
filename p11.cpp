#include<iostream>
using namespace std;
class FELIX
{
	private:
		string itemName;
		int quantity;
		float unitcost;
		public:
			void getInput(string name)
			{
				itemName=name;
				cout<<"Enter quantity of"<<itemName<<":";
				cin>>quantity;
				cout<<"Enter unit cost of"<<itemName<<":";
				cin>>unitcost;
			}
			void display()
			{
				float totalcost=quantity*unitcost;
				cout<<itemName<<"-Unitcost:sh"<<unitcost<<",Quantity:"<<quantity<<",=Total Cost:sh"<<totalcost<<endl;
			}
};
int main()
{
	FELIX bread,milk;
	bread.getInput("Bread");
	milk.getInput("Milk");
	cout<<"\n---Purchased Items---"<<endl;
	bread.display();
	milk.display();
	return 0;
}