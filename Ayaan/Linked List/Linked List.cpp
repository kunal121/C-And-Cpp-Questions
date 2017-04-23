#include<iostream>
#include<cstring>
using namespace std;
struct node{
    string info;
    node *next;
}*start,*save;
int main()
{
    start = NULL;
    char x;
    do
    {

        node *st = new node;
        cout<<"Enter the element";
        cin>>st->info;
        st->next = NULL;
        if(start == NULL){
            start = st;
        }
        else{
            save=start;
            start = st;
            st->next=save;
        }
        cout<<"Enter a to continue";
        cin>>x;

    }
    while(x=='a'||x=='A');
    char d;
    cout<<"Enter d if you want to delete";
    cin>>d;
    if(d=='d'||d=='D')
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

        }
    }
    while(start!= NULL){
        cout<<start->info;
        start = start->next;
    }
}
