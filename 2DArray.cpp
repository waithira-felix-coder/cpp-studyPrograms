/*
    File: 2DArray.cpp
    Topic: Two-dimensional array example that prints matrix values by row and column.
    This file is part of a first-year C++ exercise set.
    It demonstrates foundational programming concepts such as logic, loops, functions, classes, and object-oriented design.
*/
 #include <iostream>
using namespace std;

int main(){
   int arr[2][3] = {{11, 22, 33}, {44, 55, 66}};
   for(int i=0; i<2;i++){
      for(int j=0; j<3; j++){
        cout<<"arr["<<i<<"]["<<j<<"]: "<<arr[i][j]<<endl;
      }
   }
   return 0;
}

