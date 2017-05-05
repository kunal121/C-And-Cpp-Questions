#include<stdio.h>
void main(){
int i,j,k,n;
printf("enter n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n;j>i;j--)
{
    printf(" ");
}
for(k=1;k<i;k++)
    {
    printf("%d",k);
    }
printf("\n");
}
}
