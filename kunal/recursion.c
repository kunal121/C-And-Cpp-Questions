#include<stdio.h>
int Add(int N, int *arr)
{
    if(N<0)
        return 0;
    else
        return arr[N]+Add(N-1,arr);
}
void display(int ptr)
{
    printf("%d",ptr);
}

int factorial(int x){
    if(x == 1)
        return 1;
    else
        return x*factorial(x-1);

}
int main() {
    int *arr,*ptr;
    int N,sum,i,choice,fact;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            scanf("%d",&N);
            display(N);
            break;
        case 2:
            scanf("%d",&N);
            fact = factorial(N);
            display(fact);
            break;
        case 3:
            scanf("%d",&N);
            arr =(int*)calloc(100,sizeof(int));
            for(i=0;i<N;i++)
                scanf("%d",&arr[i]);
                sum = Add(N-1,arr);
            display(sum);
            break;
        default:
            break;
    }
    return 0;
}
#parastandon659@gmail.com
