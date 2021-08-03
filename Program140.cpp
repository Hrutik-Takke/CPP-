
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FileX, ReadData
//  Input : string
//  Output :  
//  Description :  Accept a file name and Number of Characters you Want to read, from user and open that file and read data of that file.
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
        {   cout<<"Unable to open file\n";}
         else
         {
            cout<<"File SuccessFully Opened..\n";
         }
    }
    ~FileX()
    {
        close(fd);
    }

    void ReadData(int isize)
    {
        char Arr[20]={'\0'};
        read(fd,Arr,isize);
        // printf("%s",Arr);
        write(1,Arr,10);      
        // write(1,Arr,isize);
    }
};
int main()
{
    int no;
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    cout<<"Enter Number of Characters you Want to read\n";
    cin>>no;

    obj.ReadData(no);
    return 0;
}
 