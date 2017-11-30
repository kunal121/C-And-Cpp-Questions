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
    newnode->data=val;
    newnode->next=NULL;
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
    }
}
void sorting()
{
    int temp;
    struct node *ptr1=start;
    while(ptr1!=NULL)
    {
        struct node *ptr2=start;
        while(ptr2!=NULL)
        {
            if(ptr2->data>ptr1->data)
            {
                temp=ptr1->data;
                ptr1->data=ptr2->data;
                ptr2->data=temp;
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
}

void display()
{
    struct node *ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
main()
{
    int n,a;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        insert(a);
    }
    sorting();
    cout<<"Elements are"<<endl;
    display();
}
