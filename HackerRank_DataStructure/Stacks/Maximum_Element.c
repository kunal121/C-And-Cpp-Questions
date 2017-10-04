#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct stack1{
    int num;
    struct stack1 *next;    
}stack1;

int max = -9999;
void push (stack1 **head, int num){
    stack1* s = (stack1*)malloc(sizeof(stack1*));
    s->num = num;
    s->next = *head;
    *head = s;
}

void pop (stack1 **head){
     stack1* s = *head;
     *head = (*head)->next;
     free(s);
}

void max_num(stack1* head) {
    stack1 *temp = head;
    max = head->num;
    temp = temp->next;
    while (temp != NULL) {
        if (temp->num>max) {
            max = temp->num;
        }
        temp = temp->next;
    }

}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack1* s = NULL;
    int n,num,choice;
    
    
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                scanf("%d", &num);
                if (num > max) {
                    max = num;
                }
                push(&s,num);
                break;
            case 2:
                if (s->num == max){
           
                    pop(&s);
                    if (s !=NULL) {
                         max_num(s);     
                    }
                    else {
                        max = -999;
                    }
                }
                else {
                    pop(&s);    
                }
                break;
            default:
               printf("%d\n", max);
               break; 
        }
    }
    return 0;
}

