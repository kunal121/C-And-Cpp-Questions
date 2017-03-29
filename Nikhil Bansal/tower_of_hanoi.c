#include<stdio.h>
void move(int n,char s,char d,char t)
{
    if(n==1)
        printf("%c --> %c\n",s,d);
    else
    {
        move(n-1,s,t,d);
        move(1,s,d,t);
        move(n-1,t,d,s);
    }
}
void main()
{
    int n;
    scanf("%d",&n);
    move(n,'A','B','C');
}
