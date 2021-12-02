#include<stdio.h>
#include<stdlib.h>

int FirstAccurance(int Arr[], int iSize, int iNo)
{
	int i = 0, iNum = -1;
	
	for(i = 0; i < iSize; i++)
	{
		if(Arr[i] == iNo)
		{
			iNum = i;
				  
		}
	}
	return iNum;
}

int main()
{
	int iLength = 0, iCnt = 0, iRet = 0, iValue = 0;
	int *ptr = NULL;
	
	

    printf("Enter number of Elements\n");
    scanf("%d",&iLength);
	
	ptr = (int*)malloc(sizeof(int)*iLength);
	
	printf("Enter the element to search\n");
	scanf("%d",&iValue);
	
	printf("Enter element\n");
	
	for(iCnt = 0; iCnt<iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
    iRet = FirstAccurance(ptr,iLength,iValue);

	if(iRet == -1)
	{
		printf("There is no such Number\n");
	}
	else
	{
		printf("Index of that number\n:%d",iRet);
	}
	free(ptr);
	
	return 0;
}