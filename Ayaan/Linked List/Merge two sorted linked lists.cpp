/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    Node *np = new Node;
    np= NULL;
    if(headA==NULL)
        return headB;
    else if(headB==NULL)
        return headA;
        if(headA->data<headB->data)
            {
            np = headA;
            np->next=MergeLists(headA->next,headB);
        }
        if(headB->data<headA->data)
            {
            np=headB;
            np->next=MergeLists(headA,headB->next);
        }
    return np;
}