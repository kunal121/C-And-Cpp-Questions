#include<stdio.h>
struct student
{
	int id;
	char name[20];
	char course[100];
	float fees;
};
int main()
{
	struct student c1;
	printf("Enter the student's name:");
	scanf("%s",&c1.name);
	printf("Enter student's id");
	scanf("%d",&c1.id);
	printf("Enter the student's course:");
	scanf("%s",&c1.course);
	printf("Enter the student's fees:");
	scanf("%d",&c1.fees);
	printf("student's name is:%s\n",c1.name);
	printf("student's id is:%d\n",c1.id);
	printf("student's course is:%s\n",c1.course);
	printf("student's fees is:%d\n",c1.fees);
}
