#include<iostream>
using namespace std;
struct node{
    string info;
    node *next;
}*start,*rear,*save,*np,*temp,*np1,*np2,*np3,*temp1;
int main()
{
    char x;
    static int co=0;
    start=rear=NULL;
    do
    {
        np = new node;
        cout<<"Enter element : ";
        cin>>np->info;
        np->next = NULL;
        if(start == NULL)
        {
            start = rear = np;
        }
        else
        {
            rear->next = np;
            rear = np;
        }
        co++;
    cout<<"Enter a to continue";
        cin>>x;
    }
    while(x=='a'||x=='A');

    char d;
    cout<<"Enter d if you want to delete";
    cin>>d;
    while(d=='d'||d=='D')
    {
        int a;
        cout<<"Enter 1 to delete from start, 2 to delete at the end or 3 to delete in between";
        cin>>a;
        if(a==1)
        {
            save = start;
            start = start->next;
            delete save;
        }
        if(a==2){
                temp = new node;
                temp = start;
            while(temp ->next!= rear)
            {
                //save = start;
                temp = temp->next;
            }
            np1 =new node;
            np1 = rear;
            rear=temp;
            rear->next = NULL;
            delete np1;

        }
        if(a==3){
                int de;
            cout<<"Enter the place where u  want to delete: ";
            cin>>de;
            np2 = new node;
            np2=start;
            np3 = new node;
            np3 = start;
            for(int i=2;i<de;i++){
                np2 = np2->next;
                np3 = np3->next;
               // cout << np2->info;
            }
            np3=np3->next;
            save = np3;
            np2->next=np3->next;
            delete save;
        }
        temp1=new node;
        temp1=start;
        while(temp1!= NULL){
        cout<<temp1->info;
        temp1 = temp1->next;
    }
    cout<<"Enter d if you want to delete";
        cin>>d;
    }
    char inse;
    cout<<"Enter i if u want to insert";
    cin>>inse;
    if(inse=='i'||inse=='I'){
            int po;
        cout<<"Enter location where to insert";
        cin>>po;
        np3 = new node;
        cout<<"Enter what to insert : ";
        cin>>np3->info;
        np3->next=NULL;
        np1 = new node;
        np2 = new node;
        np1 = start;
        np2=start;
    for(int i=2;i<po;i++){
        np1=np1->next;
        np2=np2->next;
    }
    np2=np2->next;
    np1->next = np3;
    np3->next = np2;
    }
    temp1=new node;
    temp1=start;
    while(temp1!= NULL){
        cout<<temp1->info;
        temp1 = temp1->next;
    }
}
