
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FileX
//  Input : string
//  Output : 
//  Description : Accept a file name from user and open that file in read mode.
//  Date : 03/08/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<io.h>     // Nay include kele tari hoto run. 
#include<iostream>
using namespace std;

class FileX
{
 public:
    int fd;   //(file discripter)  unique number
    
    FileX(char Name[])
    {
        fd = open(Name,O_RDONLY);
        if(fd == -1)
        {   cout<<"Unable to open file\n";   }
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

 //   O_RDONLY ---> file read kar nya sathi.(macro)
 //   O_WRONLY ---> File madhi write kar nya sathi.
 //   O_RDWRONLY  ---> file read and write sathi.
 