#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
int roll;
char name[50];
int total;
union
{
float per;
char grade;
}b;
}s[10];
void main()
{
int n,i;
char ch;
printf("Enter no of students");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&s[i].roll);
scanf("%s",s[i].name);
scanf("%d",&s[i].total);
	if(s[i].total<40)
	{
	printf("is student fail(f) or detained(d)");
	scanf("%c",&ch);
	scanf("%c",&ch);
		if(ch=='f')
		s[i].b.grade='F';
		else
		s[i].b.grade='I';
	}
	else
	s[i].b.per=(float)s[i].total;
}
printf("roll\tname\ttotal\tresult\n");
for(i=0;i<n;i++)
{
if(s[i].total>40)
printf("%d\t%s\t%d\t%0.2f%%\n",s[i].roll,s[i].name,s[i].total,s[i].b.per);
else
printf("%d\t%s\t%d\t%c\n",s[i].roll,s[i].name,s[i].total,s[i].b.grade);

}
}
