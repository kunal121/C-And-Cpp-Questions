#include<stdio.h>
void main()
{
    int a[50],b[50],*p,*q,n,m,i;
    printf("Enter number of array 1");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number of array 2");
    scanf("%d",&m);
    printf("Enter the elements");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    p=a;
    q=b;
    if(n==m)
    {
     iden(p,q,n);
    }
    else
    {
        printf("0");
    }

}
void iden(int *p,int *q,int n)
{
    int i,z=0;
for(i=0;i<n;i++)
{
    if(*(p+i)==*(q+i))
    {
            z++;
    }
    else
    {
        z=0;
        break;
    }
}
if(z==0)
{
    printf("0");
}
else
{
    printf("1");
}
}
