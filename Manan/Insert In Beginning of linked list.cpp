#include<iostream>
#include<process.h>
using namespace std;
struct Node
{
    int info;
    Node *next;
}*start,*newptr,*save,*ptr;

void Insert_Beg(Node*);
Node* Create_new_node(int);
void display(Node*);
int main()
{
    start=NULL;
    int inf;
    char ch='y';
    while(ch=='y' || ch=='Y')
    {
        cin>>inf;
        newptr = Create_new_node(inf);
        if(newptr !=NULL)
            cout<<"Node Created\n";
        else
            cout<<"Node creation unsuccessful\n";
        Insert_Beg(newptr);
        cout<<"Now the list is :\n";
        display(start);
        cout<<"\n Enter y to continue,n to exit";
        cin>>ch;
    }
}

Node* Create_new_node(int n)
{
    ptr=new Node;
    ptr->info=n;
    ptr->next=NULL;
    return ptr;
}
void Insert_Beg(Node *np)
{
    if(start == NULL)
        start=np;
    else{
        save=start;
        start=np;
        np->next=save;
    }
}
void display(Node* np)
{
    while(np!=NULL)
    {
        cout<<np->info<<" -> ";
        np=np->next;
    }
    cout<<endl;
}
