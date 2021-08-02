
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : (Accept, pattern)
//  Input : 
//  Output : 
//  Description : Accept a word from user and display the pattern.
//  Date : 02/08/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
// Input : Hello
/*
 H  e   l   l   o
 H  e   l   l
 H  e   l
 H  e
 H
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
        char *ptr = str;  // str( 100 )
        char *s = str;    // str( 100 )
        int iCnt = 0;
        while(*ptr != '\0')
        {
            while(*(s+iCnt)!= '\0')  //   (*( 100+0 ))
            {
                cout<<*s<<"\t";
                s++;                // 101  102  103  104  105
            }
            s = str;     // s la reset kele 100 la.
            ptr++;
            iCnt++;
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



/*-------- My Code ---------
class pattern
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
        int i = 0, j = 0, End = 0;
        while(*ptr != '\0')         //  string chi length consider navti karay chi.
        {
           ptr++;
           End++;
        }
        
        for( i = 0; str[i] != '\0'; i++)
        {
            for( j = 0; j < End; j++)
            {
                cout<<str[j];
            }
            cout<<endl;
            End--;
        }
    }
};
int main()
{
	pattern obj;
	obj.Accept();
	obj.Display();
	return 0;
}
*/
