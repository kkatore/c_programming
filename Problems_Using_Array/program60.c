#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Difference(int Arr[], int iSize)
{
	int i = 0;
	bool bAns = false;
	for(i = 0; i < iSize; i++)
	{
		if(Arr[i] == 11)
		{
		  bAns = true;
          break;		  
		}
	}
    return bAns;	
}


int main()
{
	int iLength = 0, iCnt = 0, iRet = 0;
	int *ptr = NULL;
	bool bRet = false;
	

    printf("Enter number of Elements\n");
    scanf("%d",&iLength);
	
	ptr = (int*)malloc(sizeof(int)*iLength);
	
	printf("Enter element\n");
	
	for(iCnt = 0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

    bRet = Difference(ptr,iLength);

	if(bRet == true)
	{
		printf("Number is there\n");
	}
	else
	{
		printf("Number is not there\n");
	}
	free(ptr);
	
	return 0;
}