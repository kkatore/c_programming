#include<stdio.h>

int Display(int);

int main()
{ 
 int iValue = 0;
 
 printf("Enter a number\n");
 scanf("%d",&iValue);
 
 Display(iValue);
	
 return 0;
}
int Display(int iNo)
{
int iDigit = 0;	

while(iNo != 0)
{
 iDigit = iNo % 10;      
 printf("%d\n",iDigit);    
 iNo = iNo / 10;         
}

}

	
