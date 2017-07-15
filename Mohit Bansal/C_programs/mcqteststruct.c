#include<stdio.h>
#include<windows.h>
int i,j,n,count=0;
struct ques
{
    char ques[100],a[4][10],option,correct;
}s[10];
void create()
{
    printf("enter how many ques req\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter %d ques\n",i+1);
        scanf("%s",s[i].ques);
        fflush(stdin);
        for(j=0;j<4;j++)
        {
            printf("enter %d option\n",j+1);
            scanf("%s",s[i].a[j]);
        }
        fflush(stdin);
        printf("enter correct option\n");
        scanf("%c",&s[i].correct);
    }

}
void execute()
{
    system("cls");
    for(i=0;i<n;i++)
    {
        printf("ques:%d:%s\n",i+1,s[i].ques);
        for(j=0;j<4;j++)
        {
            printf("%d:",j+1);
            printf("%s",s[i].a[j]);
            printf("\n");
        }
    }
    for(i=0;i<n;i++)
    {
        printf("enter option for %d ques\na/b/c/d",i+1);
        fflush(stdin);
        scanf("%c",&s[i].option);
        if(s[i].option==s[i].correct)
        {
            printf("\n");
            count++;
        }
    }
}
void print_score()
{
    printf("%d/%d\n",count,n);
}
void main()
{
    int n;
    int choice=1;
    while(choice!=0)
    {
        printf("menu:");
        printf("\n1.create\n2.execute\n3.score\n");
        printf("enter chioce");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create();
            break;
            case 2:execute();
            break;
            case 3:print_score();
            break;
            default:printf("pls enter correct choice 1/2/3");
            printf("if u wnt to exit press 0");
            exit(0);
        }
    }
}
