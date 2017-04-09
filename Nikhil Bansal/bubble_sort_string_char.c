#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],temp;
    int i,j;
    printf("Enter the string ");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        for(j=i;j<strlen(a)-i-1;j++)
        {
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    puts(a);
}
