#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
    public:
        int data;
        node* next;
        node* prev;
};
class Dequey{
public:
        node* newnode;
        node* temp;
        node* head;
        node* tail;
        int i,n;
    void create_node(){
        newnode = new node();
        cin>>newnode->data;
        newnode->next = NULL;
        newnode->prev = NULL;
    }
    void init(){
        head = NULL;
        tail = NULL;
        cout<<"Enter Data of First NODE"<<endl;
        create_node();
        head = newnode;
        tail = newnode;
    }
    void insertion_beg(){
        cout<<"insertion in beg"<<endl;
        create_node();
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    void insertion_end(){
        create_node();
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
    void deletion_beg(){
        head = head->next;
        head->prev = NULL;
    }
    void deletion_end(){
        tail = tail->prev;
        tail->next = NULL;
    }
    void display()
    {
        temp = head;
        while(temp != tail){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

};
int main(){
    Dequey d;
    int choice=0,flag=0;
    d.init();
    while(1){
        cout<<endl<<"1. Insertion at Beg \n2. Insertion at End \n3. Deletion at Beg \n4. Deletion at End \n5. DISPLAY\n6. EXIT"<<endl;
        cin>>choice;
        switch(choice){
        case 1:
            d.insertion_beg();
            break;
        case 2:
            d.insertion_end();
            break;
        case 3:
            d.deletion_beg();
            break;
        case 4:
            d.deletion_end();
            break;
        case 5:
            d.display();
            break;
        case 6:
            exit(1);
        }
    }
    return 0;
}
