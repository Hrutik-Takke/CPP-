
////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : FileX, WriteData
//  Input : string
//  Output :  
//  Description : Accept a file name from user and write data into file.
//  Date : 03/08/2021
//  Author : Hrutik Takke
//
///////////////////////////////////////////////////////////////////////////////////////

#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
using namespace std;
//Take a String  And write at the end of file.
class FileX
{
public:
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,O_WRONLY);
        if(fd == -1)
        {
            cout<<"Unable to create file\n";
        }
        else
        {cout<<"File succesfully created..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void WriteData()
    {
       char str[]="Pune";
       write(fd,str,4);
    }
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    
    obj.WriteData();
    return 0;
} 