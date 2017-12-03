#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*start;
void insert(int val)
{
    struct node *newnode=new node();
    struct node *ptr=start;
    newnode->data=val;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
}
void circular()
{
    struct node *ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=start;
}
void display()
{
    struct node *ptr=start;
    cout<<ptr->data<<" ";
    ptr=ptr->next;
    while(ptr!=start)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
main()
{
    int n,val;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the number of elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        insert(val);
    }
    cout<<"Elements are "<<endl;
    circular();
    display();
}
