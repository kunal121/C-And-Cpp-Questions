#include<stdio.h>
void main()
{
struct cricket
{
    char name[99];
    char team[99];
    int bavg;
}crick[50];
int i,n;
char z;
printf("Enter the number of players\n");
scanf("%d",&n);
getchar();
for(i=0;i<n;i++)
{
    printf("Enter the player name\n");
    gets(crick[i].name);
    printf("Enter the team name\n");
    gets(crick[i].team);
    printf("Enter the batting average\n");
    scanf("%d",&crick[i].bavg);
    scanf("%c",&z);
}
printf("\n\n\n\n\n\n\n");
printf("Check your details\n");
for(i=0;i<n;i++)
{
    puts(crick[i].name);
    puts(crick[i].team);
    printf("%d\n",crick[i].bavg);
}
}
