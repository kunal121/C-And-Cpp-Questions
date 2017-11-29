#include<iostream>
using namespace std;
struct node
{
    int data;
    node *add;
}*start;
void insert(int v)
{
    struct node *newnode=new node();
    struct node *ptr=start;
    newnode->data=v;
    newnode->add=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
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
void del(int pos,int n)
{
    pos=pos-1;
    struct node *ptr=start;
    struct node *ptr1=start;
    if(pos>=n)
    {
        cout<<"Wrong input"<<endl;
    }
    else if(pos==0)
    {
        ptr=ptr->add;
        start=ptr;
    }
    else
    {
        for(int i=0;i<pos-1;i++)
        {
            ptr=ptr->add;
            ptr1=ptr1->add;
        }
        ptr1=ptr1->add;
        ptr1=ptr1->add;
        ptr->add=ptr1;
    }
}
main()
{
    int n,v,pos;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        insert(v);
    }
    cout<<"Enter the position to be deleted"<<endl;
    cin>>pos;
    del(pos,n);
    display();
}
