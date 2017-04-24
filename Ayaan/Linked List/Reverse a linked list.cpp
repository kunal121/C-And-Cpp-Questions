/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  Node *current = new Node;
    Node *pre = new Node;
    Node *next = new Node;
    current = head;
    pre= NULL;
    
    while(current!=NULL){
        next=current->next;
        current->next=pre;
        pre = current;
        current = next;
    }
    head=pre;
    return head;
}
