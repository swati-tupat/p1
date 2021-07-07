#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LEN (128)
int main(int argc, char** argv)
{
    int fd,nbytes;
    fd=open("input.txt",O_WRONLY|O_CREAT,0666);
    if(fd<0)
    {
        perror("open");
        exit(1);
    }
    char str[]="LTTS";
    int len=strlen(str);
    nbytes = write(fd,str,len);
    if(nbytes<0)
    {
        perror("write");
        exit(2);
    }
    printf("\n contents are written successfully ,nbytes=%d\n",nbytes);
    close(fd);
    return 0;
}