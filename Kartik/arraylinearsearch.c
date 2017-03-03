
#include<stdio.h>
void main()
{
int a[50],b,n,i,count=0;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter number to be searched");
scanf("%d",&b);
for(i=0;i<n;i++)
{
    if(a[i]==b)
    {
        count=100;
        break;
    }
    else
    {
        count=1;

    }
}
if(count==100)
{
    printf("Number found");
}
else
{
    printf("Number not found");
}
}
