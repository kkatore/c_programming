//Accept string from user and reverse string inplace
#include<stdio.h>

void swap(char *p,char *q)
{
	char temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	char ch1,ch2;
	
	printf("Enter character\n");
	scanf("%c",&ch1);
	printf("Enter character\n");
	scanf(" %c",&ch2);
	printf("before swapping character are %c%c\n",ch1,ch2);
	swap(&ch1,&ch2);
	printf("After swapping character are %c%c\n",ch1,ch2);
	return 0;
}