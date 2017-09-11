#include<iostream>
using namespace std;

struct node{
int info;
node *next;
}*start=NULL;

void creation(){
node *n,*p,*q;
while(1){
    int num;
    cin>>num;
    if(num==-1) break;
    n=new node;
    n->info=num;
    if(num==5) q=n;
    if(start==NULL) start=n;
    else p->next=n;
    p=n;
}
n->next=q;
}

void detect_delete(){
node *slow=start,*fast=start;
slow=slow->next;
fast=fast->next->next;
while(fast && fast->next){
    if(slow==fast){break;}
    slow=slow->next;
    fast=fast->next->next;
}
if(slow==fast){
    slow=start;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
}
}
void displa(){
node *n=start;
while(n!=NULL){cout<<n->info<<" ";n=n->next;}
}

int main(){
creation();
detect_delete();
displa();
}
