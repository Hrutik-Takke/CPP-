
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FileX
//  Input : string
//  Output : 
//  Description : Accept a file name from user and open that file in write mode if that file not exist then create that file.
//  Date : 03/08/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>
#include<iostream>
using namespace std;

class FileX
{
public:
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_WRONLY|O_CREAT);
        if(fd == -1)
        {   cout<<"Unable to open file\n";  }
         else
         {
            cout<<"File SuccessFully Opened..\n";
         }
    }
    ~FileX()
    {
        close(fd);
    }
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    return 0;
}
