#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
}*head=NULL;
void insert_at_begin(int value)
{
    node *temp;
    temp=new node;
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}

void delete_at_begin()
{
    head=head->next;
}

void display()
{
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data;
        curr=curr->next;
    }
}
int main()
{
    int n;
    while(1){
    cin>>n;
    switch(n){
 case 1:
    int value;
    cout<<"enter the value \n";
    cin>>value;
    insert_at_begin(value);
    break;
 case 2:
    delete_at_begin();
    break;
 case 3:
    display();
    break;
    }
    }
}
