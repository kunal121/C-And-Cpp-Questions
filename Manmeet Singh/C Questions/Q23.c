#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,count=1,j;
    printf("Enter the string ");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j] && a[i]!='~')
            {
                count = count +1;
                a[j]='~';
            }
        }
        if(count>1 && a[i]!='\0')
        {
            printf("%c is repeated %d times\n",a[i],count);
        }
        count=1;
    }
}
