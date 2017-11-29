#include<iostream>
using namespace std;
struct node
{
    char data;
    node *add;
}*start;
void insert(char v)
{
    struct node *newnode=new node();
    newnode->data=v;
    newnode->add=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        struct node *ptr=start;
        while(ptr->add!=NULL)
        {
            ptr=ptr->add;
        }
        ptr->add=newnode;
    }
}
void display()
{
    struct node *ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->add;
    }
}
void add(int val,int pos,int n)
{
    struct node *newnode=new node();
    //struct node *temp=new node();
    newnode->data=val;
    newnode->add=NULL;
    //temp = start;
    if(pos>n)
    {
        pos=n+1;
    }
    pos=pos-1;
    struct node *ptr=start;
    struct node *ptr1=start;
    if(pos==0)
    {
       newnode->add=start;
       start=newnode;
    }
    else
    {
    for(int i=1;i<pos;i++)
    {
        ptr=ptr->add;
        ptr1=ptr1->add;
    }
    ptr1=ptr1->add;
    ptr->add=newnode;
    newnode->add=ptr1;
}
}
main()
{
    int n,pos;
    char v,val;
    cout<<"Enter no of elements"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        insert(v);
    }
    cout<<"Enter value and position"<<endl;
    cin>>val>>pos;
    add(val,pos,n);
    display();
}
