#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fdsrc = 0,fddest= 0 ,iRet = 0;
	char Fname1[30];
	char Fname2[30];
	char Buffer[1024];  //Mug 1024--1kb
	
	printf("Enter source File name\n");	
	scanf("%s",Fname1);
	
	fdsrc = open(Fname1,O_RDONLY);//O_RDWR---micro or typedef
	
	if(fdsrc == -1)
	{
		printf("unable to open file\n");
		return -1;                               // return to OS
	}
	else
	{
		printf("File Succesfully open with FD:%d\n",fdsrc);
	                                
	}
	printf("Enter destination File name\n");
	scanf("%s",Fname2);
	
	fddest = creat(Fname2,0777);
			
	while((iRet=read(fdsrc,Buffer,sizeof(Buffer)))!= 0)
	{
		write(fddest,Buffer,iRet);
	}
	
	
	close(fdsrc);
	close(fddest);
	
	return 0;
}