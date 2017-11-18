
#include<stdio.h>
int main()
{ int size,j;
printf("enter the size");
    scanf("%d",&size);
int arr[size],elem,i, flag =0;

for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
    printf("\nenter the position yu want to delete");
    scanf("%d",&elem);


    for(i=0;i<size-1;i++)
    {
        if (elem == size){
            flag = 1;
            break;
        }
        if(i>=elem-1 && elem<size)
        {
            flag =1;
            arr[i]= arr[i+1];
        }
    }

    if(flag ==1){
        size--;
    }

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

return 0;
}
