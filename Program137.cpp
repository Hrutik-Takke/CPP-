
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FileX
//  Input : string
//  Output :  
//  Description :  Accept a file name from user and create that file. (Method 2).
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
        fd = creat(Name,0777);
        if(fd == -1)
        {   cout<<"Unable to Create file\n";}
         else
         {
            cout<<"File SuccessFully Created..\n";
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