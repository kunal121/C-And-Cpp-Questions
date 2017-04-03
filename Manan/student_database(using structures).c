#include<stdio.h>
#include<stdlib.h>
struct student
{
int roll;
char name[20];
char branch[10];
int marks[5];
long long int phone;
}s[100];
void main()
{
int i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	scanf("%d",&s[i].roll);
	scanf("%s",s[i].name);
	scanf("%s",s[i].branch);
		for(j=0;j<5;j++)
		{
		scanf("%d",&s[i].marks[j]);
		}
	scanf("%lld",&s[i].phone);
	}
for(i=0;i<n;i++)
	{
	printf("\n%d\n",s[i].roll);
	printf("%s\n",s[i].name);
	printf("%s\n",s[i].branch);
		for(j=0;j<5;j++)
		{
		printf("%d\n",s[i].marks[j]);
		}
	printf("%lld\n",s[i].phone);
	}

}
