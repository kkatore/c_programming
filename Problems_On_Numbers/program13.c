#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
     
bool CheckEven(int);

int main()
{
	int iValue = 0;
	bool bRet = false;
	           
	printf("Enter Number\n");
	scanf("%d", &iValue);
	
	bRet = CheckEven(iValue);
	
	if(bRet == true)
	{
		printf("Number is Even",bRet);
	}
	
	if(bRet == false)
	{
		printf("Number is not Even",bRet);
	}
	
	getch();
	return 0;
}        
bool CheckEven(int iNo)
{
	if(iNo % 2== 0)
	{
		return true;
	}
    else
	{
		return false;
	}	
}



	
