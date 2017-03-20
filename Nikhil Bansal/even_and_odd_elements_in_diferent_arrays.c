//PUT EVEN AND ODD ELEENTS OF ARRAY IN 2 DIFFERENT ARRAYS
#include<stdio.h>
void main()
{
    int size,i,j=0,k=0;
    printf("Enter the size of array ");
    scanf("%d",&size);
    int a[size],even[size],odd[size];
    printf("ENTER THE ELEMENTS\n");
    for(i=0;i<size;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            even[j] = a[i];
            j=j+1;
        }
        else
        {
            odd[k] = a[i];
            k=k+1;
        }
    }
    printf("ODD ARRAY \n");
    for(i=0;i<k;i++)
    {
        printf("%d\t",odd[i]);
    }
    printf("\nEVEN ARRAY \n");
    for(i=0;i<j;i++)
    {
        printf("%d\t",even[i]);
    }
}
