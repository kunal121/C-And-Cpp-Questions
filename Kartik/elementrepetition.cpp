#include<iostream>
using namespace std;
struct node
{
    char data;
    node *add;
}*start;

void insert(char a)
{
    struct node *newnode=new node();
    newnode->data=a;
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
void repeat()
{
    struct node *ptr=start;
    struct node *ptr1=start;
    while(ptr!=NULL)
    {
        ptr1=ptr->add;
        while(ptr1!=NULL)
        {
            if(ptr->data==ptr1->data)
            {
                cout<<ptr->data;
            }
            ptr1=ptr1->add;
        }
        ptr=ptr->add;
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
    char a;
    int n;
    cout<<"Enter the number of elements \n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>a;
        insert(a);
    }
    cout<<"Repeated elements are\n";
    repeat();
    cout<<"\nlinked list is \n";
    display();
}
