#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
	int i = 0,iMin =Arr[0];
	for(i = 0; i < iSize; i++)
	{
		if(Arr[i] < iMin)
		{
			iMin = Arr[i];
		}
	}
	
	return iMin;
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

    iRet = Minimum(ptr,iLength);

	printf("Minimum is:%d\n",iRet);
	
	free(ptr);
	
	return 0;
}