#include<stdio.h>

int SumEven(int);

int main()
{ 
 int iValue = 0;
 int iRet = 0;
 printf("Enter a number\n");
 scanf("%d",&iValue);
 
 iRet = SumEven(iValue);
 
 printf("Sum of Even Digits : %d\n",iRet);
	
 return 0;
}
int SumEven(int iNo)
{
 int iSum = 0;
 int iDigit = 0;	
 int iCnt = 0;
if(iNo < 0)
{
	iNo = -iNo;
}

while(iNo != 0)
{
 iDigit = iNo % 10;
 if((iDigit % 2) == 0)
{ 
 iSum = iSum + iDigit;
}
 iNo = iNo / 10;         
}
  return iSum;
}

	
