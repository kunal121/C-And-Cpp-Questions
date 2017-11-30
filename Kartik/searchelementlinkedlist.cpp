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
    cout<<"Elements are"<<endl;
    struct node *ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->add;
    }
}
void sear(int val)
{
    int flag=0,count1=0;
    struct node *ptr=start;
    while(ptr!=NULL)
    {
        count1++;
        if(ptr->data==val)
        {
            flag=1;
            break;
        }
        ptr=ptr->add;
    }
    cout<<flag<<endl;
        if(flag==1)
        {
            cout<<val<<" was found at position "<<count1<<endl;
        }
        else
        {
            cout<<"Element not found"<<endl;
        }
}
main()
{
    int n,v,val;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v;
        insert(v);
    }
    cout<<"Enter the value to be searched"<<endl;
    cin>>val;
    sear(val);
    display();
}
