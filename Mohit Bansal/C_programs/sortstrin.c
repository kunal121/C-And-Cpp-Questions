#include<stdio.h>
#include<string.h>
void main()
{
    char a[200],temp;
    int i=0,j;
    printf("enter string");
    gets(a);
    for (i = 0 ; i< strlen(a); i++)
  {
    for (j = 0 ; j < strlen(a) - i - 1; j++)
    {
       if((a[j]>a[j+1]))
        {
            (temp=a[j]);
            (a[j]=a[j+1]);
            (a[j+1]=temp);
        }
    }
  }
        puts(a);
}
