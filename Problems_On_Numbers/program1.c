#include<stdio.h>
#include<conio.h>

void Display(int);        // Declairation

int main()
{
	int iValue=0;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	
	Display(iValue);   	//function call
	
	getch();
	
	return 0;
}

void Display(int iNo)        //Defination
{
	int i = 0;
	
	if(iNo == 0)            //filter
	{
		printf("Enter number is 0\n");
		
		return;
	}
	
	if(iNo < 0)
	{
		iNo = -iNo;  //Input updater
	}
	
	for(i = 1;i <= iNo; i++)
	{
	printf("%d\n",i);
	}
}