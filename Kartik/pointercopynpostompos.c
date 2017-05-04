#include<stdio.h>
void main()
{
int i,c,j,m,n;
char a[50],*p,b[50];
printf("Enter the text ");
gets(a);
printf("Enter the position to be picked");
scanf("%d",&n);
printf("Enter the number of char to be copied");
scanf("%d",&m);
c=strlen(a);
p=&a;
j=n-1;
for(i=0;i<m;i++)
{
    b[i]=*(p+j);
    j++;
}
for(i=0;i<m;i++)
{
    printf("%c",b[i]);
}
}
