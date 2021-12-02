#include<iostream>
using namespace std;

void swap (int *p,int *q)
{
	int temp;
	
	temp=*p;
	*p=*q;
	*q=temp;
}

int main()
{
	int x=0,y=0;
	cout<<"Enetr the first number\n";
	cin>>x;
	
	cout<<"Enetr the second number\n";
	cin>>y;
	
	swap(&x,&y);
	
	cout<<"Value of x:"<<x<<"\n";
	cout<<"Value of y:"<<y<<"\n";
	return 0;
	
}
