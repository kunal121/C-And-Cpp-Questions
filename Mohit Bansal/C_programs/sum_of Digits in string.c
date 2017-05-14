#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    int i,c=0,sum=0,j;
    printf("enter string\n");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        c++;
    if(name[i]>='0' && name[i]<='9')
            sum+=(name[i]-'0');

    }
    printf("%d\n",c);
    printf("%d\n",sum);
}
