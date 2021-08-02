
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : (Accept, pattern)
//  Input : 
//  Output : 
//  Description : Accept a string from user and in place word reverse without using any other memory.
//  Date : 02/08/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
//Input : _ _Abc_ _ _ p15_ _ _&_ _ AB_ _
// Output : _ _cbA_ _ _ 51p_ _ _& _ _BA_ _
// In place word reverse without using any other memory
 
class StringX
{
public:
    char str[30];
    void Accept()
    {
        cout<<"Enter String\n";
        scanf("%[^'\n']s",str);
    }
    void WordReverse()
    { 
       char Temp = '\0';
       char *End = str;
       char *start = str;
       char *temp = str;
       char *Cnt = str;
       start++;
       while(*Cnt != '\0')
       { 
          if(*start == ' ')
          {
            while(*start == ' ' && *start != '\0')
            {
               start++;
               End++;
            }
          }
          else
           { 
              while(*start != ' ' && *start != '\0')   // word cha end la janya sathi.
              {
                start++;
              }
              start--;
              temp = start;
              while(start > End)
              {
                 Temp = *End;
                 *End = *start;
                 *start = Temp;
                 End++;
                 start--;
              }
              start = temp;
           }
           Cnt++;
       }
    }
};
int main()
{
    StringX obj;
    obj.Accept();
    obj.WordReverse();
    cout<<obj.str;
    return 0;
}