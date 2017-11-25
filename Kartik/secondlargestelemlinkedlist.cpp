#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void insert(int data,node *&ptr)
{

    struct node *newnode=new node();
    newnode->data=data;
    newnode->next=NULL;
    if(ptr==NULL)
    {
        ptr=newnode;
    }
    else
    {
        struct node *start=ptr;
        while(start->next!=NULL)
        {
            start=start->next;
        }
        start->next=newnode;
    }
}
void secondlarge(node *&ptr)
{
     struct node *start=ptr;
        while(start!=NULL)
        {
            struct node *start1=start->next;
            while(start1!=NULL)
            {
                if(start->data>start1->data)
                {
                    int temp=start->data;
                    start->data=start1->data;
                    start1->data=temp;
                }
                start1=start1->next;
            }
            start=start->next;
        }
}
void display(node *&ptr)
{
    struct node *start=ptr;
    while(start->next->next!=NULL)
        {

            start=start->next;
        }
        cout<<start->data<<endl;
}
main()
{
    struct node *start=NULL;
    int n=0;
    cout<<"Enter elements till -1\n";
    cin>>n;
    while(n!=-1)
    {
        insert(n,start);
        cin>>n;
    }
    cout<<"Second Largest element is \n";
    secondlarge(start);
    display(start);
}
