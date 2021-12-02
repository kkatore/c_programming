#include<stdio.h>
#include<conio.h>

void Display();        // Declairation

int main()
{
	Display();        //function call
	getch();
	return 0;
}

void Display()        //Defination
{
	int i =0;
	
	for(i = 1;i <= 5;i++)
	{
	printf("#\n");
	}
}