#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
struct Node
{
int data;
struct Node *next;
};
typedef struct Node node;
node *head1, *head2 ,*result;
int num(int n, node* head)
{
int num1 = 0;
node* temp;
temp = head;
n--;
while(temp != NULL)
{
num1 = num1 + (temp->data*pow(10, n));
n = n-1;
temp = temp->next;
}
//printf("num:%d ",num1);
return num1;
}
node* insertAtFront(node* result, int t)
{
node* newnode;
//printf("t:%d",t);
if(result == NULL)
{
newnode -> data = t;
newnode -> next = NULL;
result = newnode;
// printf("%d",result->data);
}
else{
newnode -> data = t;
newnode ->next = result;
//result = newnode;
}
return newnode;
}
void addLists(node* head1, node* head2, node* result, int n1, int n2)
{
int num1, num2, t, sum;
num1 = num(n1, head1);
num2 = num(n2, head2);
sum = num1 + num2;
//printf("sum:%d",sum);
while(sum)
{
t = sum%10;
sum = sum/10;
result = insertAtFront(result, t);
node* temp;
temp = result;
while(temp!=NULL)
{
//printf("temp:%d",temp->data);
temp = temp->next;
}
}
}
void display(node* result)
{
while(result != NULL)
{
printf("%d ",result->data);
result = result -> next;
}
printf("\n");
}
void insert(int n, node* head)
{
int t, i;
for(i = 0; i < n; i++)
{
scanf("%d",&t);
if(head->data == 0)
{
head -> data = t;
head -> next = NULL;
//printf("%d head ",head->data);
}
else{
node* temp = NULL;
node* newnode = (node*)malloc(n*(sizeof(node)));
temp = head;
newnode -> data = t;
newnode -> next = NULL;
while(temp -> next != NULL)
{
temp = temp -> next;
}
temp -> next = newnode;
}
}
}
int main() {
int n1, n2, i, t;
node* result;
scanf("%d",&n1);
scanf("%d",&n2);
head1 = (node*)malloc(n1*(sizeof(node)));
head2 = (node*)malloc(n2*(sizeof(node)));
result = NULL;
//result = (node*)malloc((n1+n2)*sizeof(node));
insert(n1, head1);
insert(n2, head2);
addLists(head1, head2, result, n1, n2);
display(result);
return 0;
}
