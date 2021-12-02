#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Fname[30];
	
	printf("Enter File name\n");
	
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);//O_RDWR---micro or typedef
	
	if(fd == -1)
	{
		printf("unable to open file\n");
	}
	else
	{
		printf("File Succesfully open with FD:%d\n",fd);
	}
	return 0;
}