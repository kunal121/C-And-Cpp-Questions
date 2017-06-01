#include<stdio.h>
void main()
{
    int a[10],b[10],i,n,max,roll;
    printf("enter how many students are there");
    scanf("%d",&n);
    printf("enter roll no of students and marks");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    max=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]<b[i+1])
        {
            max=b[i+1];
            roll=a[i+1];
        }
    }
    printf("max marks=%d\n",max);
    printf("roll no=%d",roll);

    }
