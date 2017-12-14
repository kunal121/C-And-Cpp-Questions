#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}*start;
void insert(int d)
{
    struct node *newnode=new node();
    newnode->data=d;
    newnode->next=start;
    start=newnode;
}
void display()
{
    struct node *ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr = ptr->next;
    }
}
main()
{
    int n;
    cout<<"Enter the elements and -1 to stop\n";
    cin>>n;
    while(n!=-1)
    {
        insert(n);
        cin>>n;
    }
    cout<<"Elements are\n";
    display();
}
