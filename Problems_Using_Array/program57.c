#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
	int i = 0,iMax =Arr[0];
	for(i = 0; i < iSize; i++)
	{
		if(Arr[i] > iMax)
		{
			iMax = Arr[i];
		}
	}
	return iMax;
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

    iRet = Maximum(ptr,iLength);

	printf("Maximum is:%d\n",iRet);
	
	free(ptr);
	
	return 0;
}