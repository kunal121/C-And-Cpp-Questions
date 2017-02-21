/*
    C program to Create a custom mcq test.
*/
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
struct question
{
    char ques[100];
    char a[10];
    char b[10];
    char c[10];
    char d[10];
    char corr_option;
    char option;
}s[100];
int ans=0;
void create_test(int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("Enter question %d\n",i+1);
        scanf("%s",s[i].ques);
        printf("Enter the options\n");
       getchar();
        scanf("%s%s%s%s",s[i].a,s[i].b,s[i].c,s[i].d);
        printf("Enter the correct option a/b/c/d ");
       getchar();
        scanf("%c",&s[i].corr_option);
        printf("\n");
    }
}
void print_test(int n)
{
    system("cls");
    int i;
    for(i=0;i<n;i++)
    {
        printf("Question %d : %s\n",i+1,s[i].ques);
        printf("a:%s\tb:%s\nc:%s\td:%s\n",s[i].a,s[i].b,s[i].c,s[i].d);
        printf("Enter your answer ");
        fflush(stdin);
        scanf("%c",&s[i].option);
        if(s[i].option == s[i].corr_option)
            ans = ans + 1;
    }

    printf("\n");
    printf("Result : %d/%d\n",ans,n);
}
void main()
{

    int i,j,choice=1,n;
    while(choice)
    {
        printf("MENU :\n1. Create the test\n2.Execute the test\nEnter your choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :printf("Enter the number of questions ");
                    scanf("%d",&n);
                    create_test(n);
                    break;
            case 2 :print_test(n);
                    exit(0);
                    break;
            default : exit(0);
        }

    }
}

