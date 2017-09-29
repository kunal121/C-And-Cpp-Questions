#include<stdio.h>
typedef struct node
{
    int data;
    struct node* next;
}nn;
struct queue
{
    struct node*front;
    struct node*rear;
}q;
void add(struct queue*obj,int val)
{
    nn*n=(nn*)malloc(sizeof(nn));
    if(n==NULL)
    {
       // nn*n=(nn*)malloc(sizeof(nn));
        //n->data=val;
        //n->next=*h;
        //*h=n;
        //q.rear++;
    }
    else
    {
        //nn*current=*h;
        //while(current->next!=NULL)
        //{
        //    current=current->next;
        //}

        //nn*n=(nn*)malloc(sizeof(nn));
        n->data=val;
        n->next=NULL;
        if(obj->front==NULL)
        {
            obj->rear=n;
            obj->front=n;
        }
    }
    else
    {
       obj->rear->next=n;
       obj->rear=obj->rear->next;
    }
}
void Delete(struct queue*obj)
{
    if(isEmpty())
    {
        cout<<"empty";
    }
    else if(obj->front==obj->rear)
    {
    nn*temp=obj->front;
    obj->front=NULL;
    obj->rear=NULL;
    free(temp);
    temp=NULL;
    }
    else
    {
        nn*temp=obj->front;
        obj->front=obj->front->next;
        free(temp);
        temp=NULL;
    }
}
void display(nn*h)
{
    while(h!=NULL)
    {
        printf("%d",h->data);
        h=h->next;
    }
}
int main()
{
    struct node*head=NULL;
    int val;
    //scanf("%d",&val);
    add(&head,10);
    add(&head,20);
    display(head);
    delete(q);
return 0;
}
