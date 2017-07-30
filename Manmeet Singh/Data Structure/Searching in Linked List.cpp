#include<iostream>
using namespace std;

class link_list{
struct node{
int info;
struct node *next;
}*start;
public:
    link_list(){
    start=NULL;
    }
    int create_nodes();
    void display();
    void element_search();
};

int link_list::create_nodes(){
    node *n,*t;
    int num=1;
    t=n=NULL;
    while(1){
        cout<<endl<<"Enter Number: ";
        cin>>num;
        if(num==(-999)) break;
        else{
            n=new node;
            if(n==NULL){cout<<"Overflow";return 1;}
            n->info=num;
            if(start==NULL) start=n;
            else{t->next=n;}
            t=n;
        }
    }
     n->next=NULL;
}

void link_list::display(){
node *temp=start;
while(temp!=NULL){
    cout<<endl<<temp->info;
    if(temp->next!=NULL) cout<<endl<<" ";
    temp=temp->next;
}
delete(temp);
}

void link_list::element_search(){
int n;
cout<<endl<<"Enter elements to be searched\n";
cin>>n;
int loc;
node *temp=start;
while(temp!=NULL){
    if(temp->info==n){
        cout<<endl<<"Found at: "<<int(temp);
        break;
    }
    temp=temp->next;
}
if(temp==NULL) cout<<endl<<"Not Found\n";
delete(temp);
}

int main(){
int status;
link_list obj;
status=obj.create_nodes();
if(status==1) return 0;
obj.display();
obj.element_search();
return 0;
}

