Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method
    Node *currA,*currB;
  if (headA == NULL) {
      return headB;
  }  
  else if (headB == NULL) {
      return headA;
  } 
    
  if (headA->data < headB->data) {
      currA = headA;
      headA = headA->next;
  }
  else {
      currA = headB;
      headB = headB->next;
  }
  
  currB = currA;     
  while (headA != NULL && headB != NULL) {
      if (headA->data <headB->data) {
          currA->next =headA;
          headA = headA->next;
      }
      else {
          currA->next =headB;
          headB = headB->next;
      }
      currA = currA->next;
  }  
    
  if (headA != NULL) {
      currA->next = headA;
  }
    
  if (headB != NULL) {
      currA->next = headB;
  }    
  return currB;  
    
}

