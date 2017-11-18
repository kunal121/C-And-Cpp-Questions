/**
*   Question : Inserting a Node into a sorted doubly linked list.
*/
Node* SortedInsert(Node *head,int data)
{
    Node *temp = head;
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if(temp == NULL){
        head = newNode;
    }
    else {
        while(temp->next != NULL){
            if(data <= temp->data)
                break;
            else
                temp = temp->next;
        }
        if(temp->data == head->data && temp->data >= data){
            newNode->next = temp;
            temp->prev = newNode;
            head = newNode;
        }
        else if(temp->data == head->data && temp->data <= data) {
            temp->next = newNode;
            newNode->prev = head;
        }
        else if(temp->next == NULL && data >= temp->data){
            newNode->prev = temp;
            temp->next = newNode;
        }
        else {
            newNode->next = temp;
            temp->prev->next = newNode;
            newNode->prev = temp->prev;
            temp->prev = newNode;
        }
    }
    /*temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;*/
    return head;
}
