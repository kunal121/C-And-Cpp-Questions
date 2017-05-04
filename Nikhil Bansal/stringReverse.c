#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],temp[20];
    int i,n;
    printf("Enter the string ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        n=i;
    }
    n=n+1;
    printf("%d",n);
    for(i=0;i<n/2;i++)
    {
        strcpy(temp,a[i]);
        strcpy(a[i],a[n-i-1]);
        strcmp(a[n-i-1],temp);
    }
    for(i=0;i<n;i++)
    {
        puts(a[i]);
    }
}
