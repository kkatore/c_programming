# include<stdio.h>
#include<stdbool.h>

int SumFactor(int);
bool PerfectNumber(int);

int main()
{
	int iValue = 0; 
	bool bRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = PerfectNumber(iValue);
	
	if(iRet == true)
	{
		printf("Its a Perfect number");
	}
    if(iRet == false)
	{
		printf("Its not a Perfect number");
	}
	return 0;
}
bool PerfectNumber(int iNo)
{
	int iNumber = 0;
	if (iNumber < 0)
	{
		iNumber = - iNumber;
	}
	iNumber = SumFactor(iNo);
	if(iNumber == iNo)
	{
		return true;
	}
	else 
	{
		return false;
	}
}	

int SumFactor(int iInput)
{
	int iCnt = 0, iSum = 0;
	if(iInput < 0)
	{
		iInput = - iInput;
	}
    for(iCnt = 1; iCnt <= (iInput/2); iCnt++)
	{
		if(iInput % iCnt == 0 )
		{
			iSum = iSum + iCnt;
		}	
	}
	return iSum;
}
