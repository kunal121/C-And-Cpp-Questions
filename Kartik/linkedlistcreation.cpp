#include<iostream>
using namespace std;
struct node
{
    int data;
    node *add;
}*start;

void insert(int p)
{
    struct node *newnode=new node();
    newnode->data=p;
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

main()
{
    int i,n,v;
    cout<<"Enter the number of elements till -1"<<endl;
    //cin>>n;
    /*for(int i=0;i<n;i++)
    {
        cin>>v;
        insert(v);
    }*/
    cin>>v;
    while(v!=-1)
    {
        insert(v);
        cin>>v;
    }
    display();
}
