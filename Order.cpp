//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Order()
// Input : c
// Output : c   b   a                                                                                 
// Description : Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a.
// Date : 12/10/2021
// Author : Hsrutik Takke
//
///////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Order
{
    public:
    void OrderChar(char ch)
    {
        int i=0;
        if((ch>='a')&&(ch<='z'))
        {
            for(i=ch;i>='a';i--)
            {
                printf("%c\t",i);
            }
        }

        else if((ch>='A')&&(ch<='Z'))
        {
            for(i=ch;i<='Z';i++)
            {
                printf("%c\t",i);
            }
        }
        else
        {
            cout<<"Invalid..!";
        }
    }
};

int main()
{
    char ch;

    cout<<"Enter a Character";
    cin>>ch;

    Order obj;
    obj.OrderChar(ch);
    return 0;
}