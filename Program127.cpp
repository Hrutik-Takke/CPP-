
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : (Accept, Addition, Display)
//  Input : ---
//  Output : Integer
//  Description :  Accept two number from user and perform the operations on that using (OOPS).
//  Date : 02/08/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class Numbers
{
 public:
    int *Arr;           // 8 Byte
    int iSize;          // 4 Byte
    Numbers(int No)
    {
        cout<<"Inside Constructor\n";
        iSize = No;
        Arr = new int[iSize];          // Heap section
    }
    void Accept()
    {
        int i = 0;
        cout<<"Enter the values\n";
        for(i = 0; i < iSize; i++)
        {
            cin>>Arr[i];
        }
    }
    void Display()
    {
        int i = 0;
        cout<<"Values are\n";
        for(i = 0; i < iSize; i++)
        {
            cout<<Arr[i]<<"\n";
        }
    }
    int Addition()
    {
        int i = 0, iSum = 0;
        for(i = 0;i<iSize; i++)
        {
            iSum = iSum + Arr[i];
        }
        return iSum;
    }
    ~Numbers()
    {
        cout<<"Inside Destructor\n";
        delete []Arr;
    }
};

int main()
{
    int iNo = 0, iRet = 0;
    cout<<"Enter number of elements\n";
    cin>>iNo;
    
    Numbers obj(iNo);            // Object create kela
    obj.Accept();
    obj.Display();
    iRet = obj.Addition();
    cout<<"Addition is : "<<iRet<<"\n";
    
    return 0;
}