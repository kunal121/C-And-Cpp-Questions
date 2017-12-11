#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*start1,*start2,*inter;
void insert(node *&head,int data)
{
    struct node *newnode=new node();
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node *ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
}
void display(node *&head)
{
    struct node *ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
}
void intersection(node *&head1,node *&head2)
{
    struct node *ptr1=head1;
    struct node *ptr2=head2;
    while(ptr1!=NULL)
    {
        struct node *ptr=ptr1->next;
        while(ptr!=NULL)
        {
            if(ptr->data==ptr1->data)
                ptr1=ptr1->next;
            ptr=ptr->next;
        }
        ptr2=head2;
        while(ptr2!=NULL)
        {
            if(ptr1->data==ptr2->data)
            {
                insert(inter,ptr1->data);
                break;
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
}
main()
{
    int n;
    cout<<"Enter the elements of list 1\n";
    cin>>n;
    while(n!=-1)
    {
        insert(start1,n);
        cin>>n;
    }
    cout<<"Enter the elements of list 2\n";
    cin>>n;
    while(n!=-1)
    {
        insert(start2,n);
        cin>>n;
    }
    cout<<"List is \n";
    display(start1);
    cout<<"\nList is \n";
    display(start2);
    intersection(start1,start2);
    cout<<"\nIntersection is \n";
    display(inter);
}
