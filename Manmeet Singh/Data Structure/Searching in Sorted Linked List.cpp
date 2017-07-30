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
        cout<<endl<<"enter Number: ";
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
cout<<endl<<"enter element to be searched: ";
cin>>n;
int loc;
node *temp=start;
while(temp!=NULL){
    if(n>temp->info) temp=temp->next;
    else if(n==temp->info){
        cout<<endl<<"Found at: "<<(int)temp;
        break;
    }
    else if(n<temp->info){
        cout<<"Not there"<<endl;
        break;
    }
}
if(temp==NULL) cout<<endl<<"Not Found";
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

