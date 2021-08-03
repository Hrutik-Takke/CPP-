
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FileX, ReadData
//  Input : string
//  Output :  
//  Description :  Accept a file name from user and open that file and read data of that file(using write system call).
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
        fd = open(Name,O_RDONLY);
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

    void ReadData()
    {
        char Arr[20];
        read(fd,Arr,10);
        // printf("%s",Arr);
        write(1,Arr,10);
    }
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    obj.ReadData();
    return 0;
}
 