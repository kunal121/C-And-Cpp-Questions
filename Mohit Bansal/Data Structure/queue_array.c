
 #include<stdio.h>

struct queue
{
    int *arr;
    int front;
    int rear;
};
int isempty(struct queue *q1)
{
    if(q1->rear==-1)
        return 1;
    else
        return 0;
}
void insert(struct queue *q1,int a)
{

    if(q1->front==-1 && q1->rear==-1)
    {
        q1->front++;
        q1->rear++;
        q1->arr[q1->rear]=a;
    }
    else
    {
        q1->rear++;
        q1->arr[q1->rear]=a;
    }
}

void display(struct queue *q1)
{
    int i;
    if(isempty(q1))
        printf("Empty");
    else
    {
        for(i=q1->front;i<=q1->rear;i++)
        printf("%d ",q1->arr[i]);
    }

}

void delete1(struct queue *q1)
{
    if(q1->front==q1->rear)
        q1->front=q1->rear=-1;
    else
        (q1->front)++;
}
int main()
{
    int n,a,i;
    printf("Enter size:");
    scanf("%d",&n);
    struct queue *q1=(struct queue*)malloc(sizeof(struct queue));
    q1->arr=(int *)malloc(sizeof(int)*n);
    q1->front=-1;
    q1->rear=-1;

    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        insert(q1,a);
    }
    display(q1);
    printf("\nAfter Deleting first element:");
    delete1(q1);
    display(q1);
}
