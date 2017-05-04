#include<stdio.h>
void even();
void main()
{
int n;
printf("Enter the number to check even odd");
scanf("%d",&n);
even(n);
}

void even(int a)
{
if (a%2==0)
{
printf("Even");
}
else
{
printf("Odd");
}
}
