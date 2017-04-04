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
int x=1;
int ch;
int i=0,j,n,r;
int pos,t=0;
while(x==1)
{
printf("\n1.add a record\n2.delete a record\n3.edit a record\n4.Display all records\n5.exit\n");
printf("Enter your choice");
scanf("%d",&ch);
	switch(ch)
	{
	case 1: s[i].roll=i+1;
		scanf("%s",s[i].name);
		scanf("%s",s[i].branch);
		i++;
		break;
	case 2: printf("Enter a roll no whose record to be deleted");
		scanf("%d",&r);
		for(j=0;j<i;j++)
		{
			if(s[j].roll==r)
			{
			pos=j;
			t=1;
			}
		}
		if(t==1)
		{
			for(j=pos;j<i;j++)
			{
			s[pos]=s[pos+1];
			}
		}
		else
		printf("\nroll no not found\n");
		i--;
		break;

	case 3: printf("Enter the roll no of stdent whose data to be edited:");
		scanf("%d",&r);
		for(j=0;j<i;j++)
		{
			if(s[j].roll==r)
			{
			pos=j;
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
		break;


	case 4:for(j=0;j<i;j++)
		{
		printf("\nroll no\t%d\n",s[j].roll);
		printf("name\t%s\n",s[j].name);
		printf("branch\t%s\n",s[j].branch);
		}
		break;
	default :x=0;
		 printf("Exiting.....");
       		 break;
}

//printf("Enter 1 to go to menu else 0 to exit\n");
}
printf("Thank you for your time.....  :)");
}


