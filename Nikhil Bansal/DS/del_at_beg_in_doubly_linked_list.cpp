#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
};
struct node *head = NULL;

void fxn()
{
    struct node *temp=head;
    if(head==NULL)
    {
        cout<<"linked list is empty";
    }
    else
    {
        head=temp->next;
        head->next->prev=NULL;
        temp=NULL;
    }
}
void fun(int value)
{
    node *nn = new node;
    nn->data = value;
   struct node *temp = head;
   struct node *t = NULL;

   if(nn != NULL)
   {
       if(head == NULL)
       {
           nn->next = NULL;
           nn->prev = NULL;
           head = nn;

       }
       else
       {
        	while(temp != NULL)
       		{
          		t = temp;
          		temp = temp->next;
      		 }
        	nn->next =  NULL;
          	nn->prev = t;
            t->next = nn;
       }
   }

}

void display()
{
    node *temp=head;
    if(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
int main()
{
    int v;
    cin>>v;
    for(int i=0;i<5;i++)
    {
        fun(v);
    }
    fxn();
    display();
}
