#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
	int iCnt = 0, i = 0;
	for(i = 0; i < iSize; i++)
	{
		if(Arr[i] % 2 == 0)
		{
			iCnt++;
		}
	}
	return iCnt;
}


int main()
{
	int iLength = 0, iCnt = 0, iRet = 0;
	int *ptr = NULL;
	

    printf("Enter number of Elements\n");
    scanf("%d",&iLength);
	
	ptr = (int*)malloc(sizeof(int)*iLength);
	
	printf("Enter element\n");
	
	for(iCnt = 0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

    iRet = CountEven(ptr,iLength);

	printf("Even Numbers are:%d\n",iRet);
	
	free(ptr);
	
	return 0;
}