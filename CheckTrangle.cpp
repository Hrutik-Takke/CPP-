 
//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : main()
// Input : Enter the three sides of triangle (10,20,20)
// Output : Triangle is isosceles.                                                                                
// Description : Check type of triangle (Equilateral/ isosceles /scalene)
// Date : 16/10/2021
// Author : Hrutik Takke
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
int main()
{
  int sidea,sideb,sidec;
  cout<<"Enter the three sides of triangle ";
  cin>>sidea>>sideb>>sidec;
  if(sidea==sideb && sideb==sidea)
  {
	cout<<"\n Triangle is Equaliteral ";
  }
  else if(sidea==sideb || sideb==sidec || sidea==sidec)
  {
	cout<<"\n Triangle is isosceles ";
  }
  else 
  {
	cout<<"\n Triangle is scalene ";
  }
}