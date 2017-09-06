#include<iostream>
#include<stdlib.h>
#include<limits.h>
#include<stdio.h>
using namespace std;
struct tree
{
    int data;
    struct tree *left,*right;
};
struct tree* createbst(struct tree *root,int d)
{
    if(root==NULL)
    {
        struct tree*nn=new (struct tree);
        nn->data=d;
        nn->left=NULL;
        nn->right=NULL;
        return nn;
    }
    else
    {
        if(d<root->data)
        {
            root->left=createbst(root->left,d);
        }
        else if(d>root->data)
        {
            root->right=createbst(root->right,d);
        }
        else
            return root;
    }
}
void dis(struct tree *root)
{
    if(root==NULL)
        return;
    else
    {
        dis(root->left);
        cout<<root->data<<" ";
        dis(root->right);
    }
}
void inorder(struct tree* root)
{
    if(root==NULL)
        return;
    else
    {
        inorder(root->left);
        if(root->left==NULL && root->right==NULL)
            cout<<root->data<<" ";
        inorder(root->right);
    }

}
void Right(struct tree* root)
{
    if (root)
    {
        if(root->right)
        {
            Right(root->right);
            cout<<root->data<<" ";
        }
        else if ( root->left )
        {
            Right(root->left);
            cout<<root->data<<" ";
        }
    }
}
void Left(struct tree* root)
{
    if (root)
    {
        if ( root->left )
        {
            Left(root->left);
            cout<<root->data<<" ";
        }
        else if ( root->right )
        {
            Left(root->right);
            cout<<root->data<<" ";
        }
    }
}
void circumference(struct tree *root)
{
    Left(root); //left nodes
    inorder(root); //leaf nodes
    Right(root); //right nodes

}
void top_view(struct tree *root)
{
    int arr[]
}
int main()
{
    int d,n;
    int e=INT_MIN;
    cout<<"enter no of values req";
    cin>>n;
    struct tree *root=NULL;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        root=createbst(root,d);
    }
    cout<<"tree is ";
    dis(root);
    cout<<endl;
    cout<<"leaf nodes ";
    circumference(root);
    cout<<endl;

}
