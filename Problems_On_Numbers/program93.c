#include<stdio.h>


int main()
{
	int iValue = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	printf("decimal number is:%d\n",iValue);
	printf("octal number is:%o\n",iValue);
	printf("Hex number is:%x\n",iValue);
	
	return 0;
	
}