#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int marks;
}s1;
void main()
{
    printf("Enter the name of the student : ");
    scanf("%s",s1.name);
    printf("Enter the roll : ");
    fflush(stdin);
    scanf("%d",&s1.roll);
    printf("Enter the marks : ");
    scanf("%d",&s1.marks);
    printf("%s\n%d\n%d",s1.name,s1.roll,s1.marks);
}
