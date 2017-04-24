/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  Node *temp = new Node;
      Node *np1 = new Node;
    Node *np2 = new Node;
    if(position==0){
        temp = head;
        head = head->next;
        delete(temp);
    }
    else{
        np1= head;
        np2=head;
        for(int i=1;i<position;i++){
            np1= np1->next;
            np2=np2->next;
        }
        np2=np2->next;
        temp = np2;
        np1->next=np2->next;
        delete(temp);
    }
    return head;
}
