#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insert_begin(int value)
{
    struct node *node1;
    node1=new struct node;
    node1->data=value;
    if(head==NULL)
    {
        node1->next=NULL;
        head=node1;
    }
    else
    {
        node1->next=head;
        head=node1;
    }
}
void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}
void swap_element(int a,int b)
{
    if(head==NULL)
    {
        cout<<"list is empty\n";
        return;
    }
    else if(a==b)
    {
        cout<<"swapping values are equal no need to change\n";
        return;
    }
    else
    {
        struct node *prev_a=NULL;
        struct node *curr_a=head;

        while(curr_a && curr_a->data!=a)
        {
            prev_a=curr_a;
            curr_a=curr_a->next;
        }

        struct node *prev_b=NULL;
        struct node *curr_b=head;

        while(curr_b && curr_b->data!=b)
        {
            prev_b=curr_b;
            curr_b=curr_b->next;
        }

        if (curr_a == NULL && curr_b == NULL)
        {
            cout<<"elements not present\n";
            cout<<"swapping is not possible"<<endl;
            return;
        }
        if(curr_a == NULL && curr_b->data==b)
        {
            cout<<a<<" not present "<<b<<" is present"<<endl;
            cout<<"swapping is not possible"<<endl;
            return;
        }

        if(curr_b == NULL && curr_a->data==a)
        {
            cout<<b<<" not present "<<a<<" is present"<<endl;
            cout<<"swapping is not possible"<<endl;
            return;
        }
        if (prev_a != NULL)
            prev_a->next = curr_b;
        else
            head = curr_b;

        if (prev_b != NULL)
            prev_b->next = curr_a;
        else
            head = curr_a;

        if(curr_a->data == a && curr_b->data != b)
            cout<<"a is present b is not";
        else if(curr_b->data == b && curr_a->data != a)
            cout<<"b is present a is not";
        else
        {
            struct node *temp=curr_b->next;
            curr_b->next=curr_a->next;
            curr_a->next=temp;
        }

    }

}
int main()
{
    insert_begin(1);
    insert_begin(2);
    insert_begin(3);
    insert_begin(4);
    insert_begin(5);
    int a,b;
    cout<<"enter 2 values to swap\n";
    cin>>a>>b;
    swap_element(a,b);
    display();
}

