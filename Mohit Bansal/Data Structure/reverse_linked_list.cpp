#include<iostream>
using namespace std;
void insert_end(int value);
void reverse_list();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
int main()
{
    int n,ch;
    int value,v1,v2,f=0;
    while(1)
    {

        cout<<"Enter the Value : ";
        cin>>value;
        switch(value)
        {
            case 1 : reverse_list();
                     f=1;
            break;
            case 2 : display();
            f=1;
            break;
            case 0 : return 0;
            //default: cout<<"invalid Choice\n";
        }
        if(f==0)
        {
            insert_end(value);
            display();
        }
        f=0;
    }
    return 0;
}

void reverse_list()
{
    struct node *temp = head;
    struct node *prev = NULL;
    struct node *cur = head;
    while(cur!=NULL)
    {
        temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    head = prev;
}
void insert_end(int value)
{
    struct node *node1;
    node1=new(struct node);
    if(node1!=NULL)
    {
        node1->data=value;
        struct node *temp=head;
        if(temp==NULL)
        {
            node1->next = NULL;
            head = node1;
            return;
        }
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        node1->next = NULL;
        temp->next = node1;
    }
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
