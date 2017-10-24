//Binary Search tree
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
node* insertion(node *n,int d)
{
    if(n==NULL)
    {
        node *temp = new node;
        temp->data = d;
        temp->left = NULL;
        temp->right = NULL;
        n = temp;
    }
    else if(d < n->data)
    {
        n->left = insertion(n->left,d);
    }
    else
    {
        n->right = insertion(n->right,d);
    }
    return n;
}
node* large(node *n)
{
    if(n == NULL || n->right == NULL)
        return n;
    else
        return large(n->right);
}
node* deleteNode(node *n, int d)
{
   node *ptr;
    if(n == NULL)
        cout<<"Not present";
    else if(d < n->data)
        n->left = deleteNode(n->left,d);
    else if(d > n->data)
        n->right = deleteNode(n->right,d);
    else
    {
        if(n->left && n->right)
        {
            ptr = large(n->left);
            n->data = ptr->data;
            n->left=deleteNode(n->left,ptr->data);
        }
        else
        {
            ptr = n;
            if(n->left == NULL && n->right == NULL)
                n = NULL;
            else if(n->left != NULL)
                n = n->left;
            else
                n = n->right;
            delete ptr;
        }

    }
    return n;
}
int searching(node *n,int d)
{
    if(n == NULL)
        return 0;
    else if(n->data == d)
        return 1;
    else if(d< n->data)
        return searching(n->left,d);
    else
        return searching(n->right,d);
}
void display(node *n)
{
    if(n == NULL)
        return;

    display(n->left);
    cout<<n->data<<" ";
    display(n->right);
}
int main()
{
    struct node *root = NULL;
    int ch=1,d,res;
    while(ch!=0)
    {
        cout<<"1.insert a node\n2.search a node\n3.Display the elements\n4.Enter the value to be deleted\n5.To quit\nEnter you choice...\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter the value to be inserted\n";
            cin>>d;
            root = insertion(root,d);
            break;
        case 2:
            cout<<"Enter the value to be searched\n";
            cin>>d;
            res = searching(root,d);
            if(res==1)
                cout<<"Found!!\n";
            else
                cout<<"Not Found!!";
            break;
        case 3:
            display(root);
            break;
        case 4:
            cout<<"Enter value to be deleted\n";
            cin>>d;
            root = deleteNode(root,d);
            break;
        case 5:
            ch=0;
            break;

        }
    }
}
