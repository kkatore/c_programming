#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iRet = 0;
	char Fname[30];
	char Data[7];
	
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
	
	iRet = read(fd,Data,6);
	
	printf("%d bytes succesfully read from the file\n",iRet);
	
	printf("Data from file is:");
	
	write(1,Data,iRet);
	
	close(fd);
	
	return 0;
}