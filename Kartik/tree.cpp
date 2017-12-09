#include<iostream>
using namespace std;
struct tree
{
    int data;
    tree *left;
    tree *right;
}*root = NULL;

tree* insert(int data,tree* root)
{
    if(root==NULL)
    {
        tree *temp = new tree;
        temp->data=data;
        temp->left=NULL;
        temp->right=NULL;
        root = temp;
        return root;
    }
    if(root->data>data)
    {
        root->left=insert(data,root->left);
    }
    else
    {
        root->right=insert(data,root->right);
    }
}
void display(tree* root)
{
    if(root!=NULL)
    {
        display(root->left);
        cout<<root->data;
        display(root->right);
    }
}
int main()
{
    int n;
    cout<<"Enter number or -1 to exit\n";
    cin>>n;
    while(n!=-1)
    {
        root=insert(n,root);
        cin>>n;
    }
    cout<<"Tree Should be\n";
    display(root);
}
