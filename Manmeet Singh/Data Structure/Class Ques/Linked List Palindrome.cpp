#include<iostream>
#include<math.h>
using namespace std;
struct node{
int info;
node *next;
}*start=NULL;

void creation(){
node *n,*p;
while(1){
    int num;
    cin>>num;
    if(num==-1) break;
    n=new node;
    n->info=num;
    if(start==NULL) start=n;
    else p->next=n;
    p=n;
}
n->next=NULL;
}

int countnodes(){
node *n=start;
int c=0;
while(n!=NULL){c++;n=n->next;}
return c;
}
int convert_to_single_digit(){
node *n=start;
int sum=0;
int i=countnodes();
while(n!=NULL){
    sum=sum+(n->info)*(pow(10,--i));
    n=n->next;
}
return sum+1;
}

void check_palindrome(int n){
int temp=n,rem=0,sum=0;
while(temp!=NULL){
    rem=temp%10;
    sum=sum*10+rem;
    temp/=10;
}
if(sum==n) cout<<"\nPalindrome";
else cout<<"\nNot Palindrome";
}

int main(){
creation();
int n;
n=convert_to_single_digit();
check_palindrome(n);
}
