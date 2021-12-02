#include <stdio.h>

// int Addition (int *Brr)
int Addition(int Brr[])
{
  int iSum = 0;
  int iCnt = 0;
  for(iCnt = 0; iCnt < 5; iCnt++)
  {
    iSum = iSum + Brr[iCnt];
  }
  return iSum;
}

int main()
{	
  int Arr[5];
  int iRet = 0;
  int iCnt = 0;
  
  printf("Enter Numbers\n");
  
  for(iCnt = 0; iCnt < 5; iCnt++)
  {
    scanf("%d",&Arr[iCnt]);
  }
  
  iRet = Addition(Arr);
  
  printf("Addition is:%d",iRet);  
	
  return 0;
}