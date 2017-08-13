#include<stdio.h>
#include<string.h>
void main()
{
int i=0,count=0,b;
char a[50];
printf("Enter the string to check string length\n");
gets(a);
while(a[i]!='\0')
{
count++;
i++;
}
printf("The string length (without function) is %d\n",count);
b=strlen(a);
printf("The string length (with function) is %d",b);
}
