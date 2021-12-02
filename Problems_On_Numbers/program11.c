//Addition like 1+2+3+4+5=15

#include<stdio.h>
#include<conio.h>

int Addition(int);        

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet = Addition(iValue);
   	
	printf("Addition is:%d",iRet);
	
	getch();
	
	return 0;
}

int Addition(int iNo)        
{
	int iSum = 0;
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iSum = iSum + iCnt;
	}
		return iSum;
}