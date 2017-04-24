/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  if(headA==NULL && headB==NULL)
      return 1;
    else
        {
        while(headA!=NULL && headB!=NULL)
            {
            if(headA->data == headB->data){
            headA = headA->next;
            headB = headB->next;
            if(headA==NULL && headB == NULL)
                return 1;}
            else
                return 0;
        }
        return 0;
    }
}
