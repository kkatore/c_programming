#include<stdio.h>

void Display(char *Brr)
{

	while(*Brr != '\0')
	{
	printf("%c\n",*Brr);
	Brr++;
	}
	
	
}
int main()
{
	char Arr[50] = "Marvellous";
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);
	Display(Arr);
	
	return 0;
}