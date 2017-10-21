#include <iostream>
using namespace std;

struct node{
    int val;
    struct node *left;
    struct node *right;
};
typedef struct node node;
node *start = NULL;
node *last = NULL;

struct node *insert(struct node *n, int d)
{
    if(n==NULL){
        struct node *t=new struct node;
        t->val = d;
        t->right = NULL;
        t->left = NULL;
        return t;
    }
    else if(d < n->val){
        n->left = insert(n->leftm,d);
    }
    else{
        n->right = insert(n->right,d);
    }
    return n;
}
/*
void print(struct node *n){
    if(n == NULL){
        return;
    }
    cout<<n->val<<" ";
    print(n->left);
    print(n->right);
}*/
int index;
int isPreorder(node * n, int *a){
    if(n == NULL) return 1;
    if(n->val != a[index]) return 0;
    index++;
    if(isPreorder(n->left,a) && isPreorder(n->right,a)) return 1;
    return 0; 
}
int main() {
    int c,x;
    cin>>c;
    for(int i=0;i<c;i++){
		struct node *n=NULL;
        index=0;
        cin>>x;
        int a[x];
        for(int j=0;j<x;j++){
            cin>>a[j];
            n = insert(n,a[j]);
        }    
     //  print(n);    
     //  cout<<endl;
        if(isPreorder(n,a))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
            
    }
    
}