int GetNode(Node *head,int positionFromTail)
{
    Node *curr = head;
    Node *next = curr->next;
    Node *prev = NULL;
    int count = 0;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    curr = prev;
    while(count < positionFromTail){
        curr = curr->next;
        count++;
    }
    return curr->data;
}
