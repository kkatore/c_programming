#include<stdio.h>

int CountFreq(char *str,char ch)
{
	int iCnt = 0;
	if(str == NULL)
	{
		return -1;
	}
	while(*str != 0)
	{
		if(*str == ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int main()
{
	char Arr[30];
	int iRet = 0;
	char cValue ='\0';
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter character\n");
	scanf(" %c",&cValue);            //------IMP
	
	iRet = CountFreq(Arr,cValue);
	
	printf("Frequency of character : %d\n",iRet);
	
	return 0;
}