#include <iostream>
using namespace std;
int main ()
{
int  var; 
 int  *a;
 int  **b;
var = 3000;
// take the address of var
 a = &var;
// take the address of ptr using address of operator &
b = &a;
// take the value using pptr
cout << "Value of var :" << var << endl;
cout << "Value available at *a:" << *a << endl;
cout << "Value available at **b :" << **b << endl;
return 0;
}
