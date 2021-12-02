#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iRet = 0;
	char Fname[30];
	char Buffer[1024];  //Mug 1024--1kb
	
	printf("Enter File name\n");
	
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);//O_RDWR---micro or typedef
	
	if(fd == -1)
	{
		printf("unable to open file\n");
		return -1;                               // return to OS
	}
	else
	{
		printf("File Succesfully open with FD:%d\n",fd);
	                                
	}
	printf("Data from file:\n");
	
	while((iRet=read(fd,Buffer,sizeof(Buffer)))!= 0)
	{
		write(1,Buffer,iRet);
	}
	
	
	close(fd);
	
	return 0;
}