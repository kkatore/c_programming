#include<iostream>
using namespace std;

void DisplayR(int no)
{
	static int iCnt = 1;
	if(iCnt <= no)
	{
		cout<<"Marvellous\n";
		iCnt++;
		DisplayR(no);
	}
}

int main()
{
	int i = 0;
	
	cout<<"Enter number\n";
	cin>>i;
	
	DisplayR(i);
	
	
	return 0;
}