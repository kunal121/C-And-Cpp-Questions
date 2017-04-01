#include<stdio.h>
#include<string.h>
void main()
{
int a[10][10],i,n,j,big,sum=0,c;
printf("Enter the order of matrix");
scanf("%d",&n);
printf("Enter the elements of array");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter 1 for row sum and 0 for column sum");
scanf("%d",&big);
switch(big)
{
case 0:
{
printf("Enter the column number");
scanf("%d",&c);
for(i=0;i<n;i++)
{
sum=sum+a[i][c-1];
}
break;
}
case 1:
    {
printf("Enter the row number");
scanf("%d",&c);
for(i=0;i<n;i++)
{
sum=sum+a[c-1][i];
}
break;
}
default:
    {
        printf("Wrong input");
    }

}

printf("The sum will be %d",sum);

}
