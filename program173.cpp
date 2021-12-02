#include<iostream>
using namespace std;
//specific function
void swap (char *p,char *q)
{
	char temp;
	
	temp=*p;
	*p=*q;
	*q=temp;
}

//Generic Function
template <class T>
void swapx (T *p,T *q)
{
	T temp;
	
	temp=*p;
	*p=*q;
	*q=temp;
}

int main()
{
	char x='A',y='B';
	swapx(&x,&y);
	
	cout<<"Value of x:"<<x<<"\n";
	cout<<"Value of y:"<<y<<"\n";
	
	int i=11,j=22;
	swapx(&i,&j);
	
	cout<<"Value of i:"<<i<<"\n";
	cout<<"Value of j:"<<j<<"\n";
	
	
	return 0;
	
}