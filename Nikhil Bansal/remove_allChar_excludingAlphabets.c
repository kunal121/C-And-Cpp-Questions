#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    printf("Enter the string ");
    gets(a);
    int i,j;
    for(i=0;a[i]!='\0';i++)
    {
        while(a[i]>=32 && a[i]<=64 || a[i]>=91 && a[i]<=96 || a[i]>=123 && a[i]<127)
        {
            for(j=i;a[j]!='\0';j++)
            {
                a[j]=a[j+1];
            }
            i=i-1;
            break;

        }
    }
    puts(a);

}
