#include<stdio.h>
void main()
{
char a[10];
int m,i;
printf("Enter a word");
scanf("%s",a);
printf("\n");
for(i=0;i<strlen(a);i++)
{
    m=a[i];
    printf("%d\n",m);
}
}
