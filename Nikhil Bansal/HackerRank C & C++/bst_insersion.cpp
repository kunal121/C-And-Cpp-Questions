/**
*   Solution to hackerrank problem : Binary Search Tree : Insertion
*/
node * insert(node *& root, int value) {
    if (root == NULL) {
        node *temp = new node;
        temp->data = value;
        temp->left = NULL;
        temp->right = NULL;
        root = temp;
    } else if(value > root->data) {
        insert(root->right, value);
    }
    else {
        insert(root->left, value);
    }
   return root;
}
