#include<stdio.h>
#include<string.h>
int main()
{
int n,a,i=0,count=0;
char z[50],y;
printf("Enter the string\n");
gets(z);
printf("Enter character to check the frequency\n");
scanf("%c",&y);
while(z[i]!='\0')
{
if(z[i]==y)
{
count++;
}
i++;
}
printf("The frequency of character is %d",count);
}
