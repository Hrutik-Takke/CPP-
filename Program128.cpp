
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : (Accept, StrlenX)
//  Input : ---
//  Output : Integer
//  Description :  Accept a string from user and count the lenght of string (OOPS).
//  Date : 02/08/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class StringX
{
 public:
    char str[30];
    void Accept()
    {
        cout<<"Enter String\n";
        scanf("%[^'\n']s",str);
    }
    int StrlenX()
    {
        int iCnt = 0;
        char *ptr = str;
        while(*ptr != '\0')
        {
            ptr++;
            iCnt++;
        }
        return iCnt;
    }
};
int main()
{
    int ret = 0;
    StringX obj;
    obj.Accept();
    ret = obj.StrlenX();
    cout<<"String length is : "<<ret<<"\n";
    return 0;
}


 