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
void pos(int val)
{
    struct node *ptr=start;
    for(int i=0;i<val;i++)
    {
        ptr=ptr->add;
    }
        cout<<"Value at position is "<<ptr->data;
}
main()
{
    int n,v,val;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=1;i<n;i++)
    {
        cin>>v;
        insert(v);
    }
    cout<<"Enter position to find element";
    cin>>val;
    pos(val);
}
