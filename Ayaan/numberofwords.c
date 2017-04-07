#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char a[200],st[200],aa[200];
    st[0]=' ';
    gets(a);
    int l,i;
    l=strlen(a);
     printf("%d",l);
    for(i=0;i<l;i++)
    {

        if(a[i]==' '){
            printf("%s\n",st);
            st[i]=' ';
        }
        else
        {
            aa=a[i];
            strcat(st,aa);
            puts(st);
        }
    }
}
