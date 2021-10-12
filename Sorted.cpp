
/////////////////////////////////////////////////////////////////////////////////
//  
//  Function Name : Sorted()
//  Input: int[], int
//  Output: bool
//  Description : Accept Array From User and Check it is sorted or not.
//  Date: 12/10/2021
//  Author: Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////


#include<bits/stdc++.h>
using namespace std;

bool Sorted(int arr[],int iNo)
{

    if(iNo==1)
    {
        cout<<"Array contains more than 2 elements";
    }
    
    int i=0;
    for(i=0;i<iNo;i++)
    {
        if(arr[i] > arr[i+1])
        {
            break;
        }
    }
  
    if(i==(iNo-1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n=0,s=0;
    int *arr= new int;
    bool bRet;

    cout<<"Enter Number of Elements you want:"<<"\n";
    cin>>n;
    
    cout<<"Enter Elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bRet=Sorted(arr,n);

    if(bRet==true)
    {
        cout<<"Given Array is Sorted";
    }
    else
    {
        cout<<"Given Array is Not Sorted";
    }
}