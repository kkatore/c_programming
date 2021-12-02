/*size of file*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;
	char fname[20];
	
	
	printf("Enter file name\n");
	scanf("%s",fname);
	
	fd= open(fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1;
	}
	iRet = lseek(fd,0,2);
	
	printf("Size is:%d\n",iRet);
	
	close(fd);
		
	return 0;
	
}	