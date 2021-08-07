
/////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : Max
//  Input: ---- , ----
//  Output: ----
//  Description : Accept two numbers from user and return the addition using (Generic Function).
//  Date: 07/08/2021
//  Author: Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>     // template header
T Max(T iNo1, T iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}
int main()
{
    float iValue1 , iValue2, iRet ;
    
    cout<<"Enter first value\n";
    cin>>iValue1;
    
    cout<<"Enter second value\n";
    cin>>iValue2;
    iRet = Max(iValue1, iValue2);
    cout<<"Maximum is : "<<iRet<<"\n";
    return 0;
}
