#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
}*start;
void insert(int val)
{
    struct node *newnode=new node();
    newnode->data=val;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        struct node *ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
        newnode->prev=ptr;
    }
}
void display()
{
    struct node *ptr=start;
    while(ptr->next!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<ptr->data;
    cout<<"\nElements in reverse "<<endl;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->prev;
    }
}
main()
{
    int n,v;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        insert(v);
    }
    cout<<"Elements are "<<endl;
    display();
}
