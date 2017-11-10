/**
*   Solution to the hackerrank problem : Delete Duplicate-value nodes from sorted link list
*/
Node* RemoveDuplicates(Node *head)
{
    Node *temp = head;
    Node *next;
    while(temp->next != NULL){
        if(temp->data == temp->next->data){
            temp->next = temp->next->next;
        }
        else
            temp = temp->next;
    }
    return head;
}
