
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : class NumberX (Accept, pattern)
//  Input : 
//  Output :  
//  Description : Accept a number from user and display the pattern in reverse order.
//  Date : 2/08/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

// Input : 1234
/*
4   3   2   1
4   3   2
4   3
4
 */
class NumberX
{
public:
    int iNo;
    void Accept()
    {
        cout<<"Enter Number\n";
        cin>>iNo;
    }
    void Pattern()
    {
        int iValue = iNo,iCnt = 0, i = 0, j = 0;
        while(iValue > 0)
        {
            iCnt++;
            iValue = iValue / 10;
        }
        iValue = iNo;
        for(i = iCnt ; i > 0; i--)
        {
            for(j = 0; j< i; j++)
            {
                cout<<iValue % 10<<"\t";
                iValue = iValue / 10;
            }
            cout<<"\n";
            iValue = iNo;
        }
        
    }
};
int main()
{
    NumberX obj;
    obj.Accept();
    obj.Pattern();
    return 0;
}

// ----- Method 2 -------
/*
class Pattern
{
  public:
      int iNo;

      void Accept()
      {
        cout<<"Enter a number ";
        cin>>iNo;
      }
      void Display()
      {
        int iValue = iNo,iValue2 = iNo, iTemp = iNo;
         
        while(iTemp != 0)
        {
            while(iValue2 != 0)
            {
               cout<<iValue % 10<<"  ";
               iValue = iValue /10;
               iValue2 = iValue2 /10;
            }
            iValue = iNo;
            iTemp = iTemp/ 10;
            iValue2 = iTemp;
            cout<<"\n";
        }
      }
};
int main()
{
    Pattern obj;
    obj.Accept();
    obj.Display();
    return 0;
}
*/
