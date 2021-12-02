#include<iostream>
using namespace std;

template <typename T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyCL
{
private:
    node<T> * first;
	node<T> * last;
    int size;
    
public:
	SinglyCL();
	void InsertFirst(T);
	void InsertLast(T);
	void InsertAtPos(T,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	void Display();
	int Count();
	
};

template <class T>
  SinglyCL<T>::SinglyCL()
    {
        first = NULL;
		last = NULL;
        size = 0;
    }
template <class T>
 void SinglyCL<T>::Display()
	 {
		 node<T>  * temp = first;
		 if((first == NULL)&&(last == NULL))
		 {
			 return;
		 }
		 
		 do
		 {
			 cout<<"|"<<temp->data<<"|->";
			 temp=temp->next;
		 }while(temp != last->next);
		 cout<<"\n";
	 }
	 template <class T>
	 int SinglyCL<T>::Count()
	 {
		 return size;
	 }
	 template <class T>
	 void SinglyCL<T>::InsertFirst(T no)
	 {
		  node<T> * newn = new  node<T> ;
		 
		 newn->data = no;
		 newn->next = NULL;
		 
		 if((first == NULL)&&(last == NULL))
		 {
			 first = newn;
			 last = newn;
		 }
		 else
		 {
			 newn->next = first;
			 first = newn;
		 }
		 last->next = first;
		 size++;
		 
	 }
	 template <class T>
	 void SinglyCL<T>::InsertLast(T no)
	 {
		 node<T>  * temp = first;
		  node<T> * newn = new  node<T> ;
		 
		 newn->data = no;
		 newn->next = NULL;
		 
		 if((first == NULL)&&(last == NULL))
		 {
			 first = newn;
			 last = newn;
		 }
		 else
		 {
			last->next=newn;
			last = newn;
			
		 }
		 last->next = first;
		 size++;
	 }
	 template <class T>
	 void SinglyCL<T>::InsertAtPos(T no,int pos)
	 {
		 if((pos<1)||(pos >size+1))
		 {
			 return;
		 }
		 if(pos == 1)
		 {
			 InsertFirst(no);
		 }
		 else if (pos == size + 1)
		 {
			 InsertLast(no);
		 }
		 else
		 {
			 node<T> * newn = new  node<T> ;
			 newn->data = no;
			 newn->next = NULL;
			 
			node<T>  * temp = first;
			 for(int i = 1;i < pos-1;i++)
			 {
				 temp = temp->next;
			 }
			 newn->next = temp->next;
			 temp->next = newn;
		     size++;
		 }
		
		 		 
	 }
	 template <class T>
	 void SinglyCL<T>::DeleteFirst()
	 {
		 if((first == NULL)&&(last == NULL))
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
			first = first->next;
			delete last->next;
			last->next=first;
		 }
		 size--;
	 }
	 template <class T>
	 void SinglyCL<T>::DeleteLast()
	 {
		 node<T>  * temp = first;
		 if((first == NULL)&&(last == NULL))
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
			while(temp->next != last)
			{
				temp = temp->next;
			}
			delete last;
			last=temp;
			
			last->next=first;
		 }
		 size--;
	 }
	 template <class T>
	 void SinglyCL<T>::DeleteAtPos(int pos)
	 {
		if((pos<1)||(pos >size))
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
			 node<T>  * temp = first;
			 for(int i = 1;i < pos-1;i++)
			 {
				 temp = temp->next;
			 }
			 node<T>  * targated = temp -> next;
			 temp->next=targated->next;
			 delete targated;
			 
			 size--; 
		 }
		
	 }

int main()
{
	int iret = 0;
	 
    SinglyCL <char>cobj;
     
   
    
    cobj.InsertFirst('a');
    cobj.InsertFirst('b');
    cobj.InsertFirst('c');
    
    cobj.InsertLast('d');
    cobj.InsertLast('e');                                                                                                                                                                                             
    
    cobj.Display();
    
    iret = cobj.Count();
    cout<<"Number of elemensts are : "<<iret<<"\n";
	
	////////////////////////////////////////////////////////
	
	SinglyCL <int>obj;
     
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    obj.InsertLast(111);                                                                                                                                                                                             
    
    obj.Display();
    
    iret = obj.Count();
    cout<<"Number of elemensts are : "<<iret<<"\n";
    
    return 0;

}