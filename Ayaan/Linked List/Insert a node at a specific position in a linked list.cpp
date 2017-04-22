/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *temp = new Node;
    Node *np1 = new Node;
    Node *np2 = new Node;
    np1 = head;
    np2 = head;
    temp->data = data;
    temp->next= NULL;
  if(position == 0)
      {
      temp->next=head;
      head=temp;
  }
    else{
        for(int i=1;i<position;i++){
            np1 = np1->next;
            np2 = np2->next;
        }
        np2 = np2->next;
        np1->next=temp;
        temp->next=np2;
    }
    return head;
}
