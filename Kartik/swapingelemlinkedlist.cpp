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
        cout<<ptr->data<<endl;
        ptr=ptr->add;
    }
}
void swap(int pos1,int pos2)
{
    int temp;
    struct node *ptr1=start;
    struct node *ptr2=start;
    for(int i=0;i<pos1;i++)
    {
        ptr1=ptr1->add;
    }
    for(int i=0;i<pos2;i++)
    {
        ptr2=ptr2->add;
    }
    temp=ptr1->data;
    ptr1->data=ptr2->data;
    ptr2->data=temp;

}
main()
{
    int n,p,pos1,pos2;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        insert(p);
    }
    cout<<"Enter 2 positions to swap"<<endl;
    cin>>pos1>>pos2;
    if(pos1>=n || pos2>=n)
    {
        cout<<"wrong input"<<endl;
    }
    else
    swap(pos1,pos2);
    cout<<"Elements in linked list are"<<endl;
    display();
}
