#include<iostream>
using namespace std;

struct node{
    int value;
    struct node *link;
}*top=NULL;

void push(int n){
    node *ptr;
    ptr = new node;
    ptr->value=n;
    ptr->link=NULL;
    if( top ==NULL){
        top=ptr;
    }
    else {
        ptr->link=top;
        top=ptr;
    }
}
void pop(){
    if(top == NULL)
        cout<<"Stack is empty\n";
    else{
            node *ptr = top;
            top = top->link;
            delete ptr;
    }
}
void display(){
    node *temp = top;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp= temp->link;
    }cout<<endl;
}
int main(){
    int choice,f=0,n;
    while(f==0){
        cout<<"Enter your choice\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cin>>choice;
        switch(choice) {
        case 1 : cout<<"Enter number to be Pushed\n";
                 cin>>n;
                 push(n);
                 break;
        case 2 : pop();
                 break;
        case 3: display();
                 break;
        case 4 : f=1;
                 break;
        default : cout<<"Invalid Input\n";
        }
    }
}
