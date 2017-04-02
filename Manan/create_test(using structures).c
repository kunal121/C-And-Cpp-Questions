#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct test
{
char q[100],a[10],b[10],c[10],d[10],corr;
}s[10];
void main()
{
int n,i;
char ch;
static int count=0;
printf("Creating test....");
printf("\nEnter the no of ques in test");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter %d ques::\n",i+1);
gets(s[i].q);
gets(s[i].q);
printf("enter the options:\n");
gets(s[i].a);
gets(s[i].b);
gets(s[i].c);
gets(s[i].d);
printf("Enter correct option\n");
scanf("%c",&s[i].corr);
}
for(i=0;i<n;i++)
{
printf("\nQues is..\nQ%d.",i+1);
puts(s[i].q);
printf("a::");
puts(s[i].a);
printf("b::");
puts(s[i].b);
printf("c::");
puts(s[i].c);
printf("d::");
puts(s[i].d);
printf("\nEnter correct answer::\n");
scanf("%c",&ch);
scanf("%c",&ch);
if(s[i].corr==ch)
{
printf("\nYou have entered correct answer\n");
count++;
}
else
printf("Wrong answer\n");
}
printf("\n%d out of %d are correct",count,n);
}

