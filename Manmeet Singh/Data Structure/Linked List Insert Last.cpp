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


int main(){
    int choice,f=0,n,p;
    create();
    cout<<"Enter number to be inserted\n";
    cin>>n;
    insert_end(n);
    display();
   }
