#include<stdio.h>
#include<stdlib.h>

int SumOdd(int Arr[], int iSize)
{
	int i = 0,iSum = 0;
	for(i = 0; i < iSize; i++)
	{
		if(Arr[i] % 2 != 0)
		{
			iSum = iSum + Arr[i];
		}
	}
	return iSum;
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

    iRet = SumOdd(ptr,iLength);

	printf("Addition is:%d\n",iRet);
	
	free(ptr);
	
	return 0;
}