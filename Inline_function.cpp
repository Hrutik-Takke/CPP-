/////////////////////////////////////////////////////
//  
//  Function Name : Cube
//  Input : 3
//  Output : cube is 27
//  Description : Find the cube using Inline Function.
//  Date : 29/08/2021
//  Author : Hritik Takke
// 
////////////////////////////////////////////////////

#include<iostream>
using namespace std;

inline Cube(int x)
{
  return x*x*x ;
}
int main()
{
  int no;
  cout<<"enter a no ";
  cin>>no;
  cout<<"cube is "<<Cube(no);
}