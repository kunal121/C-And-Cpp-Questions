/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *temp = new Node;
        Node *save = new Node;

  if(head==NULL){
      temp->data=data;
      temp->next=NULL;
      head = temp;
      //cout<<head->data<<" --> "<<head->next;
  }
    else
        {
        temp = head;
        while(temp->next != NULL)
            {
            temp= temp->next;
        }
        save->data = data;
        save->next = NULL;
        temp->next = save;
    }
    return head;
}
