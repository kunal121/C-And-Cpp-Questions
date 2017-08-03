#include<stdio.h>
void main()
{
    int b,n,i=0,temp,j;
    char a[50];
    printf("Enter the string\n");
    gets(a);
    n=strlen(a);
    for(j=0;j<n;j++)
    {
    for(i=0;i<n;i++)
        {
    if(a[i]>a[i+1])
            {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
    printf("%c ",a[i]);
    }
}
