#include<stdio.h>

char SmalltoCapital(char c)
{
	if((c>='a')&&(c<='z'))
	{
		return c - 32;
	}
	
}

int main()
{
	char ch = '\0';
	char cRet = '\0';
	
	printf("Enter Character\n");
	scanf("%c",&ch);
	
	cRet = SmalltoCapital(ch);
	printf("Capital letter is:%c",cRet);
	return 0;
}