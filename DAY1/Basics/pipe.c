#include<unistd.h>

int main()
{
	int ret;
	int nbytes = 0;
	int fds[2];
	ret=pipe(fds);	//fds[0]-RD, fds[1]-WR
	if(ret<0)
	{
		perror("pipe code");
		exit(1);
	}
    
	char str[]="Hello demo code for pipe..";
	int len=strlen(str);
	nbytes=write(fds[1],str,len);

    char buf[128];
	nbytes=read(fds[0],buf,128);
    
    write(1,buf,nbytes);

    close(fds[0]);	//done with writing
	close(fds[1]);	//done with writing
    
    return 0;
}
   
