#include<stdio.h>

int RevDigit(int);

int main()
{ 
 int iValue = 0;
 int iRet = 0;
 printf("Enter a number\n");
 scanf("%d",&iValue);
 
 iRet = RevDigit(iValue);
 
 printf("Reverse Digits : %d\n",iRet);
	
 return 0;
}
 int RevDigit(int iNo)
{
 int iRev = 0;
 int iDigit = 0;	
 int iCnt = 0;
if(iNo < 0)
{
	iNo = -iNo;
}

while(iNo != 0)
{
 iDigit = iNo % 10;
 iRev = (iRev * 10)+ iDigit;
 iNo = iNo / 10;         
}
  return iRev;
}

	
