#include<stdio.h>
#include<stdlib.h>
struct student
{
int roll;
char name[20];
char branch[10];
}s[100];
void main()
{
int i,j,n,r;
int pos,t=0;
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	s[i].roll=i+1;
	scanf("%s",s[i].name);
	scanf("%s",s[i].branch);
	}
printf("Enter the roll no:");
scanf("%d",&r);
for(i=0;i<n;i++)
{
if(s[i].roll==r)
{
pos=i;
t=1;
}
}
if(t==1)
{
printf("Enter new name of student");
scanf("%s",s[pos].name);
printf("Enter new branch of student");
scanf("%s",s[pos].branch);
}
else
printf("\nroll no not found\n");

for(i=0;i<n;i++)
	{
	printf("\nroll no\t%d\n",s[i].roll);
	printf("name\t%s\n",s[i].name);
	printf("branch\t%s\n",s[i].branch);
		
}
}
