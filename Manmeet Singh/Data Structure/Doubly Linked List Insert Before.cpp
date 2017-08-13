#include<iostream>
using namespace std;
int length=0;

struct node {
    int value;
    struct node *next;
    struct node *prev;
};
//typedef struct node node;
node *start = NULL;
node *last = NULL;

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
                start = ptr;

                }
            else{
                 t->next = ptr;
                 ptr->prev = t;

                // ptr->next = last;
            }
            t = ptr;
          }
    ptr->next=NULL;
     last = ptr;
}

void display(){
    node *temp;
    temp = start;
    if( start == NULL)
        cout<<"Empty List";
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp= temp->next;
    }cout<<endl;
}

void insert_before(int n, int p){
    node *ptr,*temp,*t;
    temp = start;
    ptr = new node;
    ptr->value= n;
    ptr->next=NULL;
    ptr->prev=NULL;
    if (start == NULL){
            start = ptr;
            last = ptr;
    }
    else {
        while(p != temp->value){
            t=temp;
            temp = temp->next;
        }
        if(temp == start){
            ptr->next = start;
            start->prev = ptr;
            start = ptr;
        }
        else{
            ptr->prev = t;
            ptr->next = temp;
            t->next = ptr;
            temp->prev = ptr;
        }
    }
}

int main(){
    int n,p;
    create();
    cout<<"Enter number to be inserted and number before which it is to be inserted\n";
    cin>>n>>p;
    insert_before(n,p);
    display();
}
