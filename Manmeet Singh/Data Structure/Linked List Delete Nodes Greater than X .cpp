#include <iostream>
using namespace std;

/*
 * Complete the function below.
 */
/*
For your reference:
LinkedListNode {
    int val;
    LinkedListNode *next;
};
*/

LinkedListNode* removeNodes(LinkedListNode* list, int x) {
LinkedListNode *t,*temp;
    temp=list;
    t=list;
    while(temp!=NULL){
        if(temp->val > x){
            t->next=temp->next;
        }
        else{t=temp;}
        temp=temp->next;
    }
    temp=list;
    if(temp->val >x ) return temp->next;
return list;
}
