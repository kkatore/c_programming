#include<stdio.h>


int main()
{
	char Arr[50] = "Marvellous";
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);
	printf("Your Entered name is:%s",Arr);
	return 0;
}