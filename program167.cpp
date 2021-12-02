#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;

}NODE,*PNODE;

class DoublyCL
{
	private:
	PNODE first;
	PNODE last;
	int size;
	
	public:
	DoublyCL()
	{
		first = NULL;
		last = NULL;
		size = 0;
	}
	void Display();
	int Count();
	void InsertFirst(int);
	void InsertLast(int);
	void InsertAtPos(int,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
};

void DoublyCL::InsertFirst(int no)
{
	PNODE newn = new NODE;
	
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;
	
	if((first == NULL)&& (last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		newn->next=first;
		first->prev=newn;
		first = newn;
	}
	last->next=first;
	first->prev=last;
	size++;
}

void DoublyCL :: InsertLast(int no)
{
	PNODE newn = new NODE;
	
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;
	
	if((first == NULL)&& (last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		last->next=newn;
		newn->prev=last;
		last=newn;
		
	}
	last->next=first;
	first->prev=last;
	size++;
}

void DoublyCL :: Display()
{
	PNODE temp = first;
	for(int i =1;i<= size; i++)
	{
		cout<<"|"<<temp->data<<"|->";
		temp=temp->next;
	}
	cout<<"\n";
}

int DoublyCL :: Count()
{
	return size;
}

 void DoublyCL :: DeleteFirst()
 {
	 if((first ==NULL)&& (last == NULL))
	 {
		 return;
	 }
	 else if(first == last)
	 {
		 delete first;
		 first = NULL;
		 last = NULL;
	 }
	 else
	 {
		 first= first->next;
		 delete last->next;
		 first->prev=last;
	     last->next=first;
	 }
	 
	 size--;
 }
 
 void DoublyCL :: DeleteLast()
 {
	if((first ==NULL)&& (last == NULL))
	 {
		 return;
	 }
	 else if(first == last)
	 {
		 delete first;
		 first = NULL;
		 last = NULL;
	 }
	 else
	 {
		 last = last -> prev;
		 delete last->next;
		 first->prev=last;
	     last->next=first;
	 }
	 
	 size--; 
 }
 
 void DoublyCL :: InsertAtPos(int no,int pos)
 {
	 if((pos < 1)||(pos > size +1))
	 {
		 return;
	 }
	 if(pos == 1)
	 {
		 InsertFirst(no);
	 }
	 else if (pos == size+1)
	 {
		 InsertLast(no);
	 }
	 else
	 {
		 PNODE newn = new NODE;
	
		 newn->data=no;
		 newn->next=NULL;
		 newn->prev = NULL;
		 
		 PNODE temp = first;
		 
		 for(int i=1;i<pos-1;i++)
		 {
			 temp=temp->next;
		 }
		 newn->next=temp->next;   // sequence should be same for 2 line
		 temp->next->prev = newn;
		 newn->prev = temp;
		 temp->next = newn;
		 size++;
	 }
	
 }
 
 void DoublyCL :: DeleteAtPos(int pos)
 {
	 if((pos < 1)||(pos > size))
	 {
		 return;
	 }
	 if(pos == 1)
	 {
		 DeleteFirst();
	 }
	 else if (pos == size)
	 {
		 DeleteLast();
	 }
	 else
	 {
		 PNODE temp = first;
		 
		 for(int i = 1; i < pos-1;i++)
		 {
			 temp = temp -> next;
		 }
		 temp->next = temp->next->next;
		 delete temp->next->prev;
		 temp->next->prev=temp;
		 
	   	 size--; 
	 }
 }

 
int main()
{
	DoublyCL obj;
	int iRet = 0;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.InsertLast(101);
	obj.InsertAtPos(55,4);
		
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of node are " <<iRet<<"\n";
	
	obj.DeleteAtPos(4);
	obj.DeleteFirst();
	obj.DeleteLast();
	
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of node are " <<iRet<<"\n";
	
	
	
	return 0;
}