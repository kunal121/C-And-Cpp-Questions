#include<stdio.h>
void main()
{
int space=0,line=0,count=0,i=0;
char a[50],*p;
printf("Enter the text ");
gets(a);
p=&a;
while(*(p+i)!='\0')
{
  if(*(p+i)==' '||*(p+i)=='.')
  space++;
  if(*(p+i)=='.')
  line++;

  count++;

  i++;
}
printf("words are %d",space+1);
printf("lines are %d",line);
printf("Characters are %d",count-space);
}
