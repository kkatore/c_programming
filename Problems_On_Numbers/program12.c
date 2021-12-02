//Factorial 

#include<stdio.h>
#include<conio.h>

typedef unsigned long UINT;

UINT Factorial(int);        

int main()
{
	int iValue = 0;
	UINT iRet = 0;            //datatype modifier
	
	printf("Enter Number\n");
	scanf("%d", &iValue);
	
	iRet = Factorial(iValue);
   	
	printf("Factorial is:%lu", iRet);
	
	getch();
	
	return 0;
}

UINT Factorial(int iNo)        
{
	UINT iFact = 1;
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iFact = iFact * iCnt;
	}

	return iFact;
}