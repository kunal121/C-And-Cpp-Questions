#include<iostream>
using namespace std;
struct tree {
	int data;
	tree *left;
	tree *right;
}*root = NULL;

tree* insert(tree *root, int value) {
	if (root == NULL) {
		tree *temp = new tree;
		temp->data = value;
		temp->left = NULL;
		temp->right = NULL;
		root = temp;
		return root;
	}
	if (root->data < value)
		root->right = insert(root->right, value);
	else 
		root->left = insert(root->left, value);
}

void display(tree *root) {
	if(root == NULL)
		return;
	cout << root->data << " ";
	display(root->left);
	display(root->right);
}

int main()
{
	root = insert(root,1);
	root = insert(root,10);
	root = insert(root,0);
	display(root);
}
