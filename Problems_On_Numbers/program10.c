#include<stdio.h>
#include<conio.h>

void Display(int);        // Declairation

int main()
{
	int iValue=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	Display(iValue);   	//function call
	
	getch();
	
	return 0;
}

void Display(int iNo)        //Defination
{
	int i = 0;
	
	for(i = iNo; i >= 1; i--)
	{
	printf("%d\n",i);
	}
}