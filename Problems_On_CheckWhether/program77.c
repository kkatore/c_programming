#include<stdio.h>
#include<stdbool.h>


bool CheckSmall(char c)
{
	if((c>='a')&&(c<='z'))
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	char ch = '\0';
	bool bRet = false;
	
	printf("Enter Character\n");
	scanf("%c",&ch);
	
	bRet = CheckSmall(ch);
	if(bRet == true)
	{
		printf("it is Small");
	}
	else
	{
		printf("it is not Small");
	}
	return 0;
}