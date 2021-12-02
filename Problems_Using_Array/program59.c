#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
	int i = 0,iMin = Arr[0],iMax = Arr[0];
	for(i = 0; i < iSize; i++)
	{
		if(Arr[i] > iMax)
		{
			iMax = Arr[i];
		}
		if(Arr[i] < iMin)
		{
			iMin = Arr[i];
		}
	}
	 iMax - iMin;
	
	return iMax - iMin;
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

    iRet = Difference(ptr,iLength);

	printf("Difference is:%d\n",iRet);
	
	free(ptr);
	
	return 0;
}