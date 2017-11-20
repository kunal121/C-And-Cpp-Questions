#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void push(node *&head,int data)
{
    struct node *newnode=new node();
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node *ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
}
void pop(node *top)
{
    if(top==NULL)
    {
        cout<<"NULL\n";
    }
    if(top->next==NULL)
    {
        cout<<"Empty List\n";
        top->data=NULL;
    }
    else
    {
    struct node *ptr=top;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
    }
}
void display(node *top)
{

    struct node *ptr=top;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
main()
{
    node *top=NULL;
    int n;
    cout<<"Enter till the elements or to exit -1\n";
    cin>>n;
    while(n!=-1)
    {
        push(top,n);
        cin>>n;
    }
    cout<<"Enter 1 to pop\n";
    cin>>n;
    while(n==1)
    {
        pop(top);
        cout<<"List is \n";
        display(top);
        cout<<"\nEnter 1 to pop\n";
        cin>>n;
    }
    cout<<"List is \n";
    display(top);
}

