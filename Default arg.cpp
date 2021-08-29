/////////////////////////////////////////////////////
//
//  Function : add (int x,int y,int z=10);
//  Input : 10 20
//  Output : addition is 40
//  Description : Addition using default argument.
//  Date : 29/08/2021
//  Author : Hritik Takke
//
/////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int add (int x,int y,int z=10)
{
  return(x+y+z);
}
int main()
{
 int a,b,ans;
 cout<<"enter a value of A ";
 cin>>a;
 cout<<"enter a value of B ";
 cin>>b;

 ans= add (a,b);
 cout<<"addition is "<<ans;
}