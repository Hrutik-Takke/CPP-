 
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : (Accept, pattern)
//  Input : 
//  Output : 
//  Description :  Accept a word from user and display the pattern.
//  Date : 02/08/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
// Input : Hello
/*
H
H  e
H  e   l
H  e   l   l
H  e   l   l   o
*/
class StringX
{
public:
    char str[30];
    void Accept()
    {
        cout<<"Enter String\n";
        scanf("%[^'\n']s",str);
    }
    void Pattern()
    {
        char *ptr=str;
        char *s = str;
        int iCnt1 = 0, iCnt2 = 0;
        while(*ptr != '\0')
        {
            while(iCnt2 <= iCnt1)
            {
                cout<<*s<<"\t";
                s++;
                iCnt2++;
            }
            iCnt2 = 0;
            s = str;
            ptr++;
            iCnt1++;
            cout<<"\n";
        }
    }
};
int main()
{
    StringX obj;
    obj.Accept();
    obj.Pattern();
    return 0;
}


/*
//----- My Code ------
class stringX
{
  public:
    char str[30];
    
    void Accept()
    {
        cout<<"Enter a string ";
        scanf("%[^'\n']s",str);
    }
    void Display()
    {
        char *ptr = str;
        char *s = str;
        int iCnt1 = 0,iCnt2 = 0;
        while(*ptr != '\0')
        {
            while(iCnt1 <= iCnt2)
            {
                cout<<*s<<"\t";
                s++;
                iCnt1++;
            }
            s = str;
            ptr++;
            iCnt1 = 0;
            iCnt2++;
            cout<<"\n";
        }
    }
};
int main()
{
    stringX obj;
    obj.Accept();
    obj.Display();
    return 0;
}*/