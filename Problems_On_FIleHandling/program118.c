#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
	int fd = 0;
	fd = creat("Marvellous.txt",0777);
	if(fd == -1)
	{
		printf("unable to create\n");
	}
	else
	{
		printf("Succesfully created\n");
	}
	return 0;
}