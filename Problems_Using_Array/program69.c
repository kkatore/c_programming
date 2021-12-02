#include<stdio.h>

void Display(char *Brr)
{
	printf("Your Entered name is:%s",Brr);
}
int main()
{
	char Arr[50] = "Marvellous";
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);
	Display(Arr);
	
	return 0;
}