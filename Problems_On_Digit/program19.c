#include<stdio.h>

int CountDigits(int);

int main()
{ 
 int iValue = 0;
 int iRet = 0;
 printf("Enter a number\n");
 scanf("%d",&iValue);
 
 iRet = CountDigits(iValue);
 
 printf("Number of Digits : %d\n",iRet);
	
 return 0;
}
int CountDigits(int iNo)
{
int iDigit = 0;	
int iCnt = 0;
 if(iNo == 0)
{
	return 1;
}
if(iNo < 0)
{
	iNo = -iNo;
}

while(iNo != 0)
{
 iDigit = iNo % 10; 
 iCnt++;
 iNo = iNo / 10;         
}
  return iCnt;
}

	
