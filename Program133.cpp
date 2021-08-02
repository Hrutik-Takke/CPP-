
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : (Accept, WordCount)
//  Input : 
//  Output : Integer
//  Description : Accept a string from user and  return the word count.
//  Date : 2/08/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////#include<iostream>
using namespace std;
//Input : _ _Abc_ _ _ p15_ _ _&_ _ AB_ _
// Output : 4

class StringX
{
 public:
    char str[30];
    void Accept()
    {
        cout<<"Enter String\n";
        scanf("%[^'\n']s",str);
    }
    int WordCount()
    {
        int iCnt = 0;
        char *ptr = str;
        
        while(*ptr != '\0')
        {
            if(*ptr == ' ')
            {
                while((*ptr == ' ') && (*ptr != '\0'))
                { ptr++; }
            }
            else
            {
                iCnt++;
                while((*ptr != ' ') && (*ptr != '\0'))
                {  ptr++; }
            }
        }
        return iCnt;
    }
};
int main()
{
    int ret = 0;
    StringX obj;
    obj.Accept();
    ret = obj.WordCount();
    cout<<"Word count is : "<<ret<<"\n";
    return 0;
}

//-------- Method 2 ------------
/*
class StringX
{
  public:
    char str[50];
    int i,j;

    void Accept()
    {
        cout<<"Enter a string ";
        scanf("%[^'\n']s",str);
    }
    int Display()
    {
        int iCnt = 0; i = 0, j = 1;
        str[i] = ' ';
        while(str[j] != '\0')
        {
            if(str[i] == 32 && ((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z') ||
               (str[j] >= 33 && str[j] <= 38) || (str[j] >= 48 && str[j] <= 57)))
            {
                iCnt++;
                cout<<str[j]<<endl;
            }
            i++;
            j++;
        }
        return iCnt;
    }
};
int main()
{
    int iRet = 0;
    StringX obj;
    obj.Accept();
    iRet = obj.Display();
    cout<<"Count of Words is "<<iRet;
    return 0;
}
*/









