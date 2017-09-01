#include<iostream>
#include<stdlib.h>
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
int findmax(struct tree*root)
{
    if(root->right==NULL)
        return root->data;
    else
        return findmax(root->right);
}
struct tree*sn(struct tree *root,int value)
{
    struct tree*temp;
    if(root==NULL)
        return NULL;
    else
    {
        if(value<root->data)
        {
            root->left=sn(root->left,value);
        }
        else if(value>root->data)
        {
            root->right=sn(root->right,value);
        }
        else
        {
            if(root->right==NULL && root->left==NULL)
            {
                free(root);
                root=NULL;
                return NULL;
            }
            if(root->left==NULL)
            {
                struct tree *temp=root->right;
                free(root);
                root=NULL;
                return temp;
            }
             if(root->right==NULL)
            {
                struct tree *temp=root->left;
                free(root);
                root=NULL;
                return temp;
            }
            else
            {
                int x=findmax(root->left);
                root->data=x;
                root->left=sn(root->left,x);
            }
        }
    }
}
int height(struct tree *root)
{
    if(root==NULL)
        return 0;
    else if(root->left==NULL && root->right==NULL)
            return 1;
    else
    {
        int l=height(root->left);
        int r=height(root->right);
        if(l>r)
            return l+1;
        if(r>l)
            return r+1;
    }
}
int least_ancestor(struct tree *root,int a,int b)
{
    if(a<root->data && b>root->data)
        return root->data;
    else
    {
        if(a<root->data && b<root->data)
        {
            root=root->left;
            least_ancestor(root,a,b);
        }
        if(a>root->data && b>root->data)
        {
            root=root->right;
            least_ancestor(root,a,b);
        }
    }
}
int main()
{
    int d,n;
    cout<<"enter no of values req";
    cin>>n;
    struct tree *root=NULL;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        root=createbst(root,d);
    }
    dis(root);
    //sn(root,5);
    cout<<endl;
    dis(root);
    cout<<height(root)<<endl;
    int a,b;
    cin>>a>>b;
    cout<<endl;
    cout<<least_ancestor(root,a,b);
}
