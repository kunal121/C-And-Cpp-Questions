#include<stdio.h>
void bubble_sort(int a[],int n)
{
  int i, j, temp;
  for (i = 0 ; i< ( n - 1 ); i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (a[j] > a[j+1])
      {
        /* Swapping */

        temp         = a[j];
        a[j]   = a[j+1];
        a[j+1] = temp;
      }
    }
  }
}
void merging(int a[],int b[],int n1,int n2)
{
    int i=0,j=0,k=0,c[100];
    while(i<n1 && j<n2)
        {
            if(a[i]>b[j])
            {
                c[k]=b[j];
                j++;
                k++;

            }
            else
            {
                c[k]=a[i];
                i++;
                k++;

            }
        }
        if(i==n1)
        {

            while(j<n2)

            {
                c[k]=b[j];
                j++;
            k++;
            }
        }
            else
            {

            while(i<n1)
            {c[k]=a[i];
                i++;
            k++;
            }
            }
    for(k=0;k<(n1+n2);k++)
        printf("%d ",c[k]);

}
void main()
{
    int a[100],b[100],n1,n2,i,j;
    printf("enter req elements in 1 array");
    scanf("%d",&n1);
    printf("enter elements of 1 array");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("enter req elements in 2 array");
    scanf("%d",&n2);
    printf("enter elements of 2 array");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
            bubble_sort(a,n1);

    bubble_sort(b,n2);
    for(i=0;i<n1;i++)
        printf("%d ",a[i]);

        printf("\n");
    for(i=0;i<n2;i++)
        printf("%d ",b[i]);

        printf("\n");
    merging(a,b,n1,n2);
}
