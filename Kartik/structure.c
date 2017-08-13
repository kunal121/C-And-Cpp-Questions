#include<stdio.h>
void main()
{
    struct student
    {
        char name[100];
        char email[100];
        long long int mobile;
    }student;
    struct add
    {
        char street[100];
        char city[100];
        int pin;
    }add;
    struct dob
    {
        int date;
        int month;
        int year;
    }dob;
    printf("Enter the student details\n");
    printf("Enter the name\n");
    gets(student.name);
    printf("Enter the email\n");
    gets(student.email);
    printf("Enter the mobile number\n");
    scanf("%lld",&student.mobile);
    printf("Enter the address\n");
    printf("Enter your street\n");
    getchar();
    gets(add.street);
    printf("Enter your city\n");
    gets(add.city);
    printf("Enter your pin\n");
    scanf("%d",&add.pin);
    printf("Enter your date of birth\n");
    printf("Enter the date\n");
    scanf("%d",&dob.date);
    printf("Enter the month\n");
    scanf("%d",&dob.month);
    printf("Enter the year\n");
    scanf("%d",&dob.year);
    printf("\n\n\n\n\n\n");
    printf("Check your details\n");
    printf("Student details are:\n");
    printf("%s\n%s\n%lld\n",student.name,student.email,student.mobile);
    printf("Address details are\n");
    printf("%s\n%s\n%d\n",add.street,add.city,add.pin);
    printf("Date of birth is \n");
    printf("%d\n%d\n%d\n",dob.date,dob.month,dob.year);

}
