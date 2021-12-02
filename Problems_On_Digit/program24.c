#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int);

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter a number\n");
	scanf("%d",&iValue);
	
	bRet = CheckPallindrome(iValue);	
    if(bRet == true)
	{
		printf("Its a Pallindrome Number");
	}
   if(bRet == false)
	{
		printf("Its not a Pallindrome Number");
	}
	return 0;
}	

bool CheckPallindrome(int iNo)
{
	int iDigit = 0, iRev = 0, iTemp = iNo;
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = ( iRev * 10) + iDigit;
		iNo = iNo / 10;
	}

if(iTemp == iRev)
{
	return true;
}
else 
{
	return false;
}
}