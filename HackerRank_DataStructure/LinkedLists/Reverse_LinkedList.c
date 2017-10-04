Node* Reverse(Node *head)
{
  
  Node *first, *second;
  first = head;
  second = head->next;
  if(head->next == NULL) {
    return head;
  }
  Node *h = second;
  second = Reverse(second);
  h->next = first;
  first->next = NULL;
  return second;
}
