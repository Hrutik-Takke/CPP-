///////////////////////////////////////////////////////////////
//
//  Input : Enter the no : 5
//  Output : Factorial is 120
//  Description : Use of recursion to display factorial of number.
//  Date : 29/08/2021
//  Author : Hritik Takke
// 
///////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

long fact(int);
int main()
{
  int no,ans;
  cout<<"enter a no";
  cin>>no;
  ans=fact(no);
  cout<<"factorial of number is "<<ans;
}
long fact(int x)
{
  if(x==0)
  {
    return 1;
  }
  return(x*fact(x-1));
}