#include<iostream>
using namespace std;
struct node
{
    int data;
    //node *top;
    node *next;
}*start,*top;
void push(int val)
{
    struct node *newnode=new node();
    newnode->data=val;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
        top=start;
    }
    else
    {
        top->next=newnode;
        top=newnode;
    }
}
int pop()
{
    struct node *ptr=start;
    if(start==top)
    {
        start=NULL;
        cout<<"\nlist is empty\n";
    }
    while(ptr->next!=top)
    {
        ptr=ptr->next;
    }
    int a=top->data;
    top=ptr;
    top->next=NULL;
    return a;
}
void display()
{
    struct node *ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
main()
{
    int n;
    cout<<"Enter the elements till -1\n";
    cin>>n;
    while(n!=-1)
    {
        push(n);
        cin>>n;
    }
    cout<<"\nEnter 1 to remove last element\n";
    cin>>n;
    while(n==1)
    {
        cout<<pop();
        cout<<"\nList is \n";
        display();
        cin>>n;
    }
}
