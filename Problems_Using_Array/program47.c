#include <stdio.h>

int main()
{	
  int Arr[5];
  int iSum = 0;
  int iCnt = 0;
  
  printf("Enter Numbers\n");
  
  for(iCnt = 0; iCnt < 5; iCnt++)
  {
    scanf("%d",&Arr[iCnt]);
  }
  for(iCnt = 0; iCnt < 5; iCnt++)
  {
    iSum = iSum + Arr[iCnt];
  }
  
  printf("Addition is:%d",iSum);  
	
  return 0;
}