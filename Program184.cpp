
/////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : Maximum
//  Input: 
//  Output: ( T )
//  Description : Accept two numbers from user and return the maximum number using (Generic Function).
//  Date: 07/08/2021
//  Author: Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

template <class T>
class Array
{
private:
    T * Arr;
    int iSize;
    
public:
    Array(int no)
    {
        iSize = no;
        Arr = new T[iSize];
    }
    ~Array()
    {
        delete []Arr;
    }
    void Accept()
    {
        cout<<"Enter the values\n";
        for(int i = 0; i <iSize; i++)
        {
            cin>>Arr[i];
        }
    }
    T Maximum()
    {
        T Max = Arr[0];
        for(int i = 0;i < iSize; i++)
        {
            if(Arr[i] > Max)
            {
                Max = Arr[i];
            }
        }
        return Max;
    }
};

int main()
{
    int iRet = 0,iNo = 0;

    cout<<"Enter the number of elements\n";
    cin>>iNo;
    // Array obj(iNo);                // Specific class
    Array <int>obj1(iNo);             // Generic class    -> Replace every T in class with int.
    
    obj1.Accept();
    iRet = obj1.Maximum();
    cout<<"Maximum is : "<<iRet<<"\n";
    
    double dRet = 0.0;
    cout<<"Enter the number of elements\n";
    cin>>iNo;
    Array <double>obj2(iNo);
    
    obj2.Accept();
    dRet = obj2.Maximum();
    cout<<"Maximum is : "<<dRet<<"\n";
    return 0;
}
