#include<stdio.h>

void Display(char *str)
{
	int iScount = 0, iCcount = 0;
	
	while(*str != '\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCcount++;
		}
		if((*str>='a')&&(*str<='z'))
		{
			iScount++;
		}
		str++;
	}
	printf("Small letter:%d\n",iScount);
	printf("Capital letter:%d\n",iCcount);
}

int main()
{
	char Arr[20];
	
	
	printf("Enter String\n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}