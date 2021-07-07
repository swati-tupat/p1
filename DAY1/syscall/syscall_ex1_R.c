#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LEN (128)
int main(int argc, char** argv)
{
    int fd,nbytes;
    fd=open("input.txt",O_RDONLY);
    printf("Ret value of open = %d\n",fd);
    if(fd<0)
    {
        perror("open");
        exit(3);
    }
    char buf[MAX_LEN]={'\0'};
    nbytes = read(fd,buf,MAX_LEN);
    if(nbytes<0)
    {
        perror("reading file");
        exit(2);
    }
    printf("\n No of Letters in file =%d,buf=%s",nbytes,buf);
    write(STDOUT_FILENO,buf,nbytes);
    close(fd);
    return 0;
}