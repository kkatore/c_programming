#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iRet = 0;
	char Fname[30];
	char Data[]="Marvellous Infosystems";
	
	printf("Enter File name\n");
	
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);//O_RDWR---micro or typedef
	
	if(fd == -1)
	{
		printf("unable to open file\n");
		return -1;                               // return to OS
	}
	else
	{
		printf("File Succesfully open with FD:%d\n",fd);
	                                
	}
	
	iRet = write(fd,Data,10);
	
	printf("%d bytes succesfully written in file\n",iRet);
	return 0;
}