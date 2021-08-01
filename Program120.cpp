
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Class (Accept, Addition, Substraction)
//  Input : ---
//  Output : Integer
//  Description :  Accept two number from user and perform the operations on that.
//  Date : 1/08/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Arithematic
{
 public:                         // Access specifier
    int iNo1,iNo2;               // Charcteristics
    void Accept()                // Behaviour
    {
        cout<<"Enter first number\n";
        cin>>iNo1;
        cout<<"Enter second number\n";
        cin>>iNo2;
    }
    int Addition()              // Behaviour
    {
        int iResult = 0;
        iResult = iNo1 + iNo2;
        return iResult;
    }
    int Substraction()      // Behaviour
    {
        int iResult = 0;
        iResult = iNo1 - iNo2;
        return iResult;
    }
};
int main()
{
    int iRet = 0;
    Arithematic obj;        // Object Creation

    obj.Accept();
    iRet = obj.Addition();
    cout<<"Additon is :"<<iRet<<"\n";
    iRet = obj.Substraction();
    cout<<"Substraction is :"<<iRet<<"\n";
    return 0;
}
 





