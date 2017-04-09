#include<stdio.h>
int i,j,c[100][100],k,sum=0;
void add(int a[100][100],int b[100][100],int n)
{
     for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           c[i][j]=a[i][j]+b[i][j];
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
         printf("%d\t",c[i][j]);
       }
       printf("\n");
   }
}
void sub(int a[100][100],int b[100][100],int n)
{
     for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           c[i][j]=a[i][j]-b[i][j];
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
         printf("%d\t",c[i][j]);
       }
       printf("\n");
   }
}
void multi(int a[100][100],int b[100][100],int n)
{

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            for(k=0;k<n;k++)
            {
              sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }


}

void main()
{
    int n,c,a[100][100],b[100][100];
   printf("Enter rows and column of 1st and 2nd matrix");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("a[%d][%d]",i,j);
           scanf("%d",&a[i][j]);
       }

   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("b[%d][%d]",i,j);
           scanf("%d",&b[i][j]);
       }

   }
   printf("1 to add\n2 to subtract\n3 to multiply\n");
   printf("Enter choice:");
    scanf("%d",&c);
    switch(c)
    {


    case 1:
           add(a,b,n);
           break;
    case 2:
           sub(a,b,n);
         break;
    case 3:
        multi(a,b,n);
        break;
}
}
