#include<iostream>
using namespace std;
int length=0;

struct node {
    int value;
    struct node *link;
}*start=NULL;
//typedef struct node node;

void display(){
    node *temp;
    temp = start;

    while(temp != NULL){
        cout<<temp->value<<" ";
        temp= temp->link;
    }cout<<endl;
delete temp;
}

void create(){
    node *ptr, *t;
        cout<<"Enter the elements for the linked list or -1 to exit\n";
        while(1){
            int num;
            cin>>num;
            if(num == -1){
                break;
            }
            length++;
            ptr = new node;
            ptr->value = num;

            if(start == NULL){
                start = ptr;}
            else
                 t->link = ptr;

            t = ptr;
    }
    ptr->link=NULL;
}

void insert_beg(int n){
    length++;
    node *ptr;
    ptr = new node;
    ptr->value=n;
    ptr->link=NULL;
    if( start ==NULL){
        start=ptr;
    }
    else {
        ptr->link=start;
        start=ptr;
    }
}

void insert_end(int n){
    length++;
    node *ptr;
    ptr = new node;
    ptr->value= n;
    ptr->link=NULL;
    if( start ==NULL){
        start=ptr;
    }
    else {
        node *temp = start;
        while(temp->link != NULL){
            temp=temp->link;
        }
        temp->link = ptr;
    }
}

void insert_particular(int n, int p){
    node *ptr;
    ptr = new node;
    ptr->value= n;
    ptr->link=NULL;
    if (p == 1){
        insert_beg(n);
    }
    else if (p == length+1){
        insert_end(n);
    }
    else if (p>length or p<1)
        cout<<"Invalid position\n";
    else {
        length++;
            node *temp = start;
            node *previous;
            p--;
            while(p--){
                previous = temp;
                temp=temp->link;
            }
            previous->link = ptr;
            ptr->link = temp;
    }
}
int main(){
    int choice,f=0,n,p;
    create();
    cout<<"Enter number to be inserted and its position\n";
    cin>>n>>p;
    insert_particular(n,p);
    display();
   }
