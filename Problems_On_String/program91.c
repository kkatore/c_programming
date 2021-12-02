//Accept string from user and reverse string 
#include<stdio.h>

void StrrevX(char *start)
{
	char *end = start;
	char temp;
	while(*end != '\0')
	{
		end++;
	}
	end--;
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
}
int main()
{
	char Arr[30];
		
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	StrrevX(Arr);// strrevx(100)
	
	printf("Reverse string : %s\n",Arr);
	
	return 0;
}