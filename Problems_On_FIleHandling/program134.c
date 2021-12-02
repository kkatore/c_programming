/*count number of a in file*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0,iCnt = 0, iRet = 0,i=0;
	char fname[20];
	char Buffer[10];
	
	printf("Enter file name\n");
	scanf("%s",fname);
	
	fd= open(fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1;
	}
	while((iRet =read(fd,Buffer,10))!=0)
	{
		for(i = 0;i< iRet;i++)
		{
			if(Buffer[i]=='a')
			{
				iCnt++;
			}
		}
	}
	printf("Total number of a are:%d\n",iCnt);
	
	close(fd);
		
	return 0;
	
}	