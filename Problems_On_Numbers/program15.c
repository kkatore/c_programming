#include<stdio.h>
#include<conio.h>

void DisplayFactors(int);

int main()
{
	int iValue = 0;
	
	printf("Enter Number\n");
	scanf("%d", &iValue);
	
	DisplayFactors(iValue);
	
	getch();
	return 0;
}
void DisplayFactors(int iNo)
{
	int iCnt = 0;
	for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
	}
}

	
