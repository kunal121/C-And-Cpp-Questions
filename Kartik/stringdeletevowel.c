#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,z,temp=0,j=0;
    char a[50],l[50];
    printf("Enter the string");
    gets(a);
    z=strlen(a);
    for(i=0;i<z;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {

              //temp++;
        }
        else
        {
            l[j]=a[i];
            j++;
        }
    }

 for(i=0;i<j;i++)
    {
        printf("%c",l[i]);
    }
}
