#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    puts("Enter a string");
    char a[100];
    scanf("%s",a);
    int l,count=0,i;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')

        {
            count=count+1;

        }
        else
            printf("%c",a[i]);
    }
    printf("\n%d",count);
//    printf("%s",a);

}
