////////////////////////////////////////////////
//
//  Function Name : main
//  Input : 5
//  Output : 
//          1
//          0  1
//          1  0  1
//          0  1  0  1
//          1  0  1  0  1
//  Description: Binary Pattern
//  Date: 29/08/2021
//  Author: Hritik Takke
//
/////////////////////////////////////////////

#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the value ";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=i;j++)
       {
           if((i+j)%2==0)
           {
               cout<<" 1 ";
           }
           else
           {
               cout<<" 0 ";
           }
       }
       cout<<"\n";
   }
}