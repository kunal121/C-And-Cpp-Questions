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

void deleteFirst(){
    if(start == NULL)
        cout<<"List is empty\n";
    else{
            length--;
            node *ptr = start;
            start = start->link;
            delete ptr;
    }
}

int main(){
    int choice,f=0,n,p;
    create();
    deleteFirst()
    display();
   }
