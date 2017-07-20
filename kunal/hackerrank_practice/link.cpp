#include<iostream>
using namespace std;
struct node
{
 int number;
 node *next;
};

bool isEmpty(node *head);
char menu();
void insertAsFirstElement(node *&head,node *&last,int number);
void insert(node *&head,node *&last,int number);
void remove(node *&head,node *&last);
void showList(node *current);

bool isEmpty(node *head)
{
   if(head==NULL)
     return true;
   else
     return false;
}
char menu()
{
   char choice;
   cout<<"MENU";
   cout<<"1.Add a number";
   cout<<"2.remove";
   cout<<"3.show the list";
   cout<<"4.exit";
   cin>>choice;
   return choice;

}
void insertAsFirstElement(node *&head,node *&last,int number)
{
    node *temp=new node;
    temp->number=number;
    temp->next=NULL;
    head=temp;
    last=temp;

}
void insert(node *&head,node *&last,int number)
{
    if(isEmpty(head))
       insertAsFirstElement(head,last,number);
    else
    {
      node *temp=new node;
      temp->number=number;
      temp->next=NULL;
      last->next=temp;
      last=temp;
    }

}
void remove(node *&head,node *&last)
{
    if(isEmpty(head))
      cout<<"the list is empty";
    else if(head==last)
    {
      delete head;
      head == NULL;
      last ==NULL;
    }
    else
    {
      node *temp=head;
      head=head->next;
      delete temp;
    }
	

}
void showList(node *current)
{
    if(isEmpty(current))
	cout<<"the list is empty\n";
    else
    {
      cout<<"The list contains:\n";
      while(current!=NULL)
        {
	cout<<current->number<<endl;
        current=current->next;
        }
    }

}


int main()
{
 node *head=NULL;
 node *last=NULL;
 char choice;
 int number;
 do{
  choice=menu();
  switch(choice)
  {
   case '1': cout<<"please enter a number";
             cin>>number;
             insert(head,last,number);
             break;
   case '2': remove(head,last);
             break;
   case '3': showList(head);
             break;
   default: cout<<"System exit \n";
  
  }
 }
 while(choice!='4');
return 0;
}
