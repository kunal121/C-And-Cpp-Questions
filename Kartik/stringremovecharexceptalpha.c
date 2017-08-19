#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,z,temp=0,j=0;
    char a[50],l[50];
    printf("Enter the string\n");
    gets(a);
    z=strlen(a);
    for(i=0;i<z;i++)
    {
        if(a[i]>=65 && a[i]<=90||a[i]>=97 && a[i]<=122)
        {
                l[j]=a[i];
                j++;
        }
        else
        {
                l[j]=' ';
                j++;
        }
    }
 for(i=0;i<j;i++)
    {
        printf("%c",l[i]);
    }
}
