#include<stdio.h>
void main()
{
    int i,j,n=5;
    char a[20],temp[20];
    gets(a);
    n=strlen(a);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp[0]=a[j];
                a[j]=a[j+1];
                a[j+1]=temp[0];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
}
